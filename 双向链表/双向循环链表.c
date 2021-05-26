//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//#include<malloc.h>
//struct Node
//{
//	int iData;
//	struct Node* pNext;
//	struct Node* pPre;
//};
////尾添加 循环链表的尾不需要记录 因为它就在空头的前一个 是在前面添加
//void AddToEnd(struct Node* stHead, int* iCount, int iData);
////遍历
//void Look(struct Node* stHead, int *iCount);
////释放链表
//void FreeList(struct Node* stHead, int* iCount);
////头添加
//void AddToHead(struct Node* stHead, int* iCount, int iData);
////创建节点
//struct Node* CreateNode()
//{
//	struct Node* pTemp = (struct Node*)malloc(sizeof(struct Node));
//	if (pTemp == NULL)
//		return;
//	pTemp->iData = 0;
//	pTemp->pNext = NULL;
//	pTemp->pPre = NULL;
//	return pTemp;
//}
////根据下标查询节点返回节点地址
//struct Node* GetNodeByIndex(struct Node* stHead, int *iCount, int iIndex);
////根据数据查找 找到第一个返回
//struct Node* GetNodeByData(struct Node* stHead, int iData);
////在指定的下标位置接入一个节点 接到前面
//void InsertByIndex(struct Node* stHead, int* iCount, int iIndex, int iData);
////指定数据前面插入 不涉及尾添加
//void InsertByData(struct Node* stHead, int* iCount, int iValue, int iData);
////在指定下标位置接入n个节点
//void InsertSomeByIndex(struct Node* stHead, int* iCount, int iIndex, int iData, int iNodeCount);
////删除指定下标对应的节点
//void DeleteByIndex(struct Node* stHead, int* iCount, int iIndex);
////删除一段节点 下标n1~n2
//void DeleteBySomeIndex(struct Node* stHead, int* iCount, int iIndex1, int iIndex2);
////根据数据删除所有一样的数据
//void DeleteByData(struct Node* stHead, int* iCount, int iData);
//int main()
//{
//	struct Node stHead;
//	stHead.iData = 0;
//	stHead.pNext = &stHead;
//	stHead.pPre = &stHead;//头指针的前后都指向自己
//	int iCount = 0;//节点个数
//	AddToEnd(&stHead, &iCount, 1);
//	AddToEnd(&stHead, &iCount, 2);
//	AddToEnd(&stHead, &iCount, 3);
//	AddToEnd(&stHead, &iCount, 4);
//	AddToHead(&stHead, &iCount, 5);
//	Look(&stHead, &iCount);
//
//
//
//	FreeList(&stHead, &iCount);
//	system("pause");
//	return 0;
//}
//void AddToEnd(struct Node* stHead, int *iCount, int iData)
//{
//	if (stHead == NULL)
//		return;
//	struct Node* pTemp = (struct Node*)malloc(sizeof(struct Node));
//	if (pTemp == NULL)
//		return;
//	pTemp->iData = iData;
//	pTemp->pNext = NULL;
//	pTemp->pPre = NULL;//申请节点+节点赋值
//	//连节点 先连后断
//	pTemp->pPre = stHead->pPre;
//	pTemp->pNext = stHead;
//	stHead->pPre->pNext = pTemp;
//	stHead->pPre = pTemp; 
//	(*iCount)++;
//}
//void Look(struct Node* stHead, int *iCount)
//{
//	if (stHead == NULL || stHead->pNext == stHead)//空头 因为开始前后都指向自己就没有节点
//		return;
//	struct Node* pTemp = stHead->pNext;
//	printf("共有%d个节点 ", *iCount);
//	while (pTemp != stHead)//遇到头就遍历了一遍因为循环嘛
//	{
//		printf("%d  ", pTemp->iData);
//		pTemp = pTemp->pNext;//反向遍历改成pPre就完事了前面也一样
//	}
//	printf("\n");
//}
//void FreeList(struct Node* stHead, int* iCount)
//{
//	if (stHead == NULL || stHead->pNext == stHead)
//		return;
//	struct Node* pTemp = stHead->pNext;
//	while (pTemp != stHead)
//	{
//		struct Node* pT = pTemp;
//		pTemp = pTemp->pNext;
//		free(pT);
//	}
//	(*iCount) = 0;
//	stHead->pNext = stHead;
//	stHead->pPre = stHead;//回归最开始的状态指向自己
//}
//void AddToHead(struct Node* stHead, int* iCount, int iData)
//{
//	if (stHead == NULL)
//		return;
//	struct Node* pTemp = (struct Node*)malloc(sizeof(struct Node));
//	if (pTemp == NULL)
//		return;
//	pTemp->iData = iData;
//	pTemp->pNext = NULL;
//	pTemp->pPre = NULL;
//	pTemp->pNext = stHead->pNext;
//	pTemp->pPre = stHead;
//	stHead->pNext->pPre = pTemp;
//	stHead->pNext = pTemp;
//	(*iCount)++;
//}
//struct Node* GetNodeByIndex(struct Node* stHead, int *iCount, int iIndex)
//{
//	if (stHead == NULL || iIndex < 0 || *iCount <= 0 || iIndex >= *iCount)
//		return NULL;
//	struct Node* pTemp = stHead->pNext;
//	for (int i = 0; i < iIndex; i++)
//	{
//		pTemp = pTemp->pNext;
//	}
//	return pTemp;
//}
//struct Node* GetNodeByData(struct Node* stHead, int iData)
//{
//	if (stHead == NULL || stHead->pNext == NULL)
//		return NULL;
//	struct Node* pTemp = stHead->pNext;
//	while (pTemp != stHead)
//	{
//		if (pTemp->iData == iData)
//			return pTemp;
//		pTemp = pTemp->pNext;
//	}
//	return NULL;//没找到
//}
//void InsertByIndex(struct Node* stHead, int* iCount, int iIndex, int iData)
//{
//	if (stHead == NULL || iIndex < 0 || *iCount <= 0 || iIndex > *iCount)//尾巴添加呀上面有个函数有等于
//		return;
//	if (iIndex = *iCount)//尾添加
//		AddToEnd(stHead, iCount, iData);
//	else
//	{
//		//找位置
//		struct Node* pTemp = GetNodeByIndex(stHead, *iCount, iIndex);
//		if (pTemp == NULL)
//			return;
//		//创建节点
//		struct Node* pT = (struct Node*)malloc(sizeof(struct Node));
//		pT->iData = iData;
//		pT->pNext = NULL;
//		pT->pPre = NULL;
//		//接入 数量++
//		pT->pPre = pTemp->pPre;
//		pT->pNext = pTemp;
//		pTemp->pPre->pNext = pT;
//		pTemp->pPre = pT;
//		(*iCount)++;
//	}
//}
//void InsertByData(struct Node* stHead, int* iCount, int iValue, int iData)
//{
//	if (stHead == NULL || *iCount <= 0)
//		return;
//	//找节点
//	struct Node* pTemp = GetNodeByData(stHead, iValue);
//	if (pTemp == NULL)
//		return;
//	//找到了创建节点
//	struct Node* pT = (struct Node*)malloc(sizeof(struct Node));
//	pT->iData = iData;
//	pT->pNext = NULL;
//	pT->pPre = NULL;
//	//接入
//	pT->pPre = pTemp->pPre;
//	pT->pNext = pTemp;
//	pTemp->pPre->pNext = pT;
//	pTemp->pPre = pT;
//	(*iCount)++;
//}
//void InsertSomeByIndex(struct Node* stHead, int* iCount, int iIndex, int iData, int iNodeCount)
//{
//	for (int i = 0; i < *iCount; i++)
//	{
//		InsertByIndex(stHead, iCount, iIndex, iData);
//	}
//}
//void DeleteByIndex(struct Node* stHead, int* iCount, int iIndex)
//{
//	if (stHead == NULL || iCount <= 0 || iIndex < 0 || iIndex >= *iCount)
//		return;
//	struct Node* pTemp = GetNodeByIndex(stHead, iCount, iIndex);
//	if (pTemp == NULL)
//		return;
//	//删除
//	pTemp->pPre->pNext = pTemp->pNext;
//	pTemp->pNext->pPre = pTemp->pPre;
//	free(pTemp);
//	(*iCount)--;
//}
//void DeleteBySomeIndex(struct Node* stHead, int* iCount, int iIndex1, int iIndex2)
//{
//	for (int i = iIndex1; i <= iIndex2; i++)
//	{
//		DeleteByIndex(stHead, iCount, iIndex1);//删完下标会发生改变 一直删下标为iIndex1节点因为后面一个删完下标前进了
//	}
//}
//void DeleteByData(struct Node* stHead, int* iCount, int iData)
//{
//	if (stHead == NULL || *iCount <= 0)
//		return;
//	while (1) 
//	{
//		struct Node* pTemp = GetNodeByData(stHead, iData);
//		if (pTemp == NULL)
//			return;
//		pTemp->pPre->pNext = pTemp->pNext;
//		pTemp->pNext->pPre = pTemp->pPre;
//		free(pTemp);
//		(*iCount)--;
//	}
//}
