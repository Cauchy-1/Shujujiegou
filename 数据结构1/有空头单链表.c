#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<malloc.h>
struct Node
{
	int iData;
	struct Node* pNext;
};
void Look(struct Node stHead);//遍历
void FreeList(struct Node* stHead);//链表的释放
void AddToTail(struct Node* stHead, int iData);//尾添加 空头的iData代替计数的去遍历
void AddToHead(struct Node* stHead, int iData);//头添加
void AddBehindData(struct Node* stHead, int iPosData, int iData);//指定数据后面添加一个节点
void AddByIndex(struct Node* stHead, int iPosIndex, int iData);//指定下标后面插入节点
void AddBySomeIndex(struct Node* stHead, int iPosIndex, int iData, int iCount);//指定下标位置插入n个节点
struct Node* FindNodeByData(struct Node *stHead, int iData);//根据具体数据查找节点
struct Node* FindNodeByIndex(struct Node* stHead, int iIndex);//根据下标查找节点
void ChangeByIndex(struct Node stHead, int iIndex, int iValue);//根据下标修改指定节点数据
void ChangeByData(struct Node stHead, int iData, int iValue);//根据数据修改指定节点(一次性修改很多个)
void DeleteByIndex(struct Node* stHead, int iIndex);//删除指定下标节点
void DeleteAllSameNodeByData(struct Node* stHead, int iValue);//删除所有指定的数据节点
void DeleteSame(struct Node* stHead);//去重 4 3 2 4 2 => 432双重循环
int main()
{
	//空头 用指针写要申请空间
	struct Node stHead = { 0,NULL };
	//定义计数变量
	AddToTail(&stHead, 1);
	AddToTail(&stHead, 2);
	AddToTail(&stHead, 4);
	AddToHead(&stHead, 666);
	AddToTail(&stHead, 1);

	Look(stHead);
	//struct Node* pHead = (struct Node*)malloc(sizeof(struct Node));
	//pHead->iData = 0;
	//pHead->pNext = NULL;
	//free(pHead);
	


	FreeList(&stHead);
	system("pause");
	return 0;
}
void AddToTail(struct Node* stHead,int iData)
{
	if (stHead == NULL || stHead->iData < 0)
	{
		return;
	}
	struct Node* pTemp = (struct Node*)malloc(sizeof(struct Node));
	if (pTemp == NULL)
		return;
	pTemp->iData = iData;
	pTemp->pNext = NULL;
	//没有尾指针要遍历新链表找到尾
	struct Node* pT = stHead;
	while (pT->pNext != NULL)
		pT = pT->pNext;
	//循环完之后pT就是尾巴了
	pT->pNext = pTemp;
	//计数器++
	(stHead->iData)++;
}
void FreeList(struct Node* stHead)
{
	if (stHead == NULL || stHead->iData <= 0)
		return;
	struct Node* pTemp = stHead->pNext;//从空头的下一个开始遍历
	while (pTemp != NULL)
	{
		struct Node* pT = pTemp; //记录节点 节点下移 释放记录的
		pTemp = pTemp->pNext;
		free(pT);
	}
	stHead->pNext = NULL;
	stHead->iData = 0;
}
void Look(struct Node stHead)
{
	struct Node* pTemp = stHead.pNext;//不是指针传的只是普通变量
	printf("共有%d个数据 ", stHead.iData);
	while (pTemp != NULL)
	{
		printf("%d ", pTemp->iData);
		pTemp = pTemp->pNext;
	}
	printf("\n");
}
void AddToHead(struct Node* stHead, int iData)
{
	if (stHead == NULL)
		return;
	struct Node* pTemp = (struct Node*)malloc(sizeof(struct Node));
	if (pTemp == NULL)
		return;
	pTemp->iData = iData;
	pTemp->pNext = NULL;//赋初值
	pTemp->pNext = stHead->pNext;
	stHead->pNext = pTemp;
	//数量+1
	(stHead->iData) += 1;
}
void AddBehindData(struct Node* stHead, int iPosData, int iData)
{
	if (stHead == NULL || stHead->iData <= 0)
		return;
	struct Node* pTemp = stHead->pNext;
	while (pTemp != NULL)
	{
		if (pTemp->iData == iPosData)
			break;//添加完了break也行
		pTemp = pTemp->pNext;
	}
	if (pTemp == NULL)
	{
		printf("找不到啊!\n");
		return;
	}
	else
	{
		struct Node* pT = (struct Node*)malloc(sizeof(struct Node));
		if (pT == NULL)
		{
			printf("申请不成功!\n");
			return;
		}
		pT->iData = iData;
		pT->pNext = NULL;//赋初值
		pT->pNext = pTemp->pNext;
		pTemp->pNext = pT;
		(stHead->iData) += 1;
	}
}
void AddByIndex(struct Node* stHead, int iPosIndex, int iData)
{
	if (stHead == NULL || iPosIndex  > stHead->iData || iPosIndex < 0)
		return;
	struct Node* pTemp = stHead;//不用指向next
	for (int i = 0; i < iPosIndex; i++)
	{
		pTemp = pTemp->pNext;
	}
	//找到了
	AddToHead(pTemp, iData);
	(pTemp->iData) -= 1;
	(stHead->iData) += 1;
}
void AddBySomeIndex(struct Node* stHead, int iPosIndex, int iData, int iCount)
{
	if (stHead == NULL || iPosIndex > stHead->iData || iPosIndex < 0)
		return;
	struct Node* pTemp = stHead;//不用指向next
	for (int i = 0; i < iPosIndex; i++)
	{
		pTemp = pTemp->pNext;
	}
	//找到了循环插入
	for (int i = 0; i < iCount; i++)
	{
		AddToHead(pTemp, iData);
		(pTemp->iData) -= 1;
		(stHead->iData) += 1;
	}
}
struct Node* FindNodeByData(struct Node *stHead, int iData)
{
	if (stHead == NULL || stHead->iData <= 0)
		return NULL;
	struct Node* pTemp = stHead->pNext;
	while (pTemp != NULL)
	{
		if (pTemp->iData == iData)
			return pTemp;//break
		pTemp = pTemp->pNext;
	}
	return pTemp;//空
}
struct Node* FindNodeByIndex(struct Node* stHead, int iIndex)
{
	if (stHead == NULL || stHead->iData <= 0 || iIndex<0 || iIndex>(stHead->iData) - 1)
		return NULL;
	struct Node* pTemp = stHead->pNext;
	for (int i = 0; i < iIndex; i++)
	{
		pTemp = pTemp->pNext;
	}
	return pTemp;
}
void ChangeByIndex(struct Node stHead, int iIndex, int iValue)
{
	if (stHead.iData <= 0 || iIndex<0 || iIndex>(stHead.iData) - 1)
		return NULL;
	struct Node* pTemp = stHead.pNext;
	//循环找节点
	for (int i = 0; i < iIndex; i++)
		pTemp = pTemp->pNext;
	pTemp->iData = iValue;
}
void ChangeByData(struct Node stHead, int iData, int iValue)
{
	if (stHead.iData <= 0)
		return;
	struct Node* pTemp = stHead.pNext;
	while (pTemp != NULL)
	{
		if (pTemp->iData == iData)
			pTemp->iData = iValue;
		pTemp = pTemp->pNext;
	}
}
void DeleteByIndex(struct Node* stHead, int iIndex)
{
	if (stHead == NULL || iIndex<0 || iIndex>(stHead->iData) - 1)
		return;
	//循环找前一个节点
	struct Node* pTemp = stHead;//从空头往下遍历找到的就是前一个节点了
	for (int i = 0; i < iIndex; i++)
		pTemp = pTemp->pNext;
	struct Node* pT = pTemp->pNext;//记录被删除的节点
	pTemp->pNext = pT->pNext;
	free(pT);//释放
	(stHead->iData) -= 1;
}
void DeleteAllSameNodeByData(struct Node* stHead, int iValue)
{
	if (stHead == NULL || stHead->iData <= 0)
		return;
	struct Node* pTemp = stHead;
	while (pTemp->pNext != NULL)
	{
		if (pTemp->pNext->iData == iValue)//找到前一个节点
		{
			struct Node* pT = pTemp->pNext;//记录被删除的节点
			pTemp->pNext = pT->pNext;
			free(pT);
			(stHead->iData) -= 1;
			continue;//不要往下走
		}
		pTemp = pTemp->pNext;
	}

}
void DeleteSame(struct Node* stHead)
{
	if (stHead == NULL || stHead->iData <= 1)//数量小于一个就不用去重
		return;
	struct Node* pWai = stHead->pNext;//控制外部循环
	while (pWai != NULL)
	{
		//跟后面的节点进行比较
		struct Node* pNei = pWai;
		while (pNei->pNext != NULL)
		{
			if (pWai->iData == pNei->pNext->iData)
			{
				//删除pNei的next
				struct Node* pTemp = pNei->pNext;
				pNei->pNext = pTemp->pNext;
				free(pTemp);
				(stHead->iData) -= 1;
				continue;
			}
			pNei = pNei->pNext;
		}
		pWai = pWai->pNext;
	}
}