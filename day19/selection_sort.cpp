#include<stdio.h>
int main() {
	int arr[] = { 5,1,25,12,3,61,24,6,123 };
	int size = sizeof(arr) / sizeof(int);

	//�� ��Ҿ� �̵��ϸ鼭
	for (int i = 0; i < size - 1; i++) {

		//���� ��Ҹ� �ּڰ����� ���� ����?
		int min = i;

		//���� ��ġ �������� �迭 ������ �ּڰ� ã��
		for (int j = i + 1; j < size; j++) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		//������
		int temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}