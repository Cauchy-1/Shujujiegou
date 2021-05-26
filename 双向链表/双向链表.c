//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<malloc.h>
//#include<math.h>
//struct Node
//{
//	int iData;
//	struct Node* pNext;   //��¼��һ���ڵ��ַ
//	struct Node* pPre;   //��¼ǰһ���ڵ��ַ
//};
//struct Node* g_pHead = NULL;//�����������ݾ�������Ϊ���ǿ�����ȫ�ֱ�������ֱ����
//struct Node* g_pEnd = NULL;
//int g_iNodeCount = 0;//�ڵ�����
//void AddToEnd(int iData);//β���
//void AddToHead(int iData);//ͷ���
//void FreeList();
//void LookZheng();//�����������
//void LookFan();//�����������
//void InsertNodeByIndex(int iIndex, int iCount, int iData);//ָ���±�λ�����N���ڵ� ������ͷβ��ӣ��±�Ϊ0��ͷ��ӣ����ڽڵ������β���
//void InsertNodeByData(int iValue, int iData);//ָ������ǰ����һ������ û��β��� ��Ϊβ���������ں���
//struct Node* GetNodeByIndex(int iIndex);//�����±��ѯ
//struct Node* GetNodeByData(int iData);//�����±��ѯ�����ص�һ����ȵ� 
//void ChangeByIndex(int iIndex, int iValue);//ͨ���±��޸�
//void ChangeByData(int iData, int iValue);//ͨ�������޸� �޸�������ͬ������
//void DeleteNodeByIndex(int iIndex);//�����±�ɾ���ڵ�
//void DeleteNode(struct Node* pTemp);//ɾ���ڵ㺯�� ����Ҫ�Ϸ��Լ����Ϊ������˲ŵ����������
//void DeleteNodeByData(int iValue);//ɾ��������ָ��������ͬ�Ľڵ�
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
//		//����ֵ
//	pTemp->iData = iData;
//	pTemp->pNext = NULL;
//	pTemp->pPre = NULL;//һ���ڵ�ǰ���ǿպ���Ҳ�ǿվͲ��õ����ж���
//	if (g_pHead == NULL)//û�нڵ�pTemp����ͷҲ��β
//	{
//		g_pHead = pTemp;
//		//g_pEnd = pTemp;
//	}
//	else
//	{
//		g_pEnd->pNext = pTemp;
//		pTemp->pPre = g_pEnd;
//		//g_pEnd = pTemp;  βָ��任
//	}
//	g_pEnd = pTemp;
//	g_iNodeCount += 1;//����+1
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
//	//�ͷ���ͷβָ�븳�� ���ȸ�ֵ0
//	g_pHead = NULL;
//	g_pEnd = NULL;
//	g_iNodeCount = 0;
//}
//void LookZheng()
//{
//	if (g_pHead == NULL)
//		return;
//	printf("����%d���ڵ� ", g_iNodeCount);
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
//	printf("����%d���ڵ� ", g_iNodeCount);
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
//	if (iIndex == 0)//ͷ���
//	{
//		for (int i = 0; i < iCount; i++)
//			AddToHead(iData);
//	}
//	else if (iIndex == g_iNodeCount)//β���
//	{
//		for (int i = 0; i < iCount; i++)
//			AddToEnd(iData);
//	}
//	else //�м����
//	{
//		//��λ��
//		struct Node* pTemp = g_pHead;
//		for (int i = 0; i < iIndex; i++)
//		{
//			pTemp = pTemp->pNext;
//		}
//		//ѭ�����
//		for (int i = 0; i < iCount; i++)
//		{
//			struct Node* pNew = (struct Node*)malloc(sizeof(struct Node));
//			if (pTemp == NULL)
//				return;
//			pNew->iData = iData;
//			pNew->pNext = NULL;
//			pNew->pPre = NULL;
//			//����
//			//ָ��λ��ǰһ���ڵ����½ڵ�����
//			pTemp->pPre->pNext = pNew;
//			pNew->pPre = pTemp->pPre;
//			//ָ��λ������һ���ڵ�����
//			pNew->pNext = pTemp;
//			pTemp->pPre = pNew;
//
//		}
//		g_iNodeCount += iCount;
//	}//�ڵ�����+=iCount
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
//	//�ж��Ƿ�Ϊ��
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
//	if (pTemp == g_pHead)//���ж��ǲ���ֻ��һ���ڵ�
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
//	while (1)//��ѭ��û�ҵ���break��Ȼ��һֱɾ
//	{
//		struct Node* pTemp = GetNodeByData(iValue);
//		if (pTemp == NULL)
//			break;
//		else
//			DeleteNode(pTemp);
//	}
//	//struct Node* pTemp;
//	//while(pTemp=GetNodeByData(iValue)) �� pTemp!=NULL Ȼ������������䶼����Ҫ��
//}
