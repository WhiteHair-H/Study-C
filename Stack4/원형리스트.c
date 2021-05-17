#include <stdio.h>

typedef struct listNode {
	int data;
	struct listNode* link;
}ListNode;

typedef struct {
	ListNode* head;
}HeadNode;

HeadNode* createHead()
{
	HeadNode* h = (HeadNode*)malloc(sizeof(HeadNode));
	if (h != NULL) h->head = NULL;
	return h;
}

ListNode* createNode(HeadNode* phead, int data)
{
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
	if (newNode == NULL)
	{
		printf("�޸� �Ҵ� ����");
		return;
	}
	else
	{
		newNode->data = data;
		newNode->link = NULL;
		return newNode;
	}
}

void insertFirstNode(HeadNode* phead, ListNode* newNode)
{

	if (phead->head == NULL) // ���鸮��Ʈ�϶���
	{
		phead->head = newNode;
		newNode->link = newNode;
	}
	else
	{
		newNode->link = phead->head->link;
		phead->head->link = newNode;
	}
}

void  insertLastNode(HeadNode* phead, ListNode* newNode)
{
	if (phead->head == NULL)
	{
		phead->head = newNode;
		newNode->link = newNode;
	}
	else
	{
		newNode->link = phead->head->link;
		phead->head->link = newNode;
		phead->head = newNode;
	}
}

void printNode(HeadNode* h)
{
	int i = 1;
	if (h->head == NULL)return;
	ListNode* curr = h->head->link;
	while (curr != h->head)
	{
		printf("%d��° ��� ������ : %d\n", i, curr->data);
		curr = curr->link;
		i++;
	}
	printf("%d��° ������ ��� ������ : %d\n", i, curr->data);
}

void allDelNode(HeadNode* phead)
{

	while (phead->head != NULL)
	{
		ListNode* delNode = phead->head;
		phead->head = delNode->link;
		free(delNode);
		printf("��尡 �����Ǿ����ϴ�!\n");
	}

}


int main()
{
	HeadNode* head = createHead();


	ListNode* node = createNode(head, 10);
	ListNode* node1 = createNode(head, 20);
	ListNode* node2 = createNode(head, 30);
	ListNode* node3 = createNode(head, 40);
	ListNode* node4 = createNode(head, 50);

	insertFirstNode(head, node);
	insertLastNode(head, node1);
	insertLastNode(head, node2);
	insertLastNode(head, node3);
	insertFirstNode(head, node4);

	printNode(head);

	allDelNode(head);

	printNode(head);

	return 1;
}