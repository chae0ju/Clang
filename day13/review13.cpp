//1.������ �迭�� n����ŭ �����Ҵ� �ϰ�, n���� ���� ū ���� ���
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//int main() {
//	int n;
//	printf("n�� �Է�:");
//	scanf("%d", &n);
//
//	int* p;
//	p=(int*)malloc(n * sizeof(int));
//	
//	for (int i = 0; i < n; i++) {
//		printf("���� �Է�:");
//		scanf("%d", &p[i]);
//	}
//
//	int max = p[0];
//	for (int i = 0; i < n; i++) {
//		if (max < p[i]) {
//			max = p[i];
//		}
//	}
//	printf("���� ū ����:%d", max);
//	return 0;
//}

//2.Coffee��[name,price]�迭�� n����ŭ �����Ҵ��ϰ� ��� Ŀ���� ���ݰ� �̸� ���
typedef struct{
	int price;
	char name[50];
}Coffee;

int main() {
	int n;
	printf("Ŀ�ǰ��� n�� �Է�:");
	scanf("%d", &n);

	Coffee* ptr;
	ptr = (Coffee*)malloc(sizeof(Coffee) * n);

	for (int i = 0; i < n; i++) {
		int newPrice;
		printf("���� �Է�:");
		scanf("%d", &newPrice);
		ptr[i].price = newPrice;

		char newName[50];
		printf("�޴��̸� �Է�:");
		scanf("%s", newName);
		strcpy(ptr[i].name, newName);
	}
	for (int i = 0; i < n; i++) {
		printf("%d��° Ŀ�� �̸�:%s ����:%d\n", i, ptr[i].name, ptr[i].price);
	}
	return 0;
}
