//#include <stdio.h>
//
//typedef struct node {
//	int data;
//	struct node* link;
//}Node;
//
////�����Լ� -> �Ǿ����� ���ο� ������ ����
//void addNode(Node* target, int data)
//{
//	Node* newNode = (Node*)malloc(sizeof(Node)); // �� ������
//	newNode->data = data; //������ ���� 
//	newNode->link = target->link; // �� ����� ���� ��忡 ���� �������
//	target->link = newNode; // ���س���� ���� ��忡 �� ��带 ����
//}
//int main()
//{
//	int i = 1;
//
//	Node* head = (Node*)malloc(sizeof(Node)); // ��� �����Ҵ�
//	head->link = NULL; // ��帵ũ -> NULL��
//
//	addNode(head, 10); // ��带 ���ؼ� 1��° ��尪 ����
//	addNode(head, 20); // 2��° ��尪 ����
//	addNode(head, 30); // 3��° ��尪 ����
//
//	Node* curr = head->link; // ��� �������� curr�� ����
//	while (curr != NULL) // curr ���� ���� �ƴҰ�� �ݺ�
//	{
//		printf("%d��° ��嵥���� : %d \n", i, curr->data);
//		curr = curr->link; // ���� ��尪�� ��ũ�� ����
//		i++; 
//	}
//
//	curr = head->link; // curr���� ��帵ũ�� ����
//	while (curr != NULL) // curr���� ���� �ƴҰ�� �ݺ�
//	{
//		Node* link = curr->link; // ���� ����� ��������� �ּҸ� ����
//		free(curr); // ���� ��� �޸� ����
//		curr = link; // �����Ϳ� ���� ����� �ּ�����
//	}
//	return 0;
//}
