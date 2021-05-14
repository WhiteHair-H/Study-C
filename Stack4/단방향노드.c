#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 노드 구조체 정의
typedef struct node {
	int data;
	struct node* next;
}Node;

// 헤드 구조체 정의
typedef struct {
	Node* head;      // 노드를 가리킬수 있는 타입이 와야한다. 
}HeadNode;

// 헤더를 생성하는 함수
HeadNode* createHead(void)
{
	HeadNode* h = (HeadNode*)malloc(sizeof(HeadNode));
	if (h != NULL) h->head = NULL; // 역참조 방지
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
// 후위 삽입 함수
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
//전체 삭제 함수
void allDelNode(HeadNode* target)
{
	Node* remNode = (Node*)malloc(sizeof(Node));

	while (target->head != NULL)
	{
		remNode = target->head;
		target->head = remNode->next;

		free(remNode);
		printf("노드가 삭제되었습니다.\n");

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
		printf("삭제할 값이 없습니다.\n");
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
		printf("찾는값이 없습니다\n");
	}
	else
	{
		printf("찾은 데이터 -> %d\n", s->data);
	}
}
void printNode(HeadNode* h)
{
	int i = 1;
	Node* curr1 = h->head;
	while (curr1 != NULL) {
		printf("%d번째 노드 데이터 : %d\n", i, curr1->data);
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
	printf("데이터가 삭제되었습니다.\n");

	i = 1;
	printNode(head);

	allDelNode(head);

	free(head);

	return 0;
}