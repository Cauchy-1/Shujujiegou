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
//void AddToEnd(struct Node** pHead, struct Node** pEnd, int iData);//β��� ������ָ�룬��Ϊ������ָ��ĵ�ַ
//
//void FreeList(struct Node*pHead);//������ͷ�
//
//void Look(struct Node* pHead);//��������
//
//void FreeListNULL(struct Node**pHead,struct Node **pEnd);//�ͷ���֮��ͷָ���βָ�붼��ֵ��NULL
//
//void AddToHead(struct Node**pHead,struct Node **pEnd,int iData);//ͷ��ӣ�����Ҳ�Ǵ��ݶ�����
//
//struct Node* FindNodeByIndex(struct Node* pHead, int iIndex);//���м�ڵ�ͨ���±꣬Ҫ��������
//
//void InsertByIndex(struct Node** pHead, struct Node** pEnd, int iIndex, int iData);//�м����ڵ�,�ڵ�ǰ�����
//
//void AddSomeNode(struct Node** pHead, struct Node** pEnd, int iCount, int iData);//һ�������n���ڵ�(β)
//
//struct Node* FindNodeByData(struct Node*pHead,int iData);//ͨ�����ݲ��ҽڵ�
//
//
//void ChangeData(struct Node *pHead,int iResData,int iDesData); //�޸�ָ���ڵ����ݣ��ĳ�iDesData
//
//void ChangeSomeData(struct Node* pHead, int iResData, int iDesData);//�޸�һ����ͬ�Ľڵ� ������ȵ�ȫ����ֵ���Ͳ�������Ŷ
//
//void ChangeSomeDataTest(struct Node* pHead, int iResData, int iDesData);//Ҳ���޸�һ����ͬ�� ֻ�Ƿ�����һ��
//
//void DeleteHead(struct Node** pHead, struct Node** pEnd);//ͷɾ��
//
//void DeleteEnd(struct Node** pHead, struct Node** pEnd);//βɾ��
//
//struct Node* DeleteOneDataByData(struct Node** pHead, struct Node** pEnd, int iData);//�м�ɾ��һ���ڵ�
//
//void DeleteAllSameDataByData(struct Node** pHead, struct Node** pEnd, int iData);//ɾ��������ͬ�Ľڵ�
//
//void DeleteDataByIndex(struct Node** pHead, struct Node** pEnd, int iIndex);//�����±�ɾ���ڵ�
//
//void SwapByData(struct Node*pHead,int iData1,int iData2);//�������ݽ����ڵ������
//
//void SwapByIndex(struct Node* pHead, int iIndex1, int iIndex2);//�����±꽻���ڵ�����
//
//void SwapByChangePoint(struct Node** pHead, struct Node** pEnd, int iIndex1, int iIndex2);//���������ڵ�ָ��ָ��ҲҪ�䣬�����Ƕ���ָ��
//
//void ReversrByDate(struct Node* pHead);//ͨ�����ݷ�ת���������ı�ڵ����Դ���һ��ָ��
//
//int  GetListNodeCount(struct Node* pHead);//�õ��ڵ����
//
//void ReverseByPoint(struct Node** pHead, struct Node** pEnd);//ͨ���ڵ㷭ת������ָ��
//
//void ReverseBySpace(struct Node** pHead, struct Node** pEnd);//ͨ�������ռ䷭ת����
//
//int main()
//{
//	struct Node* pHead = NULL;//����ͷָ��
//	struct Node* pEnd = NULL;//����βָ��
//	//AddSomeNode(&pHead,&pEnd,5,5);
//	/*AddToEnd(&pHead, &pEnd, 3);
//	AddToEnd(&pHead, &pEnd, 4);*/
//	//InsertByIndex(&pHead, &pEnd, 0, 15);
//	AddToEnd(&pHead, &pEnd, 2);
//	AddToEnd(&pHead, &pEnd, 5);
//	//AddToEnd(&pHead, &pEnd, 5);
//	//AddToEnd(&pHead, &pEnd, 8);
//	//Look(pHead);
//	//printf("ɾ����Ľڵ�Ϊ��");
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
//		printf("����Ϊ��\n");
//		return;
//	}
//	//��һ���� Ȼ����ѭ�� �õ�һ���ҹ��ĵ�ַ
//	struct Node* pRes = FindNodeByData(pHead, iResData);
//	if (pRes == NULL)
//		printf("���޴˽ڵ�!\n");
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
//		printf("���޴˽ڵ㣡\n");
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
//	//�ȱ����ҽڵ����д���ĺ���
//	struct Node* pRes = FindNodeByData(pHead, iResData);
//	if (pRes == NULL)
//		printf("���޴˽ڵ�!\n");
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
//		printf("�±������������������룡");
//		return;
//	}
//	if (iIndex == 0)//ͷ���
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
//			printf("���޴˽ڵ�!\n");
//	}
//}
//
//struct Node* FindNodeByIndex(struct Node* pHead, int iIndex)
//{
//	//�����Ϸ��Լ��
//	if (pHead == NULL || iIndex < 0)
//	{
//		printf("���������±����С��0����������Ϊ������");
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
//	printf("����Ҳ�����~");
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
//	//�����ڵ�
//	struct Node* pTemp = (struct Node*)malloc(sizeof(struct Node));
//	//malloʧ��pTemp���벻�ɹ�
//	if (pTemp != NULL)
//	{
//		//�ڵ��Ա��ֵ����ʼ����
//		pTemp->iData = iData;
//		pTemp->pNext = NULL;
//		//����ȥ
//		if (NULL == *pHead)//ͷ���Ϊ�վ��ǿ�����
//		{
//			*pHead = pTemp;
//			//*pEnd = pTemp;
//		}
//		else
//		{
//			(*pEnd)->pNext = pTemp; //βָ��ָ���½ڵ�
//			//*pEnd = pTemp;//���µĽڵ��Ϊβ�ڵ�
//		}
//	}
//	*pEnd = pTemp;//��ִ�е�д�����������
//}
//
//void DeleteHead(struct Node** pHead, struct Node** pEnd)
//{
//	if (*pHead == NULL)
//		return;
//	if (*pHead == *pEnd)//ֻ��һ���ڵ� ���� (*pHead)->pNext==NULL;
//	{
//		free(*pHead);
//		*pHead = NULL;
//		*pEnd = NULL;
//	}
//	else
//	{
//		struct Node* pT = *pHead;//��¼ͷ
//		(*pHead) = (*pHead)->pNext;
//		free(pT);//�൱���ͷ�ͷ��Ȼ��ͷ��������
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
//		//��β�ڵ��ǰһ��,��Ҫֱ�Ӳ���ͷ
//		struct Node* pT = *pHead;
//		while (pT->pNext!=*pEnd)//��Ⱦ��ҵ���
//		{
//			pT = pT->pNext;
//		}
//		//�ҵ���(һ�������ҵ�����Ȼǰ����˳���)
//		free(*pEnd);
//		*pEnd = pT;
//		//�µ�β��ֵΪNULL
//		(*pEnd)->pNext = NULL;
//
//	}
//}
//
//struct Node* DeleteOneDataByData(struct Node** pHead, struct Node** pEnd, int iData)
//{
//	if (*pHead == NULL)
//		return NULL;
//	if ((*pHead)->iData == iData)//���ɾ��ͷ��β�͵���д���ĺ���
//	{ 
//		DeleteHead(pHead, pEnd);
//		return *pHead;
//	}
//	else if ((*pEnd)->iData == iData)
//	{
//		DeleteEnd(pHead, pEnd);
//		return *pHead;//���Ƿ���ͷ �������
//	}
//	else
//	{
//		//ѭ���ҽڵ�
//		struct Node* pTemp = *pHead;
//		while (pTemp->pNext != NULL)//�����ҵ�β������~
//		{
//			if (pTemp->pNext->iData == iData)//pTemp����Ҫɾ���ڵ��ǰһ���ڵ�
//				break;
//			pTemp = pTemp->pNext;
//		}
//		if (pTemp->pNext != NULL)
//		{
//			struct Node* pT = pTemp->pNext;//��¼��ɾ���Ľڵ�
//			pTemp->pNext = pT->pNext;//��ɾ���ڵ�� ǰһ���ڵ�ָ�� ��ɾ���ڵ�� ��һ���ڵ�
//			free(pT);
//			return pTemp;//�������pTemp->pNext  ����ӦpHead
//		}
//		else
//		{
//			printf("û�ҵ�����Ҫ�Ľڵ���~\n");
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
//		pTemp = DeleteOneDataByData(&pTemp, pEnd, iData);//�����Ҽ���ɾ��Ϊ��������з���ֵ ��pTemp�����ң���Ȼ��ͷҲ����ֻ�����ȽϷ�ʱ,��ͷ�ȽϺã���Ȼ���м������
//		
//	}
//
//}
//
//void DeleteDataByIndex(struct Node** pHead, struct Node** pEnd, int iIndex)
//{
//	if (*pHead == NULL)
//		return;
//	if (iIndex == 0)//�±�Ϊ0����ͷɾ��
//		DeleteHead(pHead,pEnd);
//	else
//	{
//		//��ǰһ���ڵ�
//		struct Node* pTemp = FindNodeByIndex(*pHead,iIndex-1);
//		if (pTemp != NULL)
//		{
//			if (pTemp->pNext == (*pEnd))//�ж�β
//			{
//				DeleteEnd(pHead, pEnd);
//				return;
//			}
//			struct Node* pT = pTemp->pNext;//��¼��ɾ���Ľڵ�
//			pTemp->pNext = pT->pNext;
//			free(pT);
//		}
//		else
//		{
//			printf("���޴˽ڵ�!\n");
//		}
//	}
//}
//
//void SwapByData(struct Node* pHead, int iData1, int iData2)
//{
//	if (pHead == NULL)
//		return;
//	//�ҵ�һ������
//	struct Node* pT1 = FindNodeByData(pHead, iData1);
//	struct Node* pT2 = FindNodeByData(pHead, iData2);
//
//	//�ж��Ƿ�Ϊ��
//	if (pT1 != NULL && pT2 != NULL)
//	{
//		//������Ա  �ṹ�廥�ำֵ���ָ�뻻û��
//		//struct Node p = *pT1;
//		//*pT1 = *pT2;
//		//*pT2 = p; �������ݾͲ����
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
//	//�ҵ�һ������
//	struct Node* pT1 = FindNodeByIndex(pHead, iIndex1);
//	struct Node* pT2 = FindNodeByIndex(pHead, iIndex2);
//
//	//�ж��Ƿ�Ϊ��
//	if (pT1 != NULL && pT2 != NULL)
//	{
//		//������Ա  �ṹ�廥�ำֵ���ָ�뻻û��
//		//struct Node p = *pT1;
//		//*pT1 = *pT2;
//		//*pT2 = p; �������ݾͲ����
//		int t1 = pT1->iData;
//		pT1->iData = pT2->iData;
//		pT2->iData = t1;
//
//	}
//}
//
//void SwapByChangePoint(struct Node** pHead, struct Node** pEnd, int iIndex1, int iIndex2)
//{
//	//�����Ϸ��Լ��
//	if (*pHead == NULL || (*pHead)->pNext == NULL || iIndex1 == iIndex2 || iIndex1 < 0 || iIndex2 < 0)//1���ڵ�,û�нڵ�����±���Ȼ���С��0������
//	{
//		return;
//	}
//	//ȷ����С��ϵ
//	int iMin = iIndex1;
//	int iMax = iIndex2;
//	if (iIndex1 > iIndex2)
//	{
//		iMin = iIndex2;
//		iMax = iIndex1;
//	}
//	//�����±��ҽڵ�
//	struct Node* pMin = FindNodeByIndex(*pHead, iMin);
//	struct Node* pMax = FindNodeByIndex(*pHead, iMax);
//	//�Ҳ����͵���ֹ
//	if (pMin == NULL || pMax == NULL)
//	{
//		printf("���޴˽ڵ�!\n");
//		return;
//	}
//	//ͷ��β����
//	if (pMin == *pHead && pMax == *pEnd)
//	{
//		if ((*pHead)->pNext == *pEnd)//�����ڵ�
//		{
//			(*pEnd)->pNext = (*pHead);
//			(*pHead)->pNext = NULL;
//			//����ָ��ָ��
//			(*pHead) = (*pEnd);
//			(*pEnd) = (*pHead)->pNext;
//		}
//		else//����ڵ�
//		{
//			//�ҵ�β�͵�ǰһ���ڵ�
//			struct Node* pMaxPre = FindNodeByIndex(*pHead, iMax - 1);
//			//β��ָ��ͷ����һ��
//			(*pEnd)->pNext = (*pHead)->pNext;
//			//pMaxPre����һ��ָ��ͷ���ǽ�ͷ���β��
//			pMaxPre->pNext = *pHead;
//			//ͷ��һ��Ϊ��
//			(*pHead)->pNext = NULL;
//			//����ͷβָ��ָ��
//			(*pHead) = (*pEnd);
//			(*pEnd) = pMaxPre->pNext;
//		}
//	}
//	else if (pMin == *pHead && pMax != *pEnd)//����ͷ���м䣬��Ϊ��ͷ���� ��ͷ������
//	{
//		//����
//		if ((*pHead)->pNext == pMax)// <=> pMin->pNext==pMax
//		{
//			(*pHead)->pNext = pMax->pNext;
//			pMax->pNext = *pHead;
//			*pHead = pMax;
//		}
//		else
//		{
//			//��PMax��ǰһ��ָ��
//			struct Node* pMaxPre = FindNodeByIndex(*pHead, iMax - 1);
//			//��¼ͷ����һ���ڵ�
//			struct Node* pHeadNext = (*pHead)->pNext;
//			pMin->pNext = pMax->pNext;
//			pMaxPre->pNext = pMin;
//			//pMaxָ��ͷ������һ��
//			pMax->pNext = pHeadNext;
//			//�ı�ͷ
//			*pHead = pMax;
//		}
//	}
//	else if (pMin != (*pHead) && pMax == (*pEnd))//β���м�
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
//		//����
//		if (pMin->pNext = pMax)
//		{//�ҵ�pMin��ǰһ���ڵ�
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
//	if (pHead == NULL || pHead->pNext == NULL)//һ���ڵ���߿սڵ�Ͳ��÷�ת
//	{
//		return;
//	}
//	int iCount = GetListNodeCount(pHead);//��ȡ�ڵ����
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
//	int iCount = GetListNodeCount(*pHead);//��ȡ�ڵ����
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
//	//��Ϊ�Ƕ���ָ������ Ҫ������ʱ������Ȼ���޸�ԭ����
//	struct Node* pTemp = *pHead;
//	//�����������ͷβ
//	struct Node* pNewHead = NULL; 
//	struct Node* pNewEnd = NULL;
//	while (pTemp != NULL)
//	{
//		AddToHead(&pNewHead, &pNewEnd, pTemp->iData);//����һ��ͷ���һ��
//		pTemp = pTemp->iData;
//	}
//	//�ͷ�ԭ����
//	FreeListNULL(pHead, pEnd);
//	//ԭͷβָ��ָ���µı���
//	(*pHead) = pNewHead;
//	(*pEnd) = pNewEnd;
//}