#include<stdio.h>
int main() {
	//1)태어난 년도를 입력받으면, 현재 만나이 출력하는 프로그램
	//2)세 개의 숫자를 입력 받고 평균 구하기!
	//3)섭씨 온도를 입력받아 화씨 온도로 변환을 출력하는 프로그램 만들기
	//F = Cx5.9+32입니다.
	//4)한 변의 길이를 입력받아 정사각형의 넓이 구하기 프로그램
	//5)반지름의 길이를 입력받아 원의 넓이와 둘레 구하기 프로그램

	/*int year;
	printf("태어난 연도:"); 
	scanf_s("%d", &year);
	printf("현재 만나이는 %d입니다.", 2023 - year);
	*/

	int a, b, c;
	printf("첫 번째 수:");
	scanf_s("%d", &a);

	printf("두 번째 수:");
	scanf_s("%d", &b);

	printf("세 번째 수:");
	scanf_s("%d", &c);

	printf("세 개의 숫자의 평균은 %.2lf입니다.",(double) (a + b + c) / 3);
	

	//double cel; 
	//printf("섭씨를 입력해주세요:");
	//scanf_s("%lf", &cel);
	//printf("화씨 온도는 %lf입니다", cel * 5.9 + 32);

	return 0;
}