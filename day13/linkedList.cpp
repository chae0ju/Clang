//linkedList
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Node {
	int data;
	struct Node* next;
}Node;

Node* createNode(int n) {

	Node* newNode;
	newNode = (Node*)malloc(sizeof(Node) * 1);
	newNode->data = n;
	newNode->next = NULL;
	return newNode;

}
void printNodes(Node* head) {
	while (head->next != NULL) {

		printf("%d->", head->data);
		head = head->next;
	}
	printf("%d", head->data);
}
int main() {
	Node* head;
	head = createNode(10);
	head->next = createNode(20);
	head->next->next = createNode(30);
	printNodes(head);
	return 0;
}






//int main() {
//
//	Node first;
//	first.data = 1;
//
//	Node second;
//	second.data = 2;
//
//	Node third;
//	third.data = 3;
//
//	Node fourth;
//	fourth.data = 4;
//
//	first.next = &second;
//	second.next = &third;
//	third.next = &fourth;
//	fourth.next = NULL;
//
//
//	Node* head;
//	head = &first;

	//printf("%d->", head->data);//1
	//head = head->next;
	//printf("%d->", head->data);//2
	//head = head->next;
	//printf("%d->", head->data);//3
	//head = head->next;
	//printf("%d", head->data);//4

//while (head->next != NULL) {
//	printf("%d->", head->data);
//	head = head->next;
//	}
//
//    printf("%d", head->data);

//	printNodes(&first);
//
//
//
//	return 0;
//}