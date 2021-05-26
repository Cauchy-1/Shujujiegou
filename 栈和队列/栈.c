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
////创建一个空头
//struct Node* Stack();
////判断是否是空栈
//bool IsEmpty(struct Node* pStack);
////压栈 入栈
//void Push(struct Node* pStack, int a);
////释放栈
//void FreeStack(struct Node* *pStack);
////Top获取栈顶节点不删除 Pop获取栈顶节点并删除
//struct Node* Top(struct Node* pStack);
////删除栈顶元素
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
//	//出栈
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
//	//记录要删除的栈顶
//	struct Node* pTemp = pStack->pPre;
//	pTemp->pPre->pNext = pStack;
//	pStack->pPre = pTemp->pPre;
//	free(pTemp);
//}
//struct Node* Top(struct Node* pStack)
//{
//	if (IsEmpty(pStack))
//		return NULL;
//	return pStack->pPre;//返回尾巴就是头的前一个
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
//	//释放完了置空
//	*pStack = NULL;
//}
//void Push(struct Node*pStack,int a)
//{
//	//参数合法性检测
//	if (pStack == NULL)
//		return;
//	struct Node* pTemp = (struct Node*)malloc(sizeof(struct Node));
//	if (pTemp == NULL)
//		return ;
//	pTemp->a = a;
//	pTemp->pNext = NULL;
//	pTemp->pPre = NULL;
//	//连接  尾添加 就是头的前一个
//	pTemp->pPre = pStack->pPre;//前一个节点指向尾巴
//	pTemp->pNext = pStack;//节点的下一个指向头，就是插入在尾巴和头的中间
//	pStack->pPre->pNext = pTemp;//尾巴的下一个指向新节点
//	pStack->pPre = pTemp;//头的前一个指向新节点
//}
//bool IsEmpty(struct Node*pStack)
//{
//	if (NULL==pStack || pStack->pNext == pStack)
//		return true;
//	return false;
//}
//struct Node* Stack()
//{
//	//申请节点
//	struct Node* pTemp = (struct Node*)malloc(sizeof(struct Node));
//	if (pTemp == NULL)
//		return pTemp;
//	//成员赋值
//	pTemp->a = -1;
//	pTemp->pNext = pTemp;
//	pTemp->pPre = pTemp;
//	return pTemp;//赋值完后返回
//}