//#include<stdio.h>
//#include<stdlib.h>
//#include<malloc.h>
//#include<string.h>
//#include<stdbool.h>
//#include<math.h>
//struct Node 
//{
//	int a;
//	struct Node* pNext;
//	struct Node* pPre;
//};
////����һ����ͷ
//struct Node* Stack();
////�ж��Ƿ��ǿ�ջ
//bool IsEmpty(struct Node* pStack);
////ѹջ ��ջ
//void Push(struct Node* pStack, int a);
////�ͷ�ջ
//void FreeStack(struct Node* *pStack);
////Top��ȡջ���ڵ㲻ɾ�� Pop��ȡջ���ڵ㲢ɾ��
//struct Node* Top(struct Node* pStack);
////ɾ��ջ��Ԫ��
//void Pop(struct Node* pStack);
//int main()
//{
//	struct Node* pStack = Stack();
//	/*Push(pStack, 1);
//	Push(pStack, 2);
//	Push(pStack, 3);
//	Push(pStack, 4);*/
//
//	int arr[5] = { 1,2,3,4,5 };
//	Push(pStack, arr[0]);
//	Push(pStack, arr[1]);
//	Push(pStack, arr[2]);
//	Push(pStack, arr[3]);
//	Push(pStack, arr[4]);
//	//��ջ
//	arr[0] = Top(pStack)->a;
//	Pop(pStack);
//	arr[1] = Top(pStack)->a;
//	Pop(pStack);
//	arr[2] = Top(pStack)->a;
//	Pop(pStack);
//	arr[3] = Top(pStack)->a;
//	Pop(pStack);
//	arr[4] = Top(pStack)->a;
//	Pop(pStack);
//
//	FreeStack(&pStack);
//
//	system("pause");
//	return 0;
//}
//void Pop(struct Node* pStack)
//{
//	if (IsEmpty(pStack))
//		return;
//	//��¼Ҫɾ����ջ��
//	struct Node* pTemp = pStack->pPre;
//	pTemp->pPre->pNext = pStack;
//	pStack->pPre = pTemp->pPre;
//	free(pTemp);
//}
//struct Node* Top(struct Node* pStack)
//{
//	if (IsEmpty(pStack))
//		return NULL;
//	return pStack->pPre;//����β�;���ͷ��ǰһ��
//}
//void FreeStack(struct Node* *pStack)
//{
//	if (*pStack == NULL)
//		return;
//	struct Node* pTemp = pStack;
//	do
//	{
//		struct Node* pT = pTemp;
//		pTemp = pTemp->pNext;
//		free(pT);
//	} while (pTemp != *pStack);
//	//�ͷ������ÿ�
//	*pStack = NULL;
//}
//void Push(struct Node*pStack,int a)
//{
//	//�����Ϸ��Լ��
//	if (pStack == NULL)
//		return;
//	struct Node* pTemp = (struct Node*)malloc(sizeof(struct Node));
//	if (pTemp == NULL)
//		return ;
//	pTemp->a = a;
//	pTemp->pNext = NULL;
//	pTemp->pPre = NULL;
//	//����  β��� ����ͷ��ǰһ��
//	pTemp->pPre = pStack->pPre;//ǰһ���ڵ�ָ��β��
//	pTemp->pNext = pStack;//�ڵ����һ��ָ��ͷ�����ǲ�����β�ͺ�ͷ���м�
//	pStack->pPre->pNext = pTemp;//β�͵���һ��ָ���½ڵ�
//	pStack->pPre = pTemp;//ͷ��ǰһ��ָ���½ڵ�
//}
//bool IsEmpty(struct Node*pStack)
//{
//	if (NULL==pStack || pStack->pNext == pStack)
//		return true;
//	return false;
//}
//struct Node* Stack()
//{
//	//����ڵ�
//	struct Node* pTemp = (struct Node*)malloc(sizeof(struct Node));
//	if (pTemp == NULL)
//		return pTemp;
//	//��Ա��ֵ
//	pTemp->a = -1;
//	pTemp->pNext = pTemp;
//	pTemp->pPre = pTemp;
//	return pTemp;//��ֵ��󷵻�
//}