//#include <stdio.h>
//#include <stdbool.h>
//
//#define STACK_SZ	3
////#define TRUE	1
////#define FALSE	2
//
//int isEmpty();    // ������ ���°� �����ΰ��
//int isFull();     // ������ ���°� �������ִ� ���
//void push(int);   // ������ �Է�
//int pop();		  // ���ÿ��� ���(����)
//int peek();		  // ������ ����Ȯ��
//void printStac(); 
//
//int stack[STACK_SZ];
//int top = -1; // ���� ������ ��ġ Ȯ��, �׻� ������ �� ���� ����Ų��.
//
//int main()
//{
//	push(15);
//	push(25);
//	push(45);
//	pop();
//	printStac();
//	peek();
//
//
//
//	return 0;
//}
//
//int isEmpty()
//{
//	if (top <= -1) return true; // -1�ϰ�� ���ο� ���Ұ� ����
//	else return false;
//}
//
//int isFull()
//{
//	if (top >= STACK_SZ - 1) return true; // �������� Ʈ��
//	else return false; // �ƴϸ� ����
//}
//
//void push(int data)
//{
//	if (isFull()) // isFull = true
//	{
//		printf("STACK overflow!!\n");
//		return;
//	}
//	else
//	{
//		stack[++top] = data;// index -> 0������ ������� /(++top) = ++ -1 = 0
// 	}
//}
//
//int pop()
//{
//	if (isEmpty())
//	{
//		printf("STACK underflow!!\n");
//		return;
//	}
//	else
//	{
//		return stack[top--]; // ���� top���� 0�� --���ؼ� -1 ���ڸ�
//	}
//}
//
//int peek()
//{
//	if (isEmpty())
//	{
//		printf("STACK underflow!!\n");
//		exit(1); // return
//	}
//	else return stack[top];
//}
//
//void printStac()
//{
//	int i;
//	if (!isEmpty())
//	{
//		for (i = 0; i <= top; i++)
//		{
//			printf("%d    ", stack[i]);
//		}
//	}
//
//}