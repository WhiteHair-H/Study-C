//#include <stdio.h>
//#include <stdbool.h>
//
//typedef struct qnode
//{
//	int data;
//	struct qnode* link;
//}QNode;
//
//typedef struct
//{
//	QNode* front, * rear;
//}LQueueType;
//
//LQueueType* createLinkedQueue()
//{
//	LQueueType* LQ = (LQueueType*)malloc(sizeof(LQueueType));
//
//	LQ->front = NULL;
//	LQ->rear = NULL;
//	return LQ;
//}
//
//int itEmpty(LQueueType* LQ)
//{
//	if (LQ->front == NULL)
//	{
//		printf(" Linked Queue is empty! ");
//		return 1;
//	}
//	else return 0;
//}
//
//void enQueue(LQueueType* LQ, int data)
//{
//	QNode* newNode = (QNode*)malloc(sizeof(QNode));
//	newNode->data = data;
//	newNode->link = NULL;
//	if (LQ->front == NULL)
//	{
//		LQ->front = newNode;
//		LQ->rear = newNode;
//	}
//	else
//	{
//		LQ->rear->link = newNode;
//		LQ->rear = newNode;
//	}
//}
//
//int deQueue(LQueueType* LQ)
//{
//	QNode* old = LQ->front;
//	int temp;
//	if (itEmpty(LQ))return 0;
//	else
//	{
//		temp = old->data;
//		LQ->front = LQ->front->link;
//		if (LQ->front == NULL)
//		{
//			LQ->rear = NULL;
//		}
//		free(old);
//		return temp;
//	}
//}
//
//int peek(LQueueType* LQ)
//{
//	int temp;
//	if (itEmpty(LQ)) return 0;
//	else {
//		temp = LQ->front->data;
//		return temp;
//	}
//}
//
//void printLQ(LQueueType* LQ)
//{
//	QNode* temp = LQ->front;
//	printf("-->");
//	while (temp)
//	{
//		printf("%3d", temp->data);
//		temp = temp->link;
//	}
//	
//}
//
//
//
//int main()
//{
//	LQueueType* LQ = createLinkedQueue();
//	int data;
//
//	printf("큐 연결구조");
//	getchar();
//	printf("삽입");
//	enQueue(LQ, 10);
//	enQueue(LQ, 21);
//	enQueue(LQ, 35);
//	enQueue(LQ, 27);
//	printLQ(LQ);
//	printf("\n");
//
//	getchar();
//	printf("검색");
//	peek(LQ);
//	printLQ(LQ);
//
//	printf("\n삭제");
//	deQueue(LQ);
//	printLQ(LQ);
//
//
//	return 0;
//}