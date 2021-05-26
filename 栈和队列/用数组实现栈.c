////数组用尾好一点，如果用头所有的都要往后挪
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//#include<string.h>
//#include<malloc.h>
//#include<stdbool.h>
//
//#define NUM 10
//struct Node 
//{
//	int arr[NUM];
//	int index;//记录操作到几个元素
//};
//
////创建头
//struct Node* Stack();
////判断是否为空
//bool IsEmpty(struct Node* pStack);
////压栈
//void Push(struct Node* pStack, int a);
////释放栈
//void FreeStack(struct Node** pStack);
////Top
//int Top(struct Node* pStack);
////Pop
//void Pop(struct Node* pStack);
//int main()
//{
//	struct Node* pStack = Stack();
//	if (pStack == NULL)
//		return 1;
//
//	int arr[4] = { 2,3,4,5 };
//	Push(pStack, arr[0]);
//	Push(pStack, arr[1]);
//	Push(pStack, arr[2]);
//	Push(pStack, arr[3]);
//
//	arr[0] = Top(pStack);
//	Pop(pStack);
//	arr[1] = Top(pStack);
//	Pop(pStack);
//	arr[2] = Top(pStack);
//	Pop(pStack);
//	arr[3 ] = Top(pStack);
//	Pop(pStack);
//
//
//	free(&pStack);
//	system("pause>0");
//	return 0;
//}
//struct Node* Stack()
//{
//	struct Node* pT = (struct Node*)malloc(sizeof(struct Node));
//	if (pT == NULL)
//		return NULL;
//	pT->index = 0;//下标初始为0 相当于一个没用
//	return pT;
//}
//bool IsEmpty(struct Node* pStack)
//{
//	if (pStack == NULL || pStack->index == 0)
//		return true;
//	return false;
//}
//void Push(struct Node* pStack, int a)
//{
//	if (pStack == NULL || NUM <= pStack->index)
//		return;
//	pStack->arr[pStack->index] = a;
//	(pStack->index)++;
//}
//void FreeStack(struct Node** pStack)
//{
//	free(*pStack);
//	*pStack = NULL;
//}
//int Top(struct Node* pStack)
//{
//	if (IsEmpty(pStack))
//		return 0;
//	return pStack->arr[(pStack->index) - 1];
//}
//void Pop(struct Node* pStack)
//{
//	if (IsEmpty(pStack))
//		return;
//	pStack->index -= 1;//直接让个数减一就好了
//}
