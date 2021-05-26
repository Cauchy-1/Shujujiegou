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
void Look(struct Node stHead);//����
void FreeList(struct Node* stHead);//������ͷ�
void AddToTail(struct Node* stHead, int iData);//β��� ��ͷ��iData���������ȥ����
void AddToHead(struct Node* stHead, int iData);//ͷ���
void AddBehindData(struct Node* stHead, int iPosData, int iData);//ָ�����ݺ������һ���ڵ�
void AddByIndex(struct Node* stHead, int iPosIndex, int iData);//ָ���±�������ڵ�
void AddBySomeIndex(struct Node* stHead, int iPosIndex, int iData, int iCount);//ָ���±�λ�ò���n���ڵ�
struct Node* FindNodeByData(struct Node *stHead, int iData);//���ݾ������ݲ��ҽڵ�
struct Node* FindNodeByIndex(struct Node* stHead, int iIndex);//�����±���ҽڵ�
void ChangeByIndex(struct Node stHead, int iIndex, int iValue);//�����±��޸�ָ���ڵ�����
void ChangeByData(struct Node stHead, int iData, int iValue);//���������޸�ָ���ڵ�(һ�����޸ĺܶ��)
void DeleteByIndex(struct Node* stHead, int iIndex);//ɾ��ָ���±�ڵ�
void DeleteAllSameNodeByData(struct Node* stHead, int iValue);//ɾ������ָ�������ݽڵ�
void DeleteSame(struct Node* stHead);//ȥ�� 4 3 2 4 2 => 432˫��ѭ��
int main()
{
	//��ͷ ��ָ��дҪ����ռ�
	struct Node stHead = { 0,NULL };
	//�����������
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
	//û��βָ��Ҫ�����������ҵ�β
	struct Node* pT = stHead;
	while (pT->pNext != NULL)
		pT = pT->pNext;
	//ѭ����֮��pT����β����
	pT->pNext = pTemp;
	//������++
	(stHead->iData)++;
}
void FreeList(struct Node* stHead)
{
	if (stHead == NULL || stHead->iData <= 0)
		return;
	struct Node* pTemp = stHead->pNext;//�ӿ�ͷ����һ����ʼ����
	while (pTemp != NULL)
	{
		struct Node* pT = pTemp; //��¼�ڵ� �ڵ����� �ͷż�¼��
		pTemp = pTemp->pNext;
		free(pT);
	}
	stHead->pNext = NULL;
	stHead->iData = 0;
}
void Look(struct Node stHead)
{
	struct Node* pTemp = stHead.pNext;//����ָ�봫��ֻ����ͨ����
	printf("����%d������ ", stHead.iData);
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
	pTemp->pNext = NULL;//����ֵ
	pTemp->pNext = stHead->pNext;
	stHead->pNext = pTemp;
	//����+1
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
			break;//�������breakҲ��
		pTemp = pTemp->pNext;
	}
	if (pTemp == NULL)
	{
		printf("�Ҳ�����!\n");
		return;
	}
	else
	{
		struct Node* pT = (struct Node*)malloc(sizeof(struct Node));
		if (pT == NULL)
		{
			printf("���벻�ɹ�!\n");
			return;
		}
		pT->iData = iData;
		pT->pNext = NULL;//����ֵ
		pT->pNext = pTemp->pNext;
		pTemp->pNext = pT;
		(stHead->iData) += 1;
	}
}
void AddByIndex(struct Node* stHead, int iPosIndex, int iData)
{
	if (stHead == NULL || iPosIndex  > stHead->iData || iPosIndex < 0)
		return;
	struct Node* pTemp = stHead;//����ָ��next
	for (int i = 0; i < iPosIndex; i++)
	{
		pTemp = pTemp->pNext;
	}
	//�ҵ���
	AddToHead(pTemp, iData);
	(pTemp->iData) -= 1;
	(stHead->iData) += 1;
}
void AddBySomeIndex(struct Node* stHead, int iPosIndex, int iData, int iCount)
{
	if (stHead == NULL || iPosIndex > stHead->iData || iPosIndex < 0)
		return;
	struct Node* pTemp = stHead;//����ָ��next
	for (int i = 0; i < iPosIndex; i++)
	{
		pTemp = pTemp->pNext;
	}
	//�ҵ���ѭ������
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
	return pTemp;//��
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
	//ѭ���ҽڵ�
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
	//ѭ����ǰһ���ڵ�
	struct Node* pTemp = stHead;//�ӿ�ͷ���±����ҵ��ľ���ǰһ���ڵ���
	for (int i = 0; i < iIndex; i++)
		pTemp = pTemp->pNext;
	struct Node* pT = pTemp->pNext;//��¼��ɾ���Ľڵ�
	pTemp->pNext = pT->pNext;
	free(pT);//�ͷ�
	(stHead->iData) -= 1;
}
void DeleteAllSameNodeByData(struct Node* stHead, int iValue)
{
	if (stHead == NULL || stHead->iData <= 0)
		return;
	struct Node* pTemp = stHead;
	while (pTemp->pNext != NULL)
	{
		if (pTemp->pNext->iData == iValue)//�ҵ�ǰһ���ڵ�
		{
			struct Node* pT = pTemp->pNext;//��¼��ɾ���Ľڵ�
			pTemp->pNext = pT->pNext;
			free(pT);
			(stHead->iData) -= 1;
			continue;//��Ҫ������
		}
		pTemp = pTemp->pNext;
	}

}
void DeleteSame(struct Node* stHead)
{
	if (stHead == NULL || stHead->iData <= 1)//����С��һ���Ͳ���ȥ��
		return;
	struct Node* pWai = stHead->pNext;//�����ⲿѭ��
	while (pWai != NULL)
	{
		//������Ľڵ���бȽ�
		struct Node* pNei = pWai;
		while (pNei->pNext != NULL)
		{
			if (pWai->iData == pNei->pNext->iData)
			{
				//ɾ��pNei��next
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