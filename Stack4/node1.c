//#include <stdio.h>
//#include "listinput.h"
//
//typedef struct node{
//	int data; // data ���
//	struct node* link; // ���� ����� �ּҸ� ������ ���
//}Node;
//
//
//int main()
//{
//	int i = 1;
//	Node* head = (Node*)malloc(sizeof(Node)); // ��� ����
//	Node* node1 = (Node*)malloc(sizeof(Node)); // 1��°��� ����
//	Node* node2 = (Node*)malloc(sizeof(Node)); // 2��°��� ����
//	Node* node3 = (Node*)malloc(sizeof(Node)); // 3��°��� ����
//	Node* node4 = (Node*)malloc(sizeof(Node)); // 4��°��� ����
//	Node* node5 = (Node*)malloc(sizeof(Node)); // 5��°��� ����
//
//	if (node1 == NULL) return;
//	head->link = node1;   // ����� -> ���1 ����Ŵ
//	node1->data = 10;	  
//	node1->link = node2; // ���1 -> ���2
//	
//	if (node2 == NULL) return;
//	node2->data = 20; 
//	node2->link = node3; // ���2 -> ���3
//
//	if (node3 == NULL) return;
//	node3->data = 30;
//	node3->link = node4; // ���3 -> ���4
//
//	if (node4 == NULL) return;
//	node4->data = 40;
//	node4->link = node5; // ���4 -> ���5
//
//	if (node5 == NULL) return;
//	node5->data = 50;
//	node5->link = NULL; // ���5 -> NULL��
//
//	Node* curr = head->link;
//	while (curr != NULL)
//	{
//		printf("%d��° ��嵥���� : %d \n", i, curr->data);
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