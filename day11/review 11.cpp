//1. n을  squre함수에 넣었을 때, 정사각형의 넚이로 변환해주는 함수 작성
//n이 n*n으로 변환 되어야 함
#include<stdio.h>
//void squre(int *num) {
//	*num = *num * *num;
//}
//
//int main() {
//	int n = 5;
//	squre(&n);
//	printf("정사각형의 넓이:%d", n);
//}

//2.정수 배열을 넣었을 때 정수 배열의 합을 돌려주는 함수 작성
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