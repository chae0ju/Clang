//allocation
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//int main() {
//
//	int* arr;
//	arr = (int*)malloc(5 * sizeof(int));//(��ŭ * ������)
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

//�л��� �Է�,���� �Է�,��� ���ϱ�
//int main() {
//	int num;
//	printf("�л��� �Է�:");
//	scanf("%d", &num);
//	int* engScores;
//	engScores = (int*)malloc(num * sizeof(int));
//	int sum = 0;
//	for (int i = 0; i < num; i++) {
//		int score;
//		printf("�л� ���� �Է�:");
//		scanf("%d", &score);
//		sum += score;
//	}
//	printf("�л� ������ ���:%.2lf", (double)(sum / 3));//3>num
//	free(engScores);
//	return 0;
//}

int main() {

	int studentNum;
	printf("�л��� �Է�:");
	scanf("%d", &studentNum);

	int* engScores;
	engScores = (int*)malloc(studentNum * sizeof(int));

	for (int i = 0; i < studentNum; i++) {
		int score;
		printf("%d��° ���� ���� �Է�:",i);
		scanf("%d", &score);
		engScores[i] = score;
	}
	int sum = 0;
	for (int i = 0; i < studentNum; i++) {
		sum += engScores[i];
	}
	printf("�� ���:%.2lf", (double)(sum / studentNum));
	free(engScores);
	return 0;
}