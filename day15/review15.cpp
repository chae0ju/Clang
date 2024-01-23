#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef Node{
	

}Node;

Node* createNode(int n) {
	printf("숫자 입력:");
	scanf("%d", &n);
	Node head;
	while (head->next != NULL) {
		printf("%d", head->next);
	}
	printf("%d", head->next->next);
}

void printNodes(Node* head) {
	Node head;
	head = createNode(10);
	head->next = createNode(20);
	head->next->next = createNode(30);
}

int main() {


	return 0;
}