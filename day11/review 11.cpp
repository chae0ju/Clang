//1. n��  squre�Լ��� �־��� ��, ���簢���� ���̷� ��ȯ���ִ� �Լ� �ۼ�
//n�� n*n���� ��ȯ �Ǿ�� ��
#include<stdio.h>
//void squre(int *num) {
//	*num = *num * *num;
//}
//
//int main() {
//	int n = 5;
//	squre(&n);
//	printf("���簢���� ����:%d", n);
//}

//2.���� �迭�� �־��� �� ���� �迭�� ���� �����ִ� �Լ� �ۼ�
int sumArray(int* arr, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum;
}
int main() {
	int arr[5] = { 5,1,3,12,6 };
	int sum = sumArray(arr, sizeof(arr) / sizeof(arr[0]));
	printf("%d", sum);
	return 0;
}