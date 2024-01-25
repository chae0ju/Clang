#include<stdio.h>
#include<stdlib.h>
//배열 기반으로 스택 구현

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
	//0.맨 바닥이였을 경우 안된다고 해야 함
	//1.그게 아니면 top을 하나 아래로
	if (isEmpty(stack)) {
		printf("안됨");
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
		printf("꽉참");
		return;
	}
	
	//1.정수를 입력 받기
	//2.top ++ 하기
	//3. stack의 top번째에 정수 입력받은 거 넣기
	int num;
		printf("정수 입력:");
		scanf("%d", &num);
		stack->top++;//0
		stack->data[stack->top] = num;//stack->top번째 데이터 입력
	}


void printStack(Stack* stack) {
	if (isEmpty(stack)) {
		printf("없음\n");
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

