//#include <stdio.h>
//
//// 이중연결 리스트
//
//typedef struct dlistnode {
//	int data;
//	struct dlistnode* next; // 뒤에 있는 노드
//	struct dlistnode* prev; // 앞에 있는 노드
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
//		printf("메모리 할당 실패");
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
//	// 아무값도 없을 경우
//	if (phead->head == NULL)
//	{
//		phead->head = newNode;
//		newNode->prev = phead;
//	}
//	// 뒤에 아무값도 없을 경우
//	else if (preNode->next == NULL)
//	{
//		preNode->next = newNode;
//		newNode->prev = preNode;
//	}
//	// 사이에 넣을 경우
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
//		printf("노드가 삭제되었습니다\n");
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
//			printf("%d번째 데이터 : %d\n", i, curr->data);
//			curr = curr->next;
//			i++;
//		}
//	}
//	else
//	{
//		printf("데이터가 존재하지 않습니다.\n");
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
//		printf("찾는값이 없습니다.\n");
//	}
//	else
//	{
//		printf("데이터가 존재합니다.\n");
//		printf("찾은 데이터 -> %d\n", n->data);
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
//	printf("노드추가 및 나열\n");
//	getchar();
//	insertNode(head, NULL, Node1);
//	insertNode(head, Node1, Node2);
//	insertNode(head, Node2, Node3); // Node1뒤에 Node를 만들어라
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
//		printf("노드찾기 ex) 15 , 20 , 23\n");
//		scanf("%d", &data);
//		findNode(head, data);
//	}
//
//
//	char q;
//	printf("-----------------\n");
//	printf("노드전체를 삭제하려면 Q를 눌러주세요.\n");
//	getchar();
//	scanf("%c", &q);
//	if (q == 'Q')allDelNode(head);
//
//	getchar();
//
//	printf("-----------------\n");
//	printf("데이터가 존재여부\n");
//	getchar();
//
//	printNode(head);
//
//
//	return 0;
//}