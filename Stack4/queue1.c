//#include <stdio.h>
//#include <stdbool.h>
//
//#define SIZE 6
//
//int isEmpty();
//int isFull();
//void enQueue(int);			// q�� ����
//int deQueue();				// q���� ����
//
//int rear = 0;			// �Ա�
//int front = 0;			// �ⱸ
//int queue[SIZE];
//
//int main()
//{
//	enQueue(10);
//	enQueue(20);
//	enQueue(30);
//	enQueue(40);
//	enQueue(50);
//	printf("%d\n", deQueue()); // 10�� ���� ���ֱ⶧���� ���� ����
//	printf("%d\n", deQueue()); // ���� ������� ����
//	printf("%d\n", deQueue());
//	printf("%d\n", deQueue());
//	printf("%d\n", deQueue());
//	printf("%d\n", deQueue()); // �����Ͱ� ��������Ƿ� underflow�߻�
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
//	if (front == (rear + 1) % SIZE) return true; // 6�� ���� ��� 1�� ���� 6 % 6 = 0
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