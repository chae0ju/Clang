#include<stdio.h>
int main() {
	int arr[] = { 5,2,6,7,8,3,1,9 };
	int size = sizeof(arr) / sizeof(int);
	 //�� ��Ҿ� �̵��ϸ鼭
	for (int i = 1; i < size-1; i++) {
		int key = arr[i];//���� ������ ����


		int j;

		//key���� ū ���ҵ��� �� ĭ�� �ڷ� �̵�
		for (j = i - 1; j >= 0 && arr[j] > key; j--) {
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = key;//������ ��ġ�� key ����
	}

	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}

}