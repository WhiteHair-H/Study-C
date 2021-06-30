#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��� ��������
typedef struct AlphaNode
{
	char data;
	struct AlphaNode* next;
}AlphaNode;

//��� ��������
typedef struct
{
	AlphaNode* head;
}HeadNode;

//����� ����
HeadNode* createHead(void)
{
	HeadNode* h = (HeadNode*)malloc(sizeof(HeadNode));
	if (h != NULL) h->head = NULL; // --> ������ ����
	return h;
}

// ��� �����ϱ�
void create_Alpha(HeadNode* h, char data)
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

// ��� ���
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

// ��� �Է�
char input_ary(HeadNode* head)
{
	char data = ' ';
	for (int i = 0; i < 10; i++)
	{
		printf("���ĺ��� �Է��Ͻÿ� : \n");
		scanf(" %c", &data);
		create_Alpha(head, data);
	}
}

// ��� ü����
void changeNode(HeadNode* h, AlphaNode* Node1, AlphaNode* Node2)
{
	AlphaNode* temp = (AlphaNode*)malloc(sizeof(AlphaNode));
	AlphaNode* target1 = (AlphaNode*)malloc(sizeof(AlphaNode));
	AlphaNode* target2 = (AlphaNode*)malloc(sizeof(AlphaNode));

	target1 = h->head;
	while (target1 != Node1) target1 = target1->next;

	target2 = h->head;
	while (target2 != Node2) target2 = target2->next;


	if (temp != NULL)
	{
		temp->data = Node1->data;
		Node1->data = Node2->data;
		Node2->data = temp->data;
	}

	free(temp);
}

// ��� ���� ����
void insertionsort(HeadNode* h)
{
	int i, q, j, t;
	AlphaNode* node1 = (AlphaNode*)malloc(sizeof(AlphaNode));
	AlphaNode* node2 = (AlphaNode*)malloc(sizeof(AlphaNode));
	char data1, data2;

	for (i = 1; i < 10; i++)
	{
		node1 = h->head;
		for (q = 0; q < i; q++)
		{
			if (node1 != NULL) node1 = node1->next;
		}
		if (node1 != NULL) data1 = node1->data;

		for (j = i; j > 0; j--) // ���� ��� ������ �ε��� i�� j�� ����
		{
			node2 = h->head;
			for (t = 0; t < i - j; t++)
			{
				if (node2 != NULL) node2 = node2->next;
			}
			data2 = node2->data;
			if ((int)data2 > (int)data1) // �⺻���� �������� ��
			{
				changeNode(h, node2, node1);
			}
		}
		printf("\n %d�ܰ� : ", i);
		printNode(h);
	}
}

int main()
{
	HeadNode* head = createHead();
	char inp = input_ary(head);
	create_Alpha(head, inp);
	printNode(head);
	insertionsort(head);
	printNode(head);

	return 0;
}
