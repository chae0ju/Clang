#include<stdio.h>
int main() {
	int arr[] = { 5,1,25,12,3,61,24,6,123 };
	int size = sizeof(arr) / sizeof(int);

	//한 요소씩 이동하면서
	for (int i = 0; i < size - 1; i++) {

		//현재 요소를 최솟값으로 설정 ㅇㅈ?
		int min = i;

		//현재 위치 다음부터 배열 끝까지 최솟값 찾기
		for (int j = i + 1; j < size; j++) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		//스와핑
		int temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}