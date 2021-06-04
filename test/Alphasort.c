#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct AlphaNode
{
	char* data;
	struct AlphaNode* next;
}AlphaNode;

typedef struct
{
	AlphaNode* head;
}HeadNode;

HeadNode* createHead(void)
{
	HeadNode* h = (HeadNode*)malloc(sizeof(HeadNode));
	if (h != NULL) h->head = NULL; // 역참조 방지
	return h;
}

void insertAlphaSort(HeadNode* h, char data)
{
	AlphaNode* newNode = (AlphaNode*)malloc(sizeof(AlphaNode));
	AlphaNode* preNode = (AlphaNode*)malloc(sizeof(AlphaNode));
	if (h->head == NULL)
	{
		if (newNode != NULL)
		{
			h->head = newNode;
			newNode->data = data;
			newNode->next = NULL;
		}
	}
	else
	{
		if (newNode != NULL)
		{
			newNode->data = data;
			newNode->next = NULL;

			if (preNode != NULL)
			{
				preNode = h->head;
				while (preNode->next != NULL) preNode = preNode->next;
				preNode->next = newNode;
				newNode->next = NULL;
			}
		}
	}
}

void printNode(HeadNode* h)
{
	int i = 1;
	AlphaNode* curr = h->head;
	while (curr != NULL)
	{
		printf("%c ", curr->data);
		curr = curr->next;
		i++;
	}
}

char input_ary(HeadNode* head)
{
	char data = ' ';
	for (int i = 0; i < 10; i++)
	{
		printf("알파벳을 입력하시오 : \n");
		scanf(" %c", &data);
		insertAlphaSort(head, data);
	}
}

void changeNode(HeadNode* head, AlphaNode *Node1, AlphaNode *Node2)
{
	AlphaNode* temp = (AlphaNode*)malloc(sizeof(AlphaNode));
	temp->data = Node1->data;
	Node1->data = Node2->data;
	Node2->data = temp->data;
	free(temp);
}

void insertionsort(HeadNode* h)
{
	AlphaNode* node1 = (AlphaNode*)malloc(sizeof(AlphaNode));
	AlphaNode* node2 = (AlphaNode*)malloc(sizeof(AlphaNode));

	int i, j, t;
	for (i = 1; i < 10; i++)
	{
		//ary[i] < ary[j]
		node1 = h->head;
		node2 = h->head;
		for (int q = 0; q < i; q++)
		{
			node1 = node1->next;
		}

		for (j = i; j > 0; j--) // 정렬 대상 원소의 인덱스 i를 j에 저장
		{
			if (node1->data < node2->data) // 기본값과 이전값을 비교
			{ 
				changeNode(h->head, node1->data, node2->data);
			}
		}
		printf("\n %d단계 : ", i);
		printNode(h->head);
	}
}



int main()
{
	HeadNode* head = createHead();
	char inp = input_ary(head);
	insertAlphaSort(head, inp);
	printNode(head);
	//changeNode(head , head->head->next->next, head->head);
	insertionsort(head);
	printNode(head);

	return 0;
}
