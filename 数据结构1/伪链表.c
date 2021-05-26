//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<malloc.h>
//struct Node
//{
//	int iValue;//数据
//	struct Node* pNext;//下一个节点的地址
//};
//void Look(struct Node* pHead);
//struct Node* FindByData(struct Node* pHead,int iData);//通过数据查找
//struct Node* FindByIndex(struct Node* pHead, int iIndex);//通过下标查找
//void ShowData(struct Node* pNode);
//int Count(struct Node* pHead, int iData);
//void GetNode(struct Node* pHead, struct Node* arr[4], int iData);
//void ChangeByData(struct Node *phead,int ivalue,int iData);//ivalue修改成iData
//void ChangeByIndex(struct Node* phead, int iIndex, int iData);
//int main()
//{
//	struct Node a = { 2,NULL };
//	struct Node b = { 5,NULL };
//	struct Node	c = { 2,NULL };
//	struct Node d = { 2,NULL };
//	a.pNext = &b;
//	b.pNext = &c;
//	c.pNext = &d;
//	ChangeByData(&a, 5, 55);//5改成55
//	ChangeByIndex(&a,3,22);
//	////头添加
//	//struct Node g = { 12,&a };
//	////g.pNext=&a
//	////尾添加
//	//struct Node e = { 123,NULL };
//	//d.pNext = &e;
//	////中间添加 cd中间
//	//struct Node f = { 1234,NULL };
//	//c.pNext = &f;
//	//f.pNext = &d;
//
//	//头删除 记得释放
//	//a.pNext = NULL;
//	//尾删除
//	//c.pNext = NULL;
//	//中间删除
//	//a.pNext = &c; //a.pNext = b.pNext;
//	
//	Look(&a);
//
//	//struct Node* arr[4] = { NULL };//数据重复记录节点位置，考虑最坏情况，最多为4个
//
//	//GetNode(&a, arr, 3);
//	//for (int i = 0; i < 4 && arr[i] != NULL; i++)
//	//{
//	//	printf("数据:%d\n",arr[i]->iValue);
//	//}
//
//	//printf("指定数据的数量:%d\n",Count(&a, 3));
//	//struct Node* pFind = FindByIndex(&a, 2);//输出的是7，如果输出3，函数计数的从0开始就好了
//	//ShowData(pFind);
//	//pFind = FindByIndex(&a, 3);
//	//ShowData(pFind);
//	system("pause");
//	return 0;
//}
//void ChangeByIndex(struct Node* phead, int iIndex, int iData)
//{
//	struct Node* pTemp = FindByIndex(phead, iIndex);
//	if (pTemp != NULL)
//	{
//		pTemp->iValue = iData;
//	}
//}
//
//void ChangeByData(struct Node* phead, int ivalue, int iData)
//{
//	struct Node* pTemp = FindByData(phead,ivalue);
//	if (pTemp != NULL)
//	{
//		pTemp->iValue = iData;
//	}
//}
//void Look(struct Node* pHead)
//{
//	while (pHead != NULL)
//	{
//		printf("%d\n", pHead->iValue);
//		pHead = pHead->pNext;
//	}
//}
//struct Node* FindByData(struct Node* pHead, int iData)
//{
//	while (pHead != NULL)
//	{
//		if (pHead->iValue == iData)
//		{
//			return pHead;
//		}
//		pHead = pHead->pNext;
//	}
//	return NULL;
//}
//struct Node* FindByIndex(struct Node* pHead, int iIndex)
//{
//	int iNum = 0;//计数
//	while (pHead != NULL)
//	{
//		if (iIndex == iNum)
//		{
//			return pHead;
//		}
//		iNum++;
//		pHead = pHead->pNext;
//	}
//	return NULL;
//}
//void ShowData(struct Node* pNode)
//{
//	if (NULL == pNode)
//	{
//		printf("查无此节点！\n");
//	}
//	else
//	{
//		printf("找到节点%d\n", pNode->iValue);
//	}
//}
//int Count(struct Node* pHead, int iData)
//{
//	int iCount = 0;
//	while (pHead != NULL)
//	{
//		if (pHead->iValue == iData)
//		{
//			iCount++;
//		}
//		pHead = pHead->pNext;
//	}
//	return iCount;
//}
//void GetNode(struct Node* pHead, struct Node* arr[4], int iData)
//{
//	while (pHead != NULL)
//	{
//		int iIndex = 0;
//		if (pHead->iValue == iData)
//		{
//			arr[iIndex] = pHead;//记录地址，先用再加 相当于 arr[iIndex]=pHead; iIndex++;
//			iIndex++;
//		}
//		pHead = pHead->pNext;
//	}
//}