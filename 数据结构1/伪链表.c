//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<malloc.h>
//struct Node
//{
//	int iValue;//����
//	struct Node* pNext;//��һ���ڵ�ĵ�ַ
//};
//void Look(struct Node* pHead);
//struct Node* FindByData(struct Node* pHead,int iData);//ͨ�����ݲ���
//struct Node* FindByIndex(struct Node* pHead, int iIndex);//ͨ���±����
//void ShowData(struct Node* pNode);
//int Count(struct Node* pHead, int iData);
//void GetNode(struct Node* pHead, struct Node* arr[4], int iData);
//void ChangeByData(struct Node *phead,int ivalue,int iData);//ivalue�޸ĳ�iData
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
//	ChangeByData(&a, 5, 55);//5�ĳ�55
//	ChangeByIndex(&a,3,22);
//	////ͷ���
//	//struct Node g = { 12,&a };
//	////g.pNext=&a
//	////β���
//	//struct Node e = { 123,NULL };
//	//d.pNext = &e;
//	////�м���� cd�м�
//	//struct Node f = { 1234,NULL };
//	//c.pNext = &f;
//	//f.pNext = &d;
//
//	//ͷɾ�� �ǵ��ͷ�
//	//a.pNext = NULL;
//	//βɾ��
//	//c.pNext = NULL;
//	//�м�ɾ��
//	//a.pNext = &c; //a.pNext = b.pNext;
//	
//	Look(&a);
//
//	//struct Node* arr[4] = { NULL };//�����ظ���¼�ڵ�λ�ã��������������Ϊ4��
//
//	//GetNode(&a, arr, 3);
//	//for (int i = 0; i < 4 && arr[i] != NULL; i++)
//	//{
//	//	printf("����:%d\n",arr[i]->iValue);
//	//}
//
//	//printf("ָ�����ݵ�����:%d\n",Count(&a, 3));
//	//struct Node* pFind = FindByIndex(&a, 2);//�������7��������3�����������Ĵ�0��ʼ�ͺ���
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
//	int iNum = 0;//����
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
//		printf("���޴˽ڵ㣡\n");
//	}
//	else
//	{
//		printf("�ҵ��ڵ�%d\n", pNode->iValue);
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
//			arr[iIndex] = pHead;//��¼��ַ�������ټ� �൱�� arr[iIndex]=pHead; iIndex++;
//			iIndex++;
//		}
//		pHead = pHead->pNext;
//	}
//}