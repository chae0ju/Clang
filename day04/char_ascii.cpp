//char_ascii.cpp
#include<stdio.h>

int main() {

	//char a,b;
	//scanf_s("%c ", &a);// m enter
	////1.getchar();//enter ���
	////2.scanf_s�� ���� �ֱ�
	////
	//scanf_s("%c", &b);// n 
	//printf("%c %c", a, b);

	/*char a = 'A';
	int b = 66;
	printf("%d %c", a,b);*/

	//1)���� �Է��ϸ� ���ĺ� ������
	/*int num;
	printf("���� �Է�:");
	scanf_s("%d", &num);
	printf("%c", num);*/

	//1. �������� ��� ���ڸ� �ް� ���ĺ��̸� 1 �ƴϸ� 0
	//EX) !>0 a>1 c>1
	/*char alpha;
	int isCapital, isSmall, toAscii;
	//printf("�Է�:");
	scanf_s("%c", &alpha);
	toAscii = (int)alpha;
	isCapital = (65 <= toAscii && toAscii <= 90);
	isSmall = (97 <= toAscii && toAscii <= 122);
	printf("%d", isCapital || isSmall ? 1 : 0);*/

	//2. �빮�� ���ĺ��� �Է��ϸ� �ҹ��ڷ� ����ϱ�
	//EX) A>a B>b
	char capital;
	printf("�빮��:");
	scanf_s("%c", &capital);
	printf("�ҹ���:%c", (char)(int)capital + 32);

	return 0;
}