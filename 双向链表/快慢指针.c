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
	//变成不循环的
	struct Node* pEnd = head.pPre;//记录一下尾指针
	pEnd->pNext = NULL;
	head.pPre = NULL;//变成双向不循环链表了



	//变成环
	//让head的pre即尾巴指向3这个节点成一个到6的环
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
	//连接 尾添加
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
		//free(pTemp->pPre);//可以记录也可以不记录因为是双向的
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
	while (quick!=NULL&&quick->pNext!=NULL)//quick比较快先到null 分节点是偶数个或者奇数个因为一次跳两步
	{
		slow = slow->pNext;//慢指针一次走一步
		quick = quick->pNext->pNext;//快指针一次走两步
		if (slow == quick)
			return true;
	}
	return false;
}