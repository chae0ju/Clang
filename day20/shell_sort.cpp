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

	//Gap을 배열 크기의 절반에서 시작하여 1이 될 때까지 감소
	for (int gap = size / 2; gap > 0; gap /= 2) {

		//간 간격에 대해,간격만큼 떨어진 요소들을 비교 및 정렬
		for (int i = gap; i < size; i++) {
			//현재 껌사하는 요소를 잠시 저장
			int temp = arr[i];
			int j = i;

			//이전의 간격만큼 떨어진 요소들을 검사하며 정렬
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