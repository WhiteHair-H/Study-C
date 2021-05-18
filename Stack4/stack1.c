//#include <stdio.h>
//#include <stdbool.h>
//
//#define STACK_SZ	3
////#define TRUE	1
////#define FALSE	2
//
//int isEmpty();    // 스택의 상태가 공백인경우
//int isFull();     // 스택의 상태가 가득차있는 경우
//void push(int);   // 스택의 입력
//int pop();		  // 스택에서 출력(삭제)
//int peek();		  // 맨위의 스택확인
//void printStac(); 
//
//int stack[STACK_SZ];
//int top = -1; // 현재 스택의 위치 확인, 항상 스택의 맨 위를 가리킨다.
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
//	if (top <= -1) return true; // -1일경우 내부에 원소가 없음
//	else return false;
//}
//
//int isFull()
//{
//	if (top >= STACK_SZ - 1) return true; // 가득차면 트루
//	else return false; // 아니면 폴스
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
//		stack[++top] = data;// index -> 0번부터 집어넣음 /(++top) = ++ -1 = 0
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
//		return stack[top--]; // 현재 top에는 0값 --통해서 -1 제자리
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