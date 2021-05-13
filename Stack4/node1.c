//#include <stdio.h>
//#include "listinput.h"
//
//typedef struct node{
//	int data; // data 멤버
//	struct node* link; // 다음 노드의 주소를 저장할 멤버
//}Node;
//
//
//int main()
//{
//	int i = 1;
//	Node* head = (Node*)malloc(sizeof(Node)); // 헤드 생성
//	Node* node1 = (Node*)malloc(sizeof(Node)); // 1번째노드 생성
//	Node* node2 = (Node*)malloc(sizeof(Node)); // 2번째노드 생성
//	Node* node3 = (Node*)malloc(sizeof(Node)); // 3번째노드 생성
//	Node* node4 = (Node*)malloc(sizeof(Node)); // 4번째노드 생성
//	Node* node5 = (Node*)malloc(sizeof(Node)); // 5번째노드 생성
//
//	if (node1 == NULL) return;
//	head->link = node1;   // 헤드노드 -> 노드1 가리킴
//	node1->data = 10;	  
//	node1->link = node2; // 노드1 -> 노드2
//	
//	if (node2 == NULL) return;
//	node2->data = 20; 
//	node2->link = node3; // 노드2 -> 노드3
//
//	if (node3 == NULL) return;
//	node3->data = 30;
//	node3->link = node4; // 노드3 -> 노드4
//
//	if (node4 == NULL) return;
//	node4->data = 40;
//	node4->link = node5; // 노드4 -> 노드5
//
//	if (node5 == NULL) return;
//	node5->data = 50;
//	node5->link = NULL; // 노드5 -> NULL값
//
//	Node* curr = head->link;
//	while (curr != NULL)
//	{
//		printf("%d번째 노드데이터 : %d \n", i, curr->data);
//		curr = curr->link;
//		i++;
//	}
//
//	free(node1);
//	free(node2);
//	free(head);
//
//	return 0;
//}