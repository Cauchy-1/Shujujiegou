//头添加+尾删除
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<malloc.h>
#include<math.h>

struct Node
{
	int a;
	struct Node* pNext;
	struct Node* pPre;
};

struct Node* Queue();//返回队列的头
bool IsEmpty(struct Node* pQueue);
struct Node* Front(struct Node* pQueue);//返回队头
struct Node* Back(struct Node* pQueue);
void Push(struct Node* pQueue, int a);
void Pop(struct Node* pQueue);
void FreeQueue(struct Node** pQueue);
int main()
{

	struct Node* pQueue = Queue();

	Push(pQueue, 1);
	Push(pQueue, 2);
	Push(pQueue, 3);
	Push(pQueue, 4);

	Pop(pQueue);
	Pop(pQueue);
	Pop(pQueue);
	Pop(pQueue);
	FreeQueue(&pQueue);
	system("pause>0");
	return 0;
}
struct Node* Queue()
{
	struct Node* pT = (struct Node*)malloc(sizeof(struct Node));
	if (pT == NULL)
		return NULL;
	pT->a = -1;
	pT->pNext = pT;
	pT->pPre = pT;
	return pT;
}
bool IsEmpty(struct Node* pQueue)
{
	if (NULL == pQueue || pQueue->pNext == pQueue)
		return true;
	return false;
}
struct Node* Front(struct Node* pQueue)
{
	if (IsEmpty(pQueue))
		return  NULL;
	return pQueue->pPre;
}
struct Node* Back(struct Node* pQueue)
{
	if (IsEmpty(pQueue))
		return  NULL;
	return pQueue->pNext;
}
void Push(struct Node* pQueue, int a)
{
	if (pQueue == NULL)
		return;
	//申请空间
	struct Node* pT = (struct Node*)malloc(sizeof(struct Node));
	if (NULL == pT)
		return;
	//成员赋值
	pT->a = -1;
	pT->pNext = NULL;
	pT->pPre = NULL;
	//先断后连 头添加
	pT->a = a;
	pT->pNext = pQueue->pNext;
	pT->pPre = pQueue;
	pQueue->pNext->pPre = pT;
	pQueue->pNext = pT;

}
void Pop(struct Node* pQueue)
{
	if (IsEmpty(pQueue))
		return;
	//记录节点
	struct Node* pT = pQueue->pPre;
	pT->pPre->pNext = pQueue;
	pQueue->pPre = pT->pPre;
	free(pT);
}
void FreeQueue(struct Node** pQueue)
{
	if (IsEmpty(*pQueue))
	{
		free(*pQueue);
		*pQueue = NULL;
		return;
	}
	struct Node* pT = *pQueue;
	do
	{
		struct Node* pTemp = pT;
		pT = pT->pNext;
		free(pTemp);
	} while (pT != pQueue);
	*pQueue = NULL;
}