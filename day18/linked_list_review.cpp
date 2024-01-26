#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Coffee {
	char name[50];
	int price;
}Node;

typedef struct Node {
	Coffee data;
	struct Node* next;
}Node;

Node* createNode(Node*head){

	Node* newNode;
	newNode = (Node*)malloc(sizeof(Node));
	int price;
	printf("���� �Է�:");
	scanf("%d", &price);

	char name[50];
	printf("Ŀ���̸� �Է�:");
	scanf("%s", name);

	price = newNode->data.price;
	strcpy(newNode->data.name, name);
	
	return newNode;
}
void appendNode(Node** head) {

	Node*newNode = createNode();
	Node*searcher = *head;

	if (*head == NULL) {
		*head = newNode;
		return;
	}
	if (searcher->next->next!= NULL) {
		searcher = searcher->next;
	}
	searcher->next = newNode;
}

//void deleteLastNode(Node**head) {
//
//	Node* searcher = *head;
//	if (searcher->next->next != NULL) {
//		searcher->next = searcher;
//	}
//	printf("\n");
//}


void printNode(Node**head) {
	Node* searcher = *head;
	if (searcher->next != NULL) {
		printf("Ŀ��:%s ����:%d\n", searcher->data.name,searcher->data.price);
		searcher->next = searcher;
	}
	printf("Ŀ��:%s ����:%d\n", searcher->data.name, searcher->data.price);
}

int main() {
	Node* head = NULL;
	createNode(head);
	appendNode(&head);
	appendNode(&head);
	appendNode(&head);

	return 0;
}