//char_ascii.cpp
#include<stdio.h>

int main() {

	//char a,b;
	//scanf_s("%c ", &a);// m enter
	////1.getchar();//enter 흡수
	////2.scanf_s에 띄어쓰기 넣기
	////
	//scanf_s("%c", &b);// n 
	//printf("%c %c", a, b);

	/*char a = 'A';
	int b = 66;
	printf("%d %c", a,b);*/

	//1)숫자 입력하면 알파벳 나오기
	/*int num;
	printf("숫자 입력:");
	scanf_s("%d", &num);
	printf("%c", num);*/

	//1. 유저에게 어떠한 문자를 받고 알파벳이면 1 아니면 0
	//EX) !>0 a>1 c>1
	/*char alpha;
	int isCapital, isSmall, toAscii;
	//printf("입력:");
	scanf_s("%c", &alpha);
	toAscii = (int)alpha;
	isCapital = (65 <= toAscii && toAscii <= 90);
	isSmall = (97 <= toAscii && toAscii <= 122);
	printf("%d", isCapital || isSmall ? 1 : 0);*/

	//2. 대문자 알파벳을 입력하면 소문자로 출력하기
	//EX) A>a B>b
	char capital;
	printf("대문자:");
	scanf_s("%c", &capital);
	printf("소문자:%c", (char)(int)capital + 32);

	return 0;
}