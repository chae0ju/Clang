//if cpp
#include<stdio.h>
int main() {
	//control statement
	//[코드실행 순서를 조작]
	//1)conditional statement(조건문)
	//[어떤 코드를 실행할지 결정]
	//-1) if/else if/else
	//-2) switch

	/*int a = 10;
	if (a > 0) {
		printf("0보다 큽니다!");
	}
	printf("프로그래밍 끝 ㅅㄱ");*/
	
	/*int a = -10;
	if (20 < a && a < 30) {
		printf("축하합니다");
	}
	printf("ㅅㄱ");*/

	//if~else
	/*int a;
	scanf_s("%d", &a);
	if (a > 0) {
		printf("양수입니다.");
	}
	else {
		printf("0 또는 음수입니다.");
	}*/

	//1.알파벳 입력후, 대소문자 판별기
	/*char alpha;
	printf("알파벳 입력:");
	scanf_s("%c", &alpha);
	if (65 <= (int)alpha && (int)alpha < 90) {
		printf("대문자입니다.");
	}
	else {
		printf("소문자 입니다.");
	 }*/

	//2.정수 입력후, 홀짝 판별기
	int num;
	printf("정수 입력:");
	scanf_s("%d", &num);

	if (num % 2 == 0) {
		printf("짝수입니다");
	}
	else {
		printf("홀수입니다.");
	}
	return 0;
}