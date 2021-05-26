//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//#include<string.h>
//#include<malloc.h>
//struct Node
//{
//	int iData;
//	struct Node* pNext;
//	struct Node* pPre;
//};
////ͷ���
//void AddToEnd(struct Node** pHead, struct Node** pEnd, int* pCount, int iData);
////�ͷ�����
//void FreeList(struct Node** pHead, struct Node** pEnd, int* pCount);
////�������
//void LookZheng(struct Node* pHead, int pCount);
////�õ�����ͷ
//struct Node* GetHead(struct Node** pHead, struct Node** pEnd, int* pCount);
////�ϲ�����ĺ���
//void HeBing(struct Node** pHA, struct Node** pEA, int *pCA, struct Node** pHB, struct Node** pEB, int *pCB);
//int main()
//{
//	struct Node* g_pAHead = NULL;
//	struct Node* g_pAEnd = NULL;
//	int  g_iANodeCount = 0;
//
//	struct Node* g_pBHead = NULL;
//	struct Node* g_pBEnd = NULL;
//	int  g_iBNodeCount = 0;
//
//	AddToEnd(&g_pAHead, &g_pAEnd, &g_iANodeCount, 3);
//	AddToEnd(&g_pAHead, &g_pAEnd, &g_iANodeCount, 5);
//	AddToEnd(&g_pAHead, &g_pAEnd, &g_iANodeCount, 2);
//	AddToEnd(&g_pAHead, &g_pAEnd, &g_iANodeCount, 8);
//	AddToEnd(&g_pAHead, &g_pAEnd, &g_iANodeCount, 10);
//
//	AddToEnd(&g_pBHead, &g_pBEnd, &g_iBNodeCount, 2);
//	AddToEnd(&g_pBHead, &g_pBEnd, &g_iBNodeCount, 6);
//	AddToEnd(&g_pBHead, &g_pBEnd, &g_iBNodeCount, 9);
//
//	HeBing(&g_pAHead, &g_pAEnd, &g_iANodeCount, &g_pBHead, &g_pBEnd, &g_iBNodeCount);
//
//	LookZheng(g_pAHead, g_iANodeCount);
//	LookZheng(g_pBHead, g_iBNodeCount);
//
//	FreeList(&g_pAHead, &g_pAEnd, &g_iANodeCount);
//	FreeList(&g_pBHead, &g_pBEnd, &g_iBNodeCount);
//	system("pause");
//	return;
//}
//void AddToEnd(struct Node** pHead, struct Node** pEnd, int* pCount, int iData)
//{
//	if (*pCount < 0)
//		return;
//	struct Node* pTemp = (struct Node*)malloc(sizeof(struct Node));
//	if (pTemp == NULL)
//		return;
//	pTemp->iData = iData;
//	pTemp->pNext = NULL;
//	pTemp->pPre = NULL;
//	if (*pHead == NULL)
//	{
//		*pHead = pTemp;
//		*pEnd = pTemp;
//	}
//	else
//	{
//		(*pEnd)->pNext = pTemp;
//		pTemp->pPre = (*pEnd);
//		(*pEnd) = pTemp;
//	}
//	(*pCount)++;
//}
//void FreeList(struct Node** pHead, struct Node** pEnd, int* pCount)
//{
//	if (*pHead == NULL)
//		return;
//	struct Node* pTemp = *pHead;
//	while (pTemp != NULL)
//	{
//		struct Node* pT = pTemp;
//		pTemp = pTemp->pNext;
//		free(pT);
//	}
//	//�ͷ���ͷβָ�븳�� ���ȸ�ֵ0
//	*pHead = NULL;
//	*pEnd = NULL;
//	*pCount = 0;
//}
//void LookZheng(struct Node* pHead, int pCount)
//{
//	if (pHead == NULL)
//		return;
//	printf("����%d���ڵ� ", pCount);
//	struct Node* pTemp = pHead;
//	while (pTemp != NULL)
//	{
//		printf("%d ", pTemp->iData);
//		pTemp = pTemp->pNext;
//	}
//	printf("\n");
//}
//struct Node* GetHead(struct Node** pHead, struct Node** pEnd, int* pCount)
//{
//	if ((*pHead) == NULL)
//		return NULL;
//	struct Node* pT = *pHead;
//	if ((*pHead) == (*pEnd))//ֻ��һ���ڵ�
//	{
//		*pHead = NULL;
//		*pEnd = NULL;
//		//(*pCount)--;
//		//return pT;
//	}
//	else
//	{
//		*pHead = (*pHead)->pNext;
//		//(*pCount)--;
//		//return pT;
//		(*pHead)->pPre = NULL;
//	}
//	(*pCount)--;
//	pT->pNext = NULL;
//	return pT;
//}
//void HeBing(struct Node** pHA, struct Node** pEA, int *pCA, struct Node** pHB, struct Node** pEB, int *pCB)
//{
//	if (NULL == pHA || NULL == (*pHA) || NULL == pHB || NULL == (*pHB))
//		return;
//	//ѭ��
//	while(1)
//	{
//		struct Node* pTemp = GetHead(pHA, pEA, pCA);//��A�еĽڵ�ȡ����
//		if (pTemp == NULL)
//			break;
//		//������B�к��ʵ�λ��
//		//��ͷСͷ��ӱ�β��β��� ��Ϊ�������������м����
//		if (pTemp->iData <= (*pHB)->iData)
//		{
//			pTemp->pNext = (*pHB);
//			(*pHB)->pPre = pTemp;
//			(*pHB) = pTemp;
//			(*pCB)++;
//		}
//		else if (pTemp->iData >= (*pEB)->iData)
//		{
//			(*pEB)->pNext = pTemp;
//			pTemp->pPre = (*pEB);
//			(*pEB) = pTemp;
//			(*pCB)++;
//		}
//		//�м���� Ҫ����
//		else
//		{
//			struct Node* pT = (*pHB);
//			while (pT != NULL)//����д�� pT->pNext!=NULL ��Ϊ�п��ܵ�ǰһ��
//			{
//				if (pTemp->iData >= pT->iData && pTemp->iData <= pT->pNext->iData)
//					break;
//				pT = pT->pNext;
//			}
//			//�ҵ����м����
//			if (pTemp == NULL || pT == NULL)
//				return;
//			pTemp->pNext = pT->pNext;
//			pT->pNext->pPre = pTemp;
//			pT->pNext = pTemp;
//			pTemp->pPre = pT;
//			(*pCB)++;
//		}
//	}
//}
