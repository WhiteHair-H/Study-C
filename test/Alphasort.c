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

void insertAlphaSort(HeadNode* h, int data)
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
		printf("%d번째 노드 데이터 : %d\n", i, curr->data);
		curr = curr->next;
		i++;
	}

}

void input_ary(AlphaNode* palpha)
{
	
	printf("알파벳을 입력하시오 : \n");
	scanf("%s", &palpha);
}


int main()
{
	AlphaNode* palpha;
	HeadNode* head = createHead();
	input_ary(head);
	insertAlphaSort(head, &palpha);
	printNode(palpha);


	return 0;
}
