//#include <stdio.h>
//#include <stdbool.h>
//
//#define SIZE 6
//
//int isEmpty();
//int isFull();
//void enQueue(int);			// q에 삽입
//int deQueue();				// q에서 제거
//
//int rear = 0;			// 입구
//int front = 0;			// 출구
//int queue[SIZE];
//
//int main()
//{
//	enQueue(10);
//	enQueue(20);
//	enQueue(30);
//	enQueue(40);
//	enQueue(50);
//	printf("%d\n", deQueue()); // 10이 먼저 들어가있기때문에 먼저 삭제
//	printf("%d\n", deQueue()); // 들어가는 순서대로 삭제
//	printf("%d\n", deQueue());
//	printf("%d\n", deQueue());
//	printf("%d\n", deQueue());
//	printf("%d\n", deQueue()); // 데이터가 비어있으므로 underflow발생
//
//
//	return 0;
//}
//
//int isEmpty()
//{
//	if (rear == front) return true;
//	else return false;
//}
//
//int isFull()
//{
//	if (front == (rear + 1) % SIZE) return true; // 6이 나올 경우 1로 설정 6 % 6 = 0
//	else return false;
//}
//
//void enQueue(int data)
//{
//	if (isFull()) printf("Queue is overFLow!!");
//	else
//	{
//		rear = rear % SIZE;
//		queue[rear] = data;
//		rear++;
//	}
//}
//
//int deQueue()
//{
//	if (isEmpty())
//	{
//		printf("Queue underflow!!\n");
//		exit(1);
//		return;
//	}
//	else
//	{
//		return queue[front++ % SIZE];
//	}
//}