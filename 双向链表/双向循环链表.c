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
////β��� ѭ�������β����Ҫ��¼ ��Ϊ�����ڿ�ͷ��ǰһ�� ����ǰ�����
//void AddToEnd(struct Node* stHead, int* iCount, int iData);
////����
//void Look(struct Node* stHead, int *iCount);
////�ͷ�����
//void FreeList(struct Node* stHead, int* iCount);
////ͷ���
//void AddToHead(struct Node* stHead, int* iCount, int iData);
////�����ڵ�
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
////�����±��ѯ�ڵ㷵�ؽڵ��ַ
//struct Node* GetNodeByIndex(struct Node* stHead, int *iCount, int iIndex);
////�������ݲ��� �ҵ���һ������
//struct Node* GetNodeByData(struct Node* stHead, int iData);
////��ָ�����±�λ�ý���һ���ڵ� �ӵ�ǰ��
//void InsertByIndex(struct Node* stHead, int* iCount, int iIndex, int iData);
////ָ������ǰ����� ���漰β���
//void InsertByData(struct Node* stHead, int* iCount, int iValue, int iData);
////��ָ���±�λ�ý���n���ڵ�
//void InsertSomeByIndex(struct Node* stHead, int* iCount, int iIndex, int iData, int iNodeCount);
////ɾ��ָ���±��Ӧ�Ľڵ�
//void DeleteByIndex(struct Node* stHead, int* iCount, int iIndex);
////ɾ��һ�νڵ� �±�n1~n2
//void DeleteBySomeIndex(struct Node* stHead, int* iCount, int iIndex1, int iIndex2);
////��������ɾ������һ��������
//void DeleteByData(struct Node* stHead, int* iCount, int iData);
//int main()
//{
//	struct Node stHead;
//	stHead.iData = 0;
//	stHead.pNext = &stHead;
//	stHead.pPre = &stHead;//ͷָ���ǰ��ָ���Լ�
//	int iCount = 0;//�ڵ����
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
//	pTemp->pPre = NULL;//����ڵ�+�ڵ㸳ֵ
//	//���ڵ� �������
//	pTemp->pPre = stHead->pPre;
//	pTemp->pNext = stHead;
//	stHead->pPre->pNext = pTemp;
//	stHead->pPre = pTemp; 
//	(*iCount)++;
//}
//void Look(struct Node* stHead, int *iCount)
//{
//	if (stHead == NULL || stHead->pNext == stHead)//��ͷ ��Ϊ��ʼǰ��ָ���Լ���û�нڵ�
//		return;
//	struct Node* pTemp = stHead->pNext;
//	printf("����%d���ڵ� ", *iCount);
//	while (pTemp != stHead)//����ͷ�ͱ�����һ����Ϊѭ����
//	{
//		printf("%d  ", pTemp->iData);
//		pTemp = pTemp->pNext;//��������ĳ�pPre��������ǰ��Ҳһ��
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
//	stHead->pPre = stHead;//�ع��ʼ��״ָ̬���Լ�
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
//	return NULL;//û�ҵ�
//}
//void InsertByIndex(struct Node* stHead, int* iCount, int iIndex, int iData)
//{
//	if (stHead == NULL || iIndex < 0 || *iCount <= 0 || iIndex > *iCount)//β�����ѽ�����и������е���
//		return;
//	if (iIndex = *iCount)//β���
//		AddToEnd(stHead, iCount, iData);
//	else
//	{
//		//��λ��
//		struct Node* pTemp = GetNodeByIndex(stHead, *iCount, iIndex);
//		if (pTemp == NULL)
//			return;
//		//�����ڵ�
//		struct Node* pT = (struct Node*)malloc(sizeof(struct Node));
//		pT->iData = iData;
//		pT->pNext = NULL;
//		pT->pPre = NULL;
//		//���� ����++
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
//	//�ҽڵ�
//	struct Node* pTemp = GetNodeByData(stHead, iValue);
//	if (pTemp == NULL)
//		return;
//	//�ҵ��˴����ڵ�
//	struct Node* pT = (struct Node*)malloc(sizeof(struct Node));
//	pT->iData = iData;
//	pT->pNext = NULL;
//	pT->pPre = NULL;
//	//����
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
//	//ɾ��
//	pTemp->pPre->pNext = pTemp->pNext;
//	pTemp->pNext->pPre = pTemp->pPre;
//	free(pTemp);
//	(*iCount)--;
//}
//void DeleteBySomeIndex(struct Node* stHead, int* iCount, int iIndex1, int iIndex2)
//{
//	for (int i = iIndex1; i <= iIndex2; i++)
//	{
//		DeleteByIndex(stHead, iCount, iIndex1);//ɾ���±�ᷢ���ı� һֱɾ�±�ΪiIndex1�ڵ���Ϊ����һ��ɾ���±�ǰ����
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
