//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<malloc.h>
//#include<math.h>
//struct Node
//{
//	int iData;
//	struct Node* pNext;   //记录后一个节点地址
//	struct Node* pPre;   //记录前一个节点地址
//};
//struct Node* g_pHead = NULL;//参数传递数据就行了因为我们开的是全局变量可以直接用
//struct Node* g_pEnd = NULL;
//int g_iNodeCount = 0;//节点数量
//void AddToEnd(int iData);//尾添加
//void AddToHead(int iData);//头添加
//void FreeList();
//void LookZheng();//正向遍历链表
//void LookFan();//反向遍历链表
//void InsertNodeByIndex(int iIndex, int iCount, int iData);//指定下标位置添加N个节点 包含了头尾添加，下标为0是头添加，等于节点个数是尾添加
//void InsertNodeByData(int iValue, int iData);//指定数据前插入一个数据 没有尾添加 因为尾添加是添加在后面
//struct Node* GetNodeByIndex(int iIndex);//根据下标查询
//struct Node* GetNodeByData(int iData);//根据下标查询，返回第一个相等的 
//void ChangeByIndex(int iIndex, int iValue);//通过下标修改
//void ChangeByData(int iData, int iValue);//通过数据修改 修改所有相同的数据
//void DeleteNodeByIndex(int iIndex);//根据下标删除节点
//void DeleteNode(struct Node* pTemp);//删除节点函数 不需要合法性检测因为检测完了才调用这个函数
//void DeleteNodeByData(int iValue);//删除所有与指定数据相同的节点
//int main()
//{
//	AddToEnd(1);
//	AddToEnd(2);
//	AddToEnd(3);
//	InsertNodeByIndex(0, 1, 100);
//	InsertNodeByIndex(0, 2, 300);
//	LookZheng();
//
//	InsertNodeByIndex(5, 2, 400);
//	InsertNodeByIndex(4, 2, 500);
//	AddToEnd(4);
//	AddToHead(5);
//
//	LookZheng();
//	LookFan();
//
//
//	FreeList();
//	system("pause");
//	return 0;
//}
//void AddToEnd(int iData)
//{
//	if (g_iNodeCount < 0)
//		return;
//	struct Node* pTemp = (struct Node*)malloc(sizeof(struct Node));
//	if (pTemp == NULL)
//		return;
//		//赋初值
//	pTemp->iData = iData;
//	pTemp->pNext = NULL;
//	pTemp->pPre = NULL;//一个节点前面是空后面也是空就不用单独判断了
//	if (g_pHead == NULL)//没有节点pTemp既是头也是尾
//	{
//		g_pHead = pTemp;
//		//g_pEnd = pTemp;
//	}
//	else
//	{
//		g_pEnd->pNext = pTemp;
//		pTemp->pPre = g_pEnd;
//		//g_pEnd = pTemp;  尾指针变换
//	}
//	g_pEnd = pTemp;
//	g_iNodeCount += 1;//数量+1
//}
//void AddToHead(int iData)
//{
//	if (g_iNodeCount < 0)
//		return;
//	struct Node* pTemp = (struct Node*)malloc(sizeof(struct Node));
//	if (pTemp == NULL)
//		return;
//	pTemp->iData = iData;
//	pTemp->pNext = NULL;
//	pTemp->pPre = NULL;
//	if (g_pHead == NULL)
//	{
//	    //g_pHead = pTemp;
//		g_pEnd = pTemp;
//	}
//	else
//	{
//		pTemp->pNext = g_pHead;
//		g_pHead->pPre = pTemp;
//      //g_pHead = pTemp;
//	}
//	g_pHead = pTemp;
//	g_iNodeCount += 1;
//}
//void FreeList()
//{
//	if (g_pHead == NULL)
//		return;
//	struct Node* pTemp = g_pHead;
//	while (pTemp != NULL)
//	{
//		struct Node* pT = pTemp;
//		pTemp = pTemp->pNext;
//		free(pT);
//	}
//	//释放完头尾指针赋空 长度赋值0
//	g_pHead = NULL;
//	g_pEnd = NULL;
//	g_iNodeCount = 0;
//}
//void LookZheng()
//{
//	if (g_pHead == NULL)
//		return;
//	printf("共有%d个节点 ", g_iNodeCount);
//	struct Node* pTemp = g_pHead;
//	while (pTemp != NULL)
//	{
//		printf("%d ",pTemp->iData);
//		pTemp = pTemp->pNext;
//	}
//	printf("\n");
//}
//void LookFan()
//{
//	if (g_pHead == NULL)
//		return;
//	printf("共有%d个节点 ", g_iNodeCount);
//	struct Node* pTemp = g_pEnd;
//	while (pTemp != NULL)
//	{
//		printf("%d ", pTemp->iData);
//		pTemp = pTemp->pPre;
//	}
//	printf("\n");
//}
//void InsertNodeByIndex(int iIndex, int iCount, int iData)
//{
//	if (iIndex<0 || iIndex>g_iNodeCount || iCount <= 0)
//		return;
//	if (iIndex == 0)//头添加
//	{
//		for (int i = 0; i < iCount; i++)
//			AddToHead(iData);
//	}
//	else if (iIndex == g_iNodeCount)//尾添加
//	{
//		for (int i = 0; i < iCount; i++)
//			AddToEnd(iData);
//	}
//	else //中间添加
//	{
//		//找位置
//		struct Node* pTemp = g_pHead;
//		for (int i = 0; i < iIndex; i++)
//		{
//			pTemp = pTemp->pNext;
//		}
//		//循环添加
//		for (int i = 0; i < iCount; i++)
//		{
//			struct Node* pNew = (struct Node*)malloc(sizeof(struct Node));
//			if (pTemp == NULL)
//				return;
//			pNew->iData = iData;
//			pNew->pNext = NULL;
//			pNew->pPre = NULL;
//			//连接
//			//指定位置前一个节点与新节点相连
//			pTemp->pPre->pNext = pNew;
//			pNew->pPre = pTemp->pPre;
//			//指定位置与新一个节点相连
//			pNew->pNext = pTemp;
//			pTemp->pPre = pNew;
//
//		}
//		g_iNodeCount += iCount;
//	}//节点数量+=iCount
//	
//}
//void InsertNodeByData(int iValue, int iData)
//{
//	if (g_pHead == NULL)
//		return;
//	struct Node* pTemp = g_pHead;
//	while (pTemp != NULL)
//	{
//		if (pTemp->iData == iValue)
//			break;
//		pTemp = pTemp->pNext;
//	}
//	//判断是否为空
//	if (pTemp != NULL)
//	{
//		if (pTemp == g_pHead)
//			AddToHead(iData);
//		else
//		{
//			struct Node* pT = (struct Node*)malloc(sizeof(struct Node));
//			pT->iData = iData;
//			pT->pNext = NULL;
//			pT->pPre = NULL;
//			pTemp->pPre->pNext = pT;
//			pT->pPre = pTemp->pPre;
//			pT->pNext = pTemp;
//			pTemp->pPre = pT;
//			g_iNodeCount += 1;
//		}
//	}
//}
//struct Node* GetNodeByIndex(int iIndex)
//{
//	if (g_pHead == NULL || iIndex < 0 || iIndex >= g_iNodeCount)
//		return;
//	struct Node* pTemp = g_pHead;
//	for (int i = 0; i < iIndex; i++)
//		pTemp = pTemp->pNext;
//	return pTemp;
//}
//struct Node* GetNodeByData(int iData)
//{
//	if (g_pHead == NULL)
//		return NULL;
//	struct Node* pTemp = g_pHead;
//	while (pTemp != NULL)
//	{
//		if (pTemp->iData == iData)
//			break;
//		pTemp = pTemp->pNext;
//	}
//	return pTemp;
//}
//void ChangeByIndex(int iIndex, int iValue)
//{
//	struct Node* p = GetNodeByIndex(iIndex);
//	if (p != NULL)
//	{
//		p->iData = iValue;
//	}
//}
//void ChangeByData(int iData, int iValue)
//{
//	if (g_pHead == NULL)
//		return NULL;
//	struct Node* pTemp = g_pHead;
//	while (pTemp != NULL)
//	{
//		if (pTemp->iData == iData)
//		{
//			pTemp->iData = iValue;
//		}
//		pTemp = pTemp->pNext;
//	}
//}
//void DeleteNodeByIndex(int iIndex)
//{
//	struct Node* pTemp = GetNodeByIndex(iIndex);
//	if (pTemp != NULL)
//	{
//		DeleteNode(pTemp);
//	}
//}
//void DeleteNode(struct Node* pTemp)
//{
//	if (pTemp == g_pHead)//先判断是不是只有一个节点
//	{
//		if (g_pHead = g_pEnd)
//		{
//			free(g_pHead);
//			g_pHead = NULL;
//			g_pEnd = NULL;
//			//g_iNodeCount -= 1;
//		}
//		else
//		{
//			struct Node* pT = g_pHead;
//			g_pHead = g_pHead->pNext;
//			g_pHead->pPre = NULL;
//			free(pT);
//			//g_iNodeCount -= 1;
//		}
//	}
//	else if (pTemp == g_pEnd)
//	{
//		if (g_pHead = g_pEnd)
//		{
//			free(g_pHead);
//			g_pHead = NULL;
//			g_pEnd = NULL;
//			//g_iNodeCount -= 1;
//		}
//		else
//		{
//			struct Node* pT = g_pEnd;
//			g_pEnd = g_pEnd->pPre;
//			g_pEnd->pNext = NULL;
//			free(pT);
//		}
//	}
//	else
//	{
//		pTemp->pPre->pNext = pTemp->pNext;
//		pTemp->pNext->pPre = pTemp->pPre;
//		free(pTemp);
//	}
//	g_iNodeCount -= 1;
//}
//void DeleteNodeByData(int iValue)
//{
//	while (1)//死循环没找到就break不然就一直删
//	{
//		struct Node* pTemp = GetNodeByData(iValue);
//		if (pTemp == NULL)
//			break;
//		else
//			DeleteNode(pTemp);
//	}
//	//struct Node* pTemp;
//	//while(pTemp=GetNodeByData(iValue)) 即 pTemp!=NULL 然后下面三条语句都不需要了
//}
