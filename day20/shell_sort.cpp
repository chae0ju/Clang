//shell_sort
#include<stdio.h>
//int main() {
//	int arr[] = { 2,4,3,6,9,12,34,56 };
//	int size = sizeof(arr) / sizeof(int);
//
//	for (int i = 0; i < size-1; i++) {
//
//		for (int j = i - 1; j >= 0; j--) {
//			if ((j % 2) == 0) {
//				if (arr[j + 1] < arr[j]) {
//					int temp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = temp;
//				}
//			}
//			else {
//				if (arr[j + 1] < arr[j]) {
//					int temp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = temp;
//				}
//			}
//		}
//	}
//
//	for (int i = 0; i < size; i++) {
//		printf("%d ", arr[i]);
//	}
//
//}

int main() {
	int arr[] = {12,34,54,2,3,23,376};
	int size = sizeof(arr) / sizeof(int);

	//Gap�� �迭 ũ���� ���ݿ��� �����Ͽ� 1�� �� ������ ����
	for (int gap = size / 2; gap > 0; gap /= 2) {

		//�� ���ݿ� ����,���ݸ�ŭ ������ ��ҵ��� �� �� ����
		for (int i = gap; i < size; i++) {
			//���� �����ϴ� ��Ҹ� ��� ����
			int temp = arr[i];
			int j = i;

			//������ ���ݸ�ŭ ������ ��ҵ��� �˻��ϸ� ����
			while (j >= gap && arr[j - gap] > temp) {
				arr[j] = arr[j - gap];
				j -= gap;
			}
			arr[j] = temp;
		}
	}

	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
		printf("\n");
	}

	return 0;
}