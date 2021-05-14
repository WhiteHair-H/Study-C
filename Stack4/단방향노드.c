#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ��� ����ü ����
typedef struct node {
	int data;
	struct node* next;
}Node;

// ��� ����ü ����
typedef struct {
	Node* head;      // ��带 ����ų�� �ִ� Ÿ���� �;��Ѵ�. 
}HeadNode;

// ����� �����ϴ� �Լ�
HeadNode* createHead(void)
{
	HeadNode* h = (HeadNode*)malloc(sizeof(HeadNode));
	if (h != NULL) h->head = NULL; // ������ ����
	return h;
}
void preinsertNode(HeadNode* h, int data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (newNode != NULL) {
		newNode->data = data;
		newNode->next = h->head;
		h->head = newNode;
	}
}
// ���� ���� �Լ�
void rearInsertNode(HeadNode* h, int data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	Node* curr = (Node*)malloc(sizeof(Node));
	if (h->head == NULL)
	{
		if (newNode != NULL)
		{
			newNode->data = data;
			newNode->next = NULL;
			h->head = newNode;
		}
	}
	else {
		if (newNode != NULL)
		{
			newNode->data = data;
			newNode->next = NULL;
			if (curr != NULL)
			{
				curr = h->head;
				while (curr->next != NULL) curr = curr->next;
				curr->next = newNode;
			}
		}
	}

}
//��ü ���� �Լ�
void allDelNode(HeadNode* target)
{
	Node* remNode = (Node*)malloc(sizeof(Node));

	while (target->head != NULL)
	{
		remNode = target->head;
		target->head = remNode->next;

		free(remNode);
		printf("��尡 �����Ǿ����ϴ�.\n");

	}
}
Node* removeNode(HeadNode* h , int data)
{
	int i = 1;
	Node* curr = h->head;
	Node* curr2 = NULL;
	while (curr->data != data)
	{
		curr2 = curr;
		curr = curr->next;
		i++;
		if (curr2->next == NULL)
			break;
	}
	if (i == 1)
	{
		h->head = curr->next;
		free(curr);
	}
	else if (curr2->next == NULL)
	{
		printf("������ ���� �����ϴ�.\n");
		return;
	}
	else
	{
		curr2->next = curr->next;
		free(curr);
	}

	
}

Node* searchNode(HeadNode* h , int data)
{
	Node* s = h->head;

	while (s->next != NULL)
	{
		if (s->data == data) break;
		s = s->next;
	}
	if (s->data != data)
	{
		printf("ã�°��� �����ϴ�\n");
	}
	else
	{
		printf("ã�� ������ -> %d\n", s->data);
	}
}
void printNode(HeadNode* h)
{
	int i = 1;
	Node* curr1 = h->head;
	while (curr1 != NULL) {
		printf("%d��° ��� ������ : %d\n", i, curr1->data);
		curr1 = curr1->next;
		i++;
	}
}

int main()
{
	int i = 1;
	HeadNode* head = createHead();

	preinsertNode(head, 10);
	preinsertNode(head, 20);
	preinsertNode(head, 30);
	rearInsertNode(head, 40);
	rearInsertNode(head, 50);
	rearInsertNode(head, 60);

	printNode(head);

	searchNode(head, 11);
	searchNode(head, 20);

	Node*delete = removeNode(head, 20);
	printf("�����Ͱ� �����Ǿ����ϴ�.\n");

	i = 1;
	printNode(head);

	allDelNode(head);

	free(head);

	return 0;
}