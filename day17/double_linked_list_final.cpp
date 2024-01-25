#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//구조체 커피(이름,가격)
//구조체 더블 링크드 노드
//createNode
//appendNode
//printNodes
//typedef struct Coffee {
//	char name[50];
//	int price;
//}Coffee;
//typedef struct Node {
//	struct Node* prev;
//	Node* data;
//	struct Node* next;
//};
//Node* createNode() {
//	Node* newNode;
//	newNode = (Node*)malloc(sizeof(Node));
//	int price;
//	printf("가격 입력:");
//	scanf("%d", &price);
//
//	char newName;
//	printf("이름 입력:");
//	scanf("%s", newName);
//	
//	strcpy(newNode->data.name, newName);
//	newNode->data.price = price;
//	newNode->next = NULL;
//}
//void appendNode(Node** head) {
//	*head = createNode();
//	while (*head == NULL) {
//		*head = *newNode;
//		return newNode;
//	}
//	Node* searcher;
//	*head = Node*searcher;
//	if (searcher->next != NULL) {
//		searcher = searcher->next;
//	}
//	searcher->next = searcher;
//	searcher = 
//
//}
//
//void printNodes(Node** head) {
//	*head = Node * searcher;
//
//}
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

void appendNode(Node** head) {

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
Node* deleteLastNode(Node**head) {
	Node* searcher = *head;
	if (searcher->next->next != NULL) {
		searcher = searcher->next;
	} 
	Node* target = searcher->next;
	printf("커피:%s 가격:%d 삭제합니다\n", searcher->next->data.name, searcher->next->data.price);
	searcher->next = NULL;
	free(target);
	return 0;
}


void printNodes(Node** head) {
	Node* searcher = *head;
	while (searcher->next != NULL) {
		printf("[커피이름:%s 커피가격:%d]\n", searcher->data.name, searcher->data.price);
		searcher = searcher->next;
	}
	printf("[커피이름:%s 커피가격:%d]\n", searcher->data.name, searcher->data.price);
}

int main() {
	Node* head = NULL;
	while (1) {
		int system;
		printf("1.커피 추가\n2.커피메뉴 확인\n3.마지막 데이터 삭제\n4.종료\n");
		printf("번호 입력:");
		scanf("%d", &system);

		switch (system) {
		case 1:
			appendNode(&head);
			break;
		case 2:
			printNodes(&head);
			break;
		case 3:
			deleteLastNode(&head);
			break;
		case 4:
			("종료");
			break;
		}
	}
	return 0;
}