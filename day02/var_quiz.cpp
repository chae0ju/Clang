#include<stdio.h>
int main() {
	//1)�¾ �⵵�� �Է¹�����, ���� ������ ����ϴ� ���α׷�
	//2)�� ���� ���ڸ� �Է� �ް� ��� ���ϱ�!
	//3)���� �µ��� �Է¹޾� ȭ�� �µ��� ��ȯ�� ����ϴ� ���α׷� �����
	//F = Cx5.9+32�Դϴ�.
	//4)�� ���� ���̸� �Է¹޾� ���簢���� ���� ���ϱ� ���α׷�
	//5)�������� ���̸� �Է¹޾� ���� ���̿� �ѷ� ���ϱ� ���α׷�

	/*int year;
	printf("�¾ ����:"); 
	scanf_s("%d", &year);
	printf("���� �����̴� %d�Դϴ�.", 2023 - year);
	*/

	int a, b, c;
	printf("ù ��° ��:");
	scanf_s("%d", &a);

	printf("�� ��° ��:");
	scanf_s("%d", &b);

	printf("�� ��° ��:");
	scanf_s("%d", &c);

	printf("�� ���� ������ ����� %.2lf�Դϴ�.",(double) (a + b + c) / 3);
	

	//double cel; 
	//printf("������ �Է����ּ���:");
	//scanf_s("%lf", &cel);
	//printf("ȭ�� �µ��� %lf�Դϴ�", cel * 5.9 + 32);

	return 0;
}