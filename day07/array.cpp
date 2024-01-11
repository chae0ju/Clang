//array.cpp
#include<stdio.h>
int main() {

	////array[배열]
	////1. 배열 선언 및 초기화
	//int score[5] = { 100,30,40,50,20 };
	////2. 배열 선언 및 초기화
	//int weight[] = { 100,200,300,400,500,600 };
	////3.배열선언
	//int height[10];
	////4.배열의 인덱스의 시작 0!
	//height[0] = 188;

	//학생 5명 >반 평균
	//int score[5];
	//	for (int i = 0; i < 5; i++) {
	//		printf("수학점수;");
	//		scanf_s("%d", &score[i]);
	//	}
	//	int sum = 0;
	//	for (int i = 0; i < 5; i++) {
	//		printf("%d번째 학생 점수:%d\n", i, score[i]);
	//		sum += score[i];
	//	}

	//	printf("반 평균:%.2lf", (double)(sum / 5));

	/*double height[5];
	for (int i = 0; i < 5; i++) {
		printf("키:");
		scanf_s("%lf", &height[i]);
	}
	double sum = 0;
	for (int i = 0; i < 5; i++) {
		printf("%d번째 학생의 키:%lf\n", i, height[i]);
		sum += height[i];
	}
	printf("키 평균:%.2lf", (double)(sum / 5));*/

	//1번째 char배열 선언법
	char it[] = { 'm','e','g','a','s','t','u','d','y','!','\0'};
	char starbucks[20] = { 'l','a','t','t','e' };
	char megacoffee[20];
	megacoffee[0] = 'l';
	megacoffee[1] = 'a';
	megacoffee[2] = 't';
	megacoffee[3] = 't';
	megacoffee[4] = 'e';
	megacoffee[5] = '\0';//null
	//printf("%d",sizeof(it));//4byte
	//%c로 문자 배열 출력
	/*for (int i = 0;megacoffee[i] != '\0'; i++) {
		printf("%c", megacoffee[i]);
	}*/

	//%s로 문자 배열 출력
	printf("%s\n", it);
	return 0;
}