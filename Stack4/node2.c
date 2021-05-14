//#include <stdio.h>
//
//typedef struct node {
//	int data;
//	struct node* link;
//}Node;
//
////전위함수 -> 맨앞으로 새로운 데이터 생성
//void addNode(Node* target, int data)
//{
//	Node* newNode = (Node*)malloc(sizeof(Node)); // 새 노드생성
//	newNode->data = data; //데이터 저장 
//	newNode->link = target->link; // 새 노드의 다음 노드에 기준 노드지정
//	target->link = newNode; // 기준노드의 다음 노드에 새 노드를 지정
//}
//int main()
//{
//	int i = 1;
//
//	Node* head = (Node*)malloc(sizeof(Node)); // 헤드 동적할당
//	head->link = NULL; // 헤드링크 -> NULL값
//
//	addNode(head, 10); // 헤드를 통해서 1번째 노드값 생성
//	addNode(head, 20); // 2번째 노드값 생성
//	addNode(head, 30); // 3번째 노드값 생성
//
//	Node* curr = head->link; // 헤드 다음값을 curr로 지정
//	while (curr != NULL) // curr 값이 널이 아닐경우 반복
//	{
//		printf("%d번째 노드데이터 : %d \n", i, curr->data);
//		curr = curr->link; // 다음 노드값의 링크를 지정
//		i++; 
//	}
//
//	curr = head->link; // curr값에 헤드링크값 저장
//	while (curr != NULL) // curr값이 널이 아닐경우 반복
//	{
//		Node* link = curr->link; // 현재 노드의 다음노드의 주소를 저장
//		free(curr); // 현재 노드 메모리 해제
//		curr = link; // 포인터에 다음 노드의 주소저장
//	}
//	return 0;
//}
