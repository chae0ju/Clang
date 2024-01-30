#include<stdio.h>
int main() {
	int arr[] = { 5,2,6,7,8,3,1,9 };
	int size = sizeof(arr) / sizeof(int);
	 //한 요소씩 이동하면서
	for (int i = 1; i < size-1; i++) {
		int key = arr[i];//현재 정렬한 원소


		int j;

		//key보다 큰 원소들을 한 칸씩 뒤로 이동
		for (j = i - 1; j >= 0 && arr[j] > key; j--) {
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = key;//적절한 위치에 key 삽입
	}

	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}

}