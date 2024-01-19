//allocation
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//int main() {
//
//	int* arr;
//	arr = (int*)malloc(5 * sizeof(int));//(얼마큼 * 무엇을)
//
//	for (int i = 0; i < 5; i++) {
//		arr[i] = i + 10;
//	}
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", arr[i]);
//	}
//	free(arr);
//	return 0;
//}

//학생수 입력,점수 입력,평균 구하기
//int main() {
//	int num;
//	printf("학생수 입력:");
//	scanf("%d", &num);
//	int* engScores;
//	engScores = (int*)malloc(num * sizeof(int));
//	int sum = 0;
//	for (int i = 0; i < num; i++) {
//		int score;
//		printf("학생 점수 입력:");
//		scanf("%d", &score);
//		sum += score;
//	}
//	printf("학생 점수의 평균:%.2lf", (double)(sum / 3));//3>num
//	free(engScores);
//	return 0;
//}

int main() {

	int studentNum;
	printf("학생수 입력:");
	scanf("%d", &studentNum);

	int* engScores;
	engScores = (int*)malloc(studentNum * sizeof(int));

	for (int i = 0; i < studentNum; i++) {
		int score;
		printf("%d번째 영어 점수 입력:",i);
		scanf("%d", &score);
		engScores[i] = score;
	}
	int sum = 0;
	for (int i = 0; i < studentNum; i++) {
		sum += engScores[i];
	}
	printf("반 평균:%.2lf", (double)(sum / studentNum));
	free(engScores);
	return 0;
}