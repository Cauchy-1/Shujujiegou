//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<malloc.h>
//#include<memory.h>
//struct Node
//{
//	int iData;
//	struct Node* pNext;
//};
//void AddToEnd(struct Node** pHead, struct Node** pEnd, int iData);//尾添加 传二级指针，因为传的是指针的地址
//
//void FreeList(struct Node*pHead);//链表的释放
//
//void Look(struct Node* pHead);//遍历链表
//
//void FreeListNULL(struct Node**pHead,struct Node **pEnd);//释放完之后将头指针和尾指针都赋值成NULL
//
//void AddToHead(struct Node**pHead,struct Node **pEnd,int iData);//头添加，参数也是传递二级的
//
//struct Node* FindNodeByIndex(struct Node* pHead, int iIndex);//找中间节点通过下标，要遍历链表
//
//void InsertByIndex(struct Node** pHead, struct Node** pEnd, int iIndex, int iData);//中间插入节点,节点前面添加
//
//void AddSomeNode(struct Node** pHead, struct Node** pEnd, int iCount, int iData);//一次性添加n个节点(尾)
//
//struct Node* FindNodeByData(struct Node*pHead,int iData);//通过数据查找节点
//
//
//void ChangeData(struct Node *pHead,int iResData,int iDesData); //修改指定节点数据，改成iDesData
//
//void ChangeSomeData(struct Node* pHead, int iResData, int iDesData);//修改一堆相同的节点 遇到相等的全部赋值，就不返回了哦
//
//void ChangeSomeDataTest(struct Node* pHead, int iResData, int iDesData);//也是修改一堆相同的 只是方法不一样
//
//void DeleteHead(struct Node** pHead, struct Node** pEnd);//头删除
//
//void DeleteEnd(struct Node** pHead, struct Node** pEnd);//尾删除
//
//struct Node* DeleteOneDataByData(struct Node** pHead, struct Node** pEnd, int iData);//中间删除一个节点
//
//void DeleteAllSameDataByData(struct Node** pHead, struct Node** pEnd, int iData);//删除数据相同的节点
//
//void DeleteDataByIndex(struct Node** pHead, struct Node** pEnd, int iIndex);//根据下标删除节点
//
//void SwapByData(struct Node*pHead,int iData1,int iData2);//根据数据交换节点的数据
//
//void SwapByIndex(struct Node* pHead, int iIndex1, int iIndex2);//根据下标交换节点数据
//
//void SwapByChangePoint(struct Node** pHead, struct Node** pEnd, int iIndex1, int iIndex2);//交换两个节点指针指向也要变，所以是二级指针
//
//void ReversrByDate(struct Node* pHead);//通过数据翻转链表，并不改变节点所以传递一级指针
//
//int  GetListNodeCount(struct Node* pHead);//得到节点个数
//
//void ReverseByPoint(struct Node** pHead, struct Node** pEnd);//通过节点翻转传二级指针
//
//void ReverseBySpace(struct Node** pHead, struct Node** pEnd);//通过辅助空间翻转链表
//
//int main()
//{
//	struct Node* pHead = NULL;//创建头指针
//	struct Node* pEnd = NULL;//创建尾指针
//	//AddSomeNode(&pHead,&pEnd,5,5);
//	/*AddToEnd(&pHead, &pEnd, 3);
//	AddToEnd(&pHead, &pEnd, 4);*/
//	//InsertByIndex(&pHead, &pEnd, 0, 15);
//	AddToEnd(&pHead, &pEnd, 2);
//	AddToEnd(&pHead, &pEnd, 5);
//	//AddToEnd(&pHead, &pEnd, 5);
//	//AddToEnd(&pHead, &pEnd, 8);
//	//Look(pHead);
//	//printf("删除后的节点为：");
//	//DeleteAllSameDataByData(pHead,pEnd,5);
//	//ChangeData(pHead,9,99);
//	//InsertByIndex(&pHead,&pEnd,0,123);
//	//struct Node* pTemp = FindNodeByIndex(pHead, 0);
//	//ChangeSomeData(pHead,5,5959);
//	//DeleteEnd(&pHead,&pEnd);
//	//SwapByData(pHead,2,8);
//	Look(pHead);
//	//SwapByChangePoint(&pHead, &pEnd, 0, 1);
//	Look(pHead);
//	
//
//	system("pause");
//	return 0;
//}
//
//int  GetListNodeCount(struct Node* pHead)
//{
//	int iCount = 0;
//	while (pHead != NULL)
//	{
//		iCount++;
//		pHead = pHead->pNext;
//	}
//	return iCount;
//}
//
//void ChangeSomeDataTest(struct Node* pHead, int iResData, int iDesData)
//{
//	if (pHead == NULL)
//	{
//		printf("链表为空\n");
//		return;
//	}
//	//第一次找 然后再循环 用第一次找过的地址
//	struct Node* pRes = FindNodeByData(pHead, iResData);
//	if (pRes == NULL)
//		printf("查无此节点!\n");
//	else
//		pRes->iData = iDesData;
//	while (pRes)
//	{
//		pRes = FindNodeByData(pHead, iResData);
//		if (pRes != NULL)
//			pRes->iData = iDesData;
//		
//	}
//}
//
//void ChangeSomeData(struct Node* pHead, int iResData, int iDesData)
//{
//	if (pHead == NULL)
//	{
//		printf("查无此节点！\n");
//		return;
//	}
//	while (pHead)
//	{
//		if (pHead->iData == iResData)
//		{
//			pHead->iData = iDesData;
//		}
//		pHead = pHead->pNext;
//	}
//	return NULL;
//
//}
//
//void ChangeData(struct Node* pHead, int iResData, int iDesData)
//{
//	//先遍历找节点调用写过的函数
//	struct Node* pRes = FindNodeByData(pHead, iResData);
//	if (pRes == NULL)
//		printf("查无此节点!\n");
//	else
//		pRes->iData = iDesData;
//}
//
//struct Node* FindNodeByData(struct Node* pHead, int iData)
//{
//	if (pHead == NULL)
//	{
//		return NULL;
//	}
//	while (pHead)
//	{
//		if (pHead->iData == iData)
//		{
//			return pHead;
//		}
//		pHead = pHead->pNext;
//	}
//	return NULL;
//}
//
//void AddSomeNode(struct Node** pHead, struct Node** pEnd, int iCount, int iData)
//{
//	for (int i = 0; i < iCount; i++)
//	{
//		AddToEnd(pHead, pEnd, iData);
//	}
//}
//
//void InsertByIndex(struct Node** pHead, struct Node** pEnd, int iIndex, int iData)
//{
//	if (iIndex < 0)
//	{
//		printf("下标输入有误，请重新输入！");
//		return;
//	}
//	if (iIndex == 0)//头添加
//	{
//		AddToHead(pHead,pEnd,iData);
//	}
//	else
//	{
//		struct Node* pTemp = FindNodeByIndex(*pHead, iIndex-1);
//		if (pTemp != NULL)
//		{
//			struct Node* pT = (struct Node*)malloc(sizeof(struct Node));
//			pT->iData = iData;
//			pT->pNext = NULL;
//			pT->pNext = pTemp->pNext;
//			pTemp->pNext = pT;
//		}
//		else
//			printf("查无此节点!\n");
//	}
//}
//
//struct Node* FindNodeByIndex(struct Node* pHead, int iIndex)
//{
//	//参数合法性检测
//	if (pHead == NULL || iIndex < 0)
//	{
//		printf("参数错误！下标可能小于0啦或者链表为空啦！");
//		return NULL;
//	}
//	int i = 0;
//	while (pHead!=NULL)
//	{
//		if (i == iIndex)
//		{
//			return pHead;
//		}
//		i++;
//		pHead = pHead->pNext;
//	}
//	printf("臣妾找不到啊~");
//	return NULL;
//}
//
//void AddToHead(struct Node** pHead, struct Node** pEnd, int iData)
//{
//	struct Node* pTemp = (struct Node*)malloc(sizeof(struct Node));
//	if (pTemp != NULL)
//	{
//		pTemp->iData = iData;
//		pTemp->pNext = NULL;
//		if (*pHead == NULL)
//		{
//			//*pHead = pTemp;
//			*pEnd = pTemp;
//		}
//		else
//		{
//			pTemp->pNext = *pHead;
//			//*pHead = pTemp;
//		}
//		*pHead = pTemp;
//	}
//}
//
//void FreeListNULL(struct Node** pHead,struct Node **pEnd)
//{
//	struct Node* pTemp = *pHead;
//	while (pTemp != NULL)
//	{
//		struct Node* pt = pTemp;
//		pTemp= pTemp->pNext;
//		free(pt);
//	}
//	*pHead = NULL;
//	*pEnd = NULL;
//}
//
//void Look(struct Node* pHead)
//{
//	while (pHead != NULL)
//	{
//		printf("%d ",pHead->iData);
//		pHead = pHead->pNext;
//	}
//	printf("\n");
//}
//
//void FreeList(struct Node* pHead)
//{
//	struct Node* pTemp = pHead;
//	while (pTemp != NULL)
//	{
//		struct Node* pt = pTemp;
//		pTemp = pTemp->pNext;
//		free(pt);
//	}
//}
//
//void AddToEnd(struct Node** pHead, struct Node** pEnd, int iData)
//{
//	//创建节点
//	struct Node* pTemp = (struct Node*)malloc(sizeof(struct Node));
//	//mallo失败pTemp申请不成功
//	if (pTemp != NULL)
//	{
//		//节点成员赋值（初始化）
//		pTemp->iData = iData;
//		pTemp->pNext = NULL;
//		//连上去
//		if (NULL == *pHead)//头结点为空就是空链表
//		{
//			*pHead = pTemp;
//			//*pEnd = pTemp;
//		}
//		else
//		{
//			(*pEnd)->pNext = pTemp; //尾指针指向新节点
//			//*pEnd = pTemp;//让新的节点成为尾节点
//		}
//	}
//	*pEnd = pTemp;//必执行的写在外面就行了
//}
//
//void DeleteHead(struct Node** pHead, struct Node** pEnd)
//{
//	if (*pHead == NULL)
//		return;
//	if (*pHead == *pEnd)//只有一个节点 或者 (*pHead)->pNext==NULL;
//	{
//		free(*pHead);
//		*pHead = NULL;
//		*pEnd = NULL;
//	}
//	else
//	{
//		struct Node* pT = *pHead;//记录头
//		(*pHead) = (*pHead)->pNext;
//		free(pT);//相当于释放头，然后头往下走了
//	}
//}
//
//void DeleteEnd(struct Node** pHead, struct Node** pEnd)
//{
//	if (*pHead == NULL)
//		return;
//	if (*pHead == *pEnd)
//	{
//		free(*pHead);
//		*pHead = NULL;
//		*pEnd = NULL;
//	}
//	else
//	{
//		//找尾节点的前一个,不要直接操作头
//		struct Node* pT = *pHead;
//		while (pT->pNext!=*pEnd)//相等就找到了
//		{
//			pT = pT->pNext;
//		}
//		//找到了(一定可以找到，不然前面就退出了)
//		free(*pEnd);
//		*pEnd = pT;
//		//新的尾赋值为NULL
//		(*pEnd)->pNext = NULL;
//
//	}
//}
//
//struct Node* DeleteOneDataByData(struct Node** pHead, struct Node** pEnd, int iData)
//{
//	if (*pHead == NULL)
//		return NULL;
//	if ((*pHead)->iData == iData)//如果删除头或尾就调用写过的函数
//	{ 
//		DeleteHead(pHead, pEnd);
//		return *pHead;
//	}
//	else if ((*pEnd)->iData == iData)
//	{
//		DeleteEnd(pHead, pEnd);
//		return *pHead;//还是返回头 方便遍历
//	}
//	else
//	{
//		//循环找节点
//		struct Node* pTemp = *pHead;
//		while (pTemp->pNext != NULL)//不会找到尾结点的啦~
//		{
//			if (pTemp->pNext->iData == iData)//pTemp就是要删除节点的前一个节点
//				break;
//			pTemp = pTemp->pNext;
//		}
//		if (pTemp->pNext != NULL)
//		{
//			struct Node* pT = pTemp->pNext;//记录被删除的节点
//			pTemp->pNext = pT->pNext;//被删除节点的 前一个节点指向 被删除节点的 后一个节点
//			free(pT);
//			return pTemp;//如果返回pTemp->pNext  外侧对应pHead
//		}
//		else
//		{
//			printf("没找到你想要的节点呢~\n");
//			return NULL;
//		}
//	}
//}
//
//void DeleteAllSameDataByData(struct Node** pHead, struct Node** pEnd, int iData)
//{
//	if (*pHead == NULL)
//		return;
//	struct Node* pTemp = DeleteOneDataByData(pHead,pEnd,iData);
//	while (pTemp != NULL)
//	{
//		pTemp = DeleteOneDataByData(&pTemp, pEnd, iData);//继续找继续删因为这个函数有返回值 从pTemp往下找，当然从头也可以只不过比较费时,传头比较好，不然会有极端情况
//		
//	}
//
//}
//
//void DeleteDataByIndex(struct Node** pHead, struct Node** pEnd, int iIndex)
//{
//	if (*pHead == NULL)
//		return;
//	if (iIndex == 0)//下标为0调用头删除
//		DeleteHead(pHead,pEnd);
//	else
//	{
//		//找前一个节点
//		struct Node* pTemp = FindNodeByIndex(*pHead,iIndex-1);
//		if (pTemp != NULL)
//		{
//			if (pTemp->pNext == (*pEnd))//判断尾
//			{
//				DeleteEnd(pHead, pEnd);
//				return;
//			}
//			struct Node* pT = pTemp->pNext;//记录被删除的节点
//			pTemp->pNext = pT->pNext;
//			free(pT);
//		}
//		else
//		{
//			printf("查无此节点!\n");
//		}
//	}
//}
//
//void SwapByData(struct Node* pHead, int iData1, int iData2)
//{
//	if (pHead == NULL)
//		return;
//	//找第一个数据
//	struct Node* pT1 = FindNodeByData(pHead, iData1);
//	struct Node* pT2 = FindNodeByData(pHead, iData2);
//
//	//判断是否为空
//	if (pT1 != NULL && pT2 != NULL)
//	{
//		//交换成员  结构体互相赋值会把指针换没了
//		//struct Node p = *pT1;
//		//*pT1 = *pT2;
//		//*pT2 = p; 交换数据就不会错
//		int t1 = pT1->iData;
//		pT1->iData = pT2->iData;
//		pT2->iData = t1;
//
//	}
//
//}
//
//void SwapByIndex(struct Node* pHead, int iIndex1, int iIndex2)
//{
//
//	if (pHead == NULL)
//		return;
//	//找第一个数据
//	struct Node* pT1 = FindNodeByIndex(pHead, iIndex1);
//	struct Node* pT2 = FindNodeByIndex(pHead, iIndex2);
//
//	//判断是否为空
//	if (pT1 != NULL && pT2 != NULL)
//	{
//		//交换成员  结构体互相赋值会把指针换没了
//		//struct Node p = *pT1;
//		//*pT1 = *pT2;
//		//*pT2 = p; 交换数据就不会错
//		int t1 = pT1->iData;
//		pT1->iData = pT2->iData;
//		pT2->iData = t1;
//
//	}
//}
//
//void SwapByChangePoint(struct Node** pHead, struct Node** pEnd, int iIndex1, int iIndex2)
//{
//	//参数合法性检测
//	if (*pHead == NULL || (*pHead)->pNext == NULL || iIndex1 == iIndex2 || iIndex1 < 0 || iIndex2 < 0)//1个节点,没有节点或者下标相等或者小于0都不行
//	{
//		return;
//	}
//	//确定大小关系
//	int iMin = iIndex1;
//	int iMax = iIndex2;
//	if (iIndex1 > iIndex2)
//	{
//		iMin = iIndex2;
//		iMax = iIndex1;
//	}
//	//根据下标找节点
//	struct Node* pMin = FindNodeByIndex(*pHead, iMin);
//	struct Node* pMax = FindNodeByIndex(*pHead, iMax);
//	//找不到就得终止
//	if (pMin == NULL || pMax == NULL)
//	{
//		printf("查无此节点!\n");
//		return;
//	}
//	//头和尾交换
//	if (pMin == *pHead && pMax == *pEnd)
//	{
//		if ((*pHead)->pNext == *pEnd)//两个节点
//		{
//			(*pEnd)->pNext = (*pHead);
//			(*pHead)->pNext = NULL;
//			//交换指针指向
//			(*pHead) = (*pEnd);
//			(*pEnd) = (*pHead)->pNext;
//		}
//		else//多个节点
//		{
//			//找到尾巴的前一个节点
//			struct Node* pMaxPre = FindNodeByIndex(*pHead, iMax - 1);
//			//尾巴指向头的下一个
//			(*pEnd)->pNext = (*pHead)->pNext;
//			//pMaxPre的下一个指向头就是将头变成尾巴
//			pMaxPre->pNext = *pHead;
//			//头下一个为空
//			(*pHead)->pNext = NULL;
//			//交换头尾指针指向
//			(*pHead) = (*pEnd);
//			(*pEnd) = pMaxPre->pNext;
//		}
//	}
//	else if (pMin == *pHead && pMax != *pEnd)//交换头与中间，分为与头相邻 与头不相邻
//	{
//		//相邻
//		if ((*pHead)->pNext == pMax)// <=> pMin->pNext==pMax
//		{
//			(*pHead)->pNext = pMax->pNext;
//			pMax->pNext = *pHead;
//			*pHead = pMax;
//		}
//		else
//		{
//			//找PMax的前一个指针
//			struct Node* pMaxPre = FindNodeByIndex(*pHead, iMax - 1);
//			//记录头的下一个节点
//			struct Node* pHeadNext = (*pHead)->pNext;
//			pMin->pNext = pMax->pNext;
//			pMaxPre->pNext = pMin;
//			//pMax指向头结点的下一个
//			pMax->pNext = pHeadNext;
//			//改变头
//			*pHead = pMax;
//		}
//	}
//	else if (pMin != (*pHead) && pMax == (*pEnd))//尾与中间
//	{
//		if (pMin->pNext == pMax)
//		{
//			struct Node* pMinPre = FindNodeByIndex(*pHead, iMin - 1);
//			pMinPre->pNext = pMax;
//			pMax->pNext = pMin;
//			pMin->pNext = NULL;
//			(*pEnd) = pMin;
//		}
//		else
//		{
//			struct Node* pMinPre = FindNodeByIndex(*pHead, iMin - 1);
//			struct Node* pMaxPre = FindNodeByIndex(*pHead, iMax - 1);
//			pMinPre->pNext = pMax;
//			pMax->pNext = pMin->pNext;
//			pMaxPre->pNext = pMin;
//			pMin->pNext = NULL;
//			(*pEnd) = pMin;
//		}
//	}
//	else if (pMin != (*pHead) && pMax != (*pEnd))
//	{
//		//相邻
//		if (pMin->pNext = pMax)
//		{//找到pMin的前一个节点
//			struct Node* pMinPre = FindNodeByIndex(*pHead, iMin - 1);
//			pMinPre->pNext = pMax;
//			pMax->pNext = pMin;
//			pMin->pNext = pMax->pNext;
//		}
//		else
//		{
//			struct Node* pMinPre = FindNodeByIndex(*pHead, iMin - 1);
//			struct Node* pMaxPre = FindNodeByIndex(*pHead, iMax - 1);
//			struct Node* pMinNext = pMin->pNext;
//			struct Node* pMaxNext = pMax->pNext;
//			pMaxPre->pNext = pMin;
//			pMin->pNext = pMaxNext;
//			pMinPre->pNext = pMax;
//			pMax->pNext = pMinNext;
//		}
//	}
//}
//
//void ReversrByDate(struct Node* pHead)
//{
//	if (pHead == NULL || pHead->pNext == NULL)//一个节点或者空节点就不用翻转
//	{
//		return;
//	}
//	int iCount = GetListNodeCount(pHead);//获取节点个数
//	int i = 0, j = iCount - 1;
//	for (i = 0, j = iCount - 1; i < j; i++, j--)
//	{
//		SwapByData(pHead, i, j);
//	}
//}
//
//void ReverseByPoint(struct Node** pHead, struct Node** pEnd)
//{
//	if ((*pHead) == NULL || (*pHead)->pNext == NULL)
//		return;
//	int iCount = GetListNodeCount(*pHead);//获取节点个数
//	int i = 0, j = iCount - 1;
//	for (i = 0, j = iCount - 1; i < j; i++, j--)
//	{
//		SwapByChangePoint(pHead, pEnd, i, j);
//	}
//}
//
//void ReverseBySpace(struct Node** pHead, struct Node** pEnd)
//{
//	if ((*pHead) == NULL || (*pHead)->pNext == NULL)
//		return;
//	//因为是二级指针所以 要定义临时变量不然会修改原链表
//	struct Node* pTemp = *pHead;
//	//定义新链表的头尾
//	struct Node* pNewHead = NULL; 
//	struct Node* pNewEnd = NULL;
//	while (pTemp != NULL)
//	{
//		AddToHead(&pNewHead, &pNewEnd, pTemp->iData);//遍历一个头添加一个
//		pTemp = pTemp->iData;
//	}
//	//释放原链表
//	FreeListNULL(pHead, pEnd);
//	//原头尾指针指向新的变量
//	(*pHead) = pNewHead;
//	(*pEnd) = pNewEnd;
//}