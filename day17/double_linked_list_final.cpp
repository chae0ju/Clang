#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//����ü Ŀ��(�̸�,����)
//����ü ���� ��ũ�� ���
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
//	printf("���� �Է�:");
//	scanf("%d", &price);
//
//	char newName;
//	printf("�̸� �Է�:");
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
	printf("Ŀ�� �� �Է�:");
	scanf("%d", &price);

	char newName[50];
	printf("Ŀ�� �̸� �Է�:");
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
	printf("Ŀ��:%s ����:%d �����մϴ�\n", searcher->next->data.name, searcher->next->data.price);
	searcher->next = NULL;
	free(target);
	return 0;
}


void printNodes(Node** head) {
	Node* searcher = *head;
	while (searcher->next != NULL) {
		printf("[Ŀ���̸�:%s Ŀ�ǰ���:%d]\n", searcher->data.name, searcher->data.price);
		searcher = searcher->next;
	}
	printf("[Ŀ���̸�:%s Ŀ�ǰ���:%d]\n", searcher->data.name, searcher->data.price);
}

int main() {
	Node* head = NULL;
	while (1) {
		int system;
		printf("1.Ŀ�� �߰�\n2.Ŀ�Ǹ޴� Ȯ��\n3.������ ������ ����\n4.����\n");
		printf("��ȣ �Է�:");
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
			("����");
			break;
		}
	}
	return 0;
}