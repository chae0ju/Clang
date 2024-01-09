#include<stdio.h>
int main() {
	//1.대문자를 입력 > 소문자, 소문자 > 대문자
	/*char alphabet;
	printf("알파벳 입력:");
	scanf_s("%c", &alphabet);
	getchar();
	if (65 <= (int)alphabet && (int)alphabet <= 90) {
		printf("%c", (char)(alphabet + 32));
	}
	else {
		printf("%c", (char)(alphabet - 32));
	}*/

	//2.하나의 정수를 입력 > 양의 홀수,양의 짝수,0,음의 홀수, 음의짝수인지 판별하는 프로그램
	int num;
	printf("정수입력:");
	scanf_s("%d", &num);
	if (num > 0) {
		if (num % 2 == 0) {
			printf("양의 짝수");
		}
		else {
			printf("양의 홀수");
		}
	}
	else {
		if (num % 2 == 0) {
			if (num == 0) {
				printf("0입니다.");
			}
			else {
				printf("음의 짝수");
			}
		}
		else {
			printf("음의 홀수");
		}
	}
	return 0;
}