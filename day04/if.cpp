//if cpp
#include<stdio.h>
int main() {
	//control statement
	//[�ڵ���� ������ ����]
	//1)conditional statement(���ǹ�)
	//[� �ڵ带 �������� ����]
	//-1) if/else if/else
	//-2) switch

	/*int a = 10;
	if (a > 0) {
		printf("0���� Ů�ϴ�!");
	}
	printf("���α׷��� �� ����");*/
	
	/*int a = -10;
	if (20 < a && a < 30) {
		printf("�����մϴ�");
	}
	printf("����");*/

	//if~else
	/*int a;
	scanf_s("%d", &a);
	if (a > 0) {
		printf("����Դϴ�.");
	}
	else {
		printf("0 �Ǵ� �����Դϴ�.");
	}*/

	//1.���ĺ� �Է���, ��ҹ��� �Ǻ���
	/*char alpha;
	printf("���ĺ� �Է�:");
	scanf_s("%c", &alpha);
	if (65 <= (int)alpha && (int)alpha < 90) {
		printf("�빮���Դϴ�.");
	}
	else {
		printf("�ҹ��� �Դϴ�.");
	 }*/

	//2.���� �Է���, Ȧ¦ �Ǻ���
	int num;
	printf("���� �Է�:");
	scanf_s("%d", &num);

	if (num % 2 == 0) {
		printf("¦���Դϴ�");
	}
	else {
		printf("Ȧ���Դϴ�.");
	}
	return 0;
}