#include<stdio.h>
int main() {

	/*double length;
	printf("���簢���� �� ���� ���̸� �Է��ϼ���:");
	scanf_s("%lf", &length);
	printf("���簢���� �ѷ��� %lf�Դϴ�.", 4 * length);
	printf("���簢���� ���̴� %lf�Դϴ�.", length * length);

	int side;
	printf("�Ѻ��� ����:");
	scanf_s("%d",&side);
	printf("���簢���� �ѷ��� %lf�Դϴ�.", 4 * length);
	printf("���簢���� ���̴� %lf�Դϴ�.", length * length);

	*/

	double radius;
	double pi = 3.14;
	printf("�������� ����:");
	scanf_s("%lf", &radius);
	printf("���� �ѷ��� %.2lf�Դϴ�\n", 2 * radius * pi);
	printf("���� ���̴� %.2lf�Դϴ�", pi * radius * radius);

	return 0;
}

