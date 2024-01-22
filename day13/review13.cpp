//1.정수형 배열을 n개만큼 동적할당 하고, n에서 가장 큰 숫자 출력
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//int main() {
//	int n;
//	printf("n을 입력:");
//	scanf("%d", &n);
//
//	int* p;
//	p=(int*)malloc(n * sizeof(int));
//	
//	for (int i = 0; i < n; i++) {
//		printf("숫자 입력:");
//		scanf("%d", &p[i]);
//	}
//
//	int max = p[0];
//	for (int i = 0; i < n; i++) {
//		if (max < p[i]) {
//			max = p[i];
//		}
//	}
//	printf("가장 큰 숫자:%d", max);
//	return 0;
//}

//2.Coffee형[name,price]배열을 n개만큼 동적할당하고 모든 커피의 가격과 이름 출력
typedef struct{
	int price;
	char name[50];
}Coffee;

int main() {
	int n;
	printf("커피갯수 n을 입력:");
	scanf("%d", &n);

	Coffee* ptr;
	ptr = (Coffee*)malloc(sizeof(Coffee) * n);

	for (int i = 0; i < n; i++) {
		int newPrice;
		printf("가격 입력:");
		scanf("%d", &newPrice);
		ptr[i].price = newPrice;

		char newName[50];
		printf("메뉴이름 입력:");
		scanf("%s", newName);
		strcpy(ptr[i].name, newName);
	}
	for (int i = 0; i < n; i++) {
		printf("%d번째 커피 이름:%s 가격:%d\n", i, ptr[i].name, ptr[i].price);
	}
	return 0;
}
