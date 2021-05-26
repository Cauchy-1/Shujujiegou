#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
#include<math.h>
#include <stdbool.h>
struct Node
{
	int a;
	struct Node* pPre;
	struct Node* pNext;
};
void Append(struct Node* head, int iData);
void Free(struct Node* head);
bool QuickSlow(struct Node* head);
int main()
{
	struct Node head;
	head.a = -1;
	head.pNext = &head;
	head.pPre = &head;
	Append(&head, 1);
	Append(&head, 2);
	Append(&head, 3);
	Append(&head, 4);
	Append(&head, 5);
	Append(&head, 6);
	//��ɲ�ѭ����
	struct Node* pEnd = head.pPre;//��¼һ��βָ��
	pEnd->pNext = NULL;
	head.pPre = NULL;//���˫��ѭ��������



	//��ɻ�
	//��head��pre��β��ָ��3����ڵ��һ����6�Ļ�
	pEnd->pNext = head.pNext->pNext->pNext;
	bool res = QuickSlow(&head);

	Free(&head);
	system("pause");
	return 0;
}
void Append(struct Node* head, int iData)
{
	if (head == NULL)
		return;
	struct Node* pTemp = (struct Node*)malloc(sizeof(struct Node));
	if (pTemp == NULL)
		return;
	pTemp->a = iData;
	pTemp->pNext = NULL;
	pTemp->pPre = NULL;
	//���� β���
	pTemp->pPre = head->pPre;
	pTemp->pNext = head;
	head->pPre->pNext = pTemp;
	head->pPre = pTemp;
}
void Free(struct Node* head)
{
	if (head == NULL)
		return;
	struct Node* pTemp = head->pNext;
	while (pTemp != head)
	{
		struct Node* pT = pTemp;
		pTemp = pTemp->pNext;
		//free(pTemp->pPre);//���Լ�¼Ҳ���Բ���¼��Ϊ��˫���
		free(pT);
	}
	head->pNext = head;
	head->pPre = head;
}
bool QuickSlow(struct Node* head)
{
	if (head == NULL)
		return false;
	struct Node* quick = head->pNext;
	struct Node* slow = head->pNext;
	while (quick!=NULL&&quick->pNext!=NULL)//quick�ȽϿ��ȵ�null �ֽڵ���ż����������������Ϊһ��������
	{
		slow = slow->pNext;//��ָ��һ����һ��
		quick = quick->pNext->pNext;//��ָ��һ��������
		if (slow == quick)
			return true;
	}
	return false;
}