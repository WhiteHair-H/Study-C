//#include <stdio.h>
//
//// ���߿��� ����Ʈ
//
//typedef struct dlistnode {
//	int data;
//	struct dlistnode* next; // �ڿ� �ִ� ���
//	struct dlistnode* prev; // �տ� �ִ� ���
//}DListNode;
//
//typedef struct
//{
//	DListNode* head;
//}HeadNode;
//
//HeadNode* createHead()
//{
//	HeadNode* h = (HeadNode*)malloc(sizeof(HeadNode));
//	if (h != NULL) h->head = NULL;
//	return h;
//
//}
//
//DListNode* createNode(int data)
//{
//	DListNode* newNode = (DListNode*)malloc(sizeof(DListNode));
//	if (newNode == NULL)
//	{
//		printf("�޸� �Ҵ� ����");
//		exit(1);
//	}
//	else
//	{
//		newNode->data = data;
//		newNode->next = NULL;
//		newNode->prev = NULL;
//		return newNode;
//	}
//}
//
//void insertNode(HeadNode* phead, DListNode* preNode, DListNode* newNode)
//{
//	// �ƹ����� ���� ���
//	if (phead->head == NULL)
//	{
//		phead->head = newNode;
//		newNode->prev = phead;
//	}
//	// �ڿ� �ƹ����� ���� ���
//	else if (preNode->next == NULL)
//	{
//		preNode->next = newNode;
//		newNode->prev = preNode;
//	}
//	// ���̿� ���� ���
//	else
//	{
//		DListNode* Node = preNode->next;
//		preNode->next = newNode;
//		newNode->prev = preNode;
//		newNode->next = Node;
//		Node->prev = newNode;
//
//	}
//}
//
//void allDelNode(HeadNode* h)
//{
//	DListNode* delNode = (DListNode*)malloc(sizeof(DListNode));
//
//	while (h->head != NULL)
//	{
//		delNode = h->head;
//		h->head = delNode->next;
//		delNode->prev = h;
//
//		free(delNode);
//		printf("��尡 �����Ǿ����ϴ�\n");
//	}
//}
//
//void printNode(HeadNode* h)
//{
//	int i = 1;
//	DListNode* curr = h->head;
//
//	if (curr != NULL)
//	{
//		while (curr != NULL)
//		{
//			printf("%d��° ������ : %d\n", i, curr->data);
//			curr = curr->next;
//			i++;
//		}
//	}
//	else
//	{
//		printf("�����Ͱ� �������� �ʽ��ϴ�.\n");
//	}
//}
//
//DListNode* findNode(HeadNode* h, int data)
//{
//	DListNode* n = h->head;
//
//	while (n->next != NULL)
//	{
//		if (n->data == data)break;
//		n = n->next;
//	}
//
//	if (n->data != data)
//	{
//		printf("ã�°��� �����ϴ�.\n");
//	}
//	else
//	{
//		printf("�����Ͱ� �����մϴ�.\n");
//		printf("ã�� ������ -> %d\n", n->data);
//	}
//}
//
//
//int main()
//{
//	HeadNode* head = createHead();
//	DListNode* Node = createNode(10);
//	DListNode* Node1 = createNode(20);
//	DListNode* Node2 = createNode(30);
//	DListNode* Node3 = createNode(40);
//	DListNode* Node4 = createNode(50);
//
//	printf("����߰� �� ����\n");
//	getchar();
//	insertNode(head, NULL, Node1);
//	insertNode(head, Node1, Node2);
//	insertNode(head, Node2, Node3); // Node1�ڿ� Node�� ������
//	insertNode(head, Node3, Node4);
//
//	printNode(head);
//
//	int i;
//	char n = ' ';
//	for (i = 0; i < 5; i++)
//	{
//		DListNode* data = 0;
//		printf("-----------------\n");
//		printf("���ã�� ex) 15 , 20 , 23\n");
//		scanf("%d", &data);
//		findNode(head, data);
//	}
//
//
//	char q;
//	printf("-----------------\n");
//	printf("�����ü�� �����Ϸ��� Q�� �����ּ���.\n");
//	getchar();
//	scanf("%c", &q);
//	if (q == 'Q')allDelNode(head);
//
//	getchar();
//
//	printf("-----------------\n");
//	printf("�����Ͱ� ���翩��\n");
//	getchar();
//
//	printNode(head);
//
//
//	return 0;
//}