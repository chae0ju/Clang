#include<stdio.h>
int main() {
	////1)1000이하의 정수를 입력하면 분 초로 출력하는 프로그램
	//int num;
	//printf("정수 입력");
	//scanf_s("%d", &num);
	////83/60->1
	//int min = num / 60;
	//int sec = num % 60;
	//printf("%d분 %d초", min, sec);

	//2)10000~99999 정수를 입력하면 백의 자리를 출력하는 프로그램
	int num;
	printf("10000~99999 정수 입력:");
	scanf_s("%d", &num);
	//12345/100
	int over_hunderd = num / 100;
	//123
	int hundred = over_hunderd % 10;
	printf("백의 자리는 %d", hundred);
	return 0;
}