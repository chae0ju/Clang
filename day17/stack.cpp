#include<stdio.h>
#include<stdlib.h>
//�迭 ������� ���� ����

typedef struct Stack {
	int top;
	int data[100];
}Stack;

void initStack(Stack*stack) {
	stack->top = -1;
}

int isFull(Stack* stack){
	return stack->top == 99;//1,0
}

int isEmpty(Stack* stack) {
	return stack->top == -1;
}

void pop(Stack* stack) {
	//0.�� �ٴ��̿��� ��� �ȵȴٰ� �ؾ� ��
	//1.�װ� �ƴϸ� top�� �ϳ� �Ʒ���
	if (isEmpty(stack)) {
		printf("�ȵ�");
		return;
	}
	stack->top--;
	return;
}

void push(Stack*stack) {
	//stack overflow
	//1. if top == 100
	//2.return 
	if (isFull(stack)) {
		printf("����");
		return;
	}
	
	//1.������ �Է� �ޱ�
	//2.top ++ �ϱ�
	//3. stack�� top��°�� ���� �Է¹��� �� �ֱ�
	int num;
		printf("���� �Է�:");
		scanf("%d", &num);
		stack->top++;//0
		stack->data[stack->top] = num;//stack->top��° ������ �Է�
	}


void printStack(Stack* stack) {
	if (isEmpty(stack)) {
		printf("����\n");
		return;
	}
	for (int i = stack->top; i >=0 ; i--) {
		if (i == stack->top) {
			printf("%d", stack->data[i]);
		}
		else {
			printf(" <-%d", stack->data[i]);
		}
	}
	printf("\n");
}

int main() {
	Stack st;
	initStack(&st);
	push(&st);
	push(&st);
	push(&st);
	pop(&st);
	printStack(&st);
	return 0;
}

