#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Coffee {
	char name[50];
	int price;
}Coffee;

typedef struct Node {
	struct Node* prev;
	Coffee data;
	struct Node* next;
};

Node* createNode() {
	Node* newNode;
	newNode = (Node*)malloc(sizeof(Node));

	int price;
	printf("커피 값 입력:");
	scanf("%d", &price);

	char newName[50];
	printf("커피 이름 입력:");
	scanf("%s", newName);

	strcpy(newNode->data.name, newName);
	newNode->data.price = price;
	newNode->next = NULL;
	return newNode;
}

void appendNode(Node**head) {
	
	Node* newNode = createNode();
	if (*head == NULL) {
		*head = newNode;
		return;
	}

	Node* searcher = *head;
	while (searcher->next != NULL) {
		searcher = searcher->next;
	}

	searcher->next = newNode;
	newNode->prev = searcher;

}

void printNode(Node** head) {
	Node* searcher = *head;
	while (searcher->next != NULL) {
		printf("[커피이름:%s 커피가격:%d]\n", searcher->data.name,searcher->data.price);
		searcher = searcher->next;
	}
	printf("[커피이름:%s 커피가격:%d]\n", searcher->data.name, searcher->data.price);
}

int main() {
	Node* head = NULL;
	while (1) {
		int system;
		printf("1.커피 추가\n2.커피메뉴 확인\n3.종료\n");
		printf("번호 입력:");
		scanf("%d", &system);

		switch (system) {
		case 1:
			appendNode(&head);
			break;
		case 2:
			printNode(&head);
			break;
		case 3:
			("종료");
			break;
		}
	}
	return 0;
}