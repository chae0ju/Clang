#include<stdio.h>
int main() {

	//RAM:���� ������ Ÿ��
	//Input:�Է�
	//Output:���
	//Operator:������

	//1) 100������ ���� ������ �Է¹ް�
	//10�ڸ��� 1�ڸ��� ����ϴ� ���α׷�
	/*int num;
	printf("���� �Է�:");
	scanf_s("%d", &num);
	printf("10�� �ڸ�:%d, 1�� �ڸ�: %d", num / 10, num % 10);
	return 0;*/

	//int a = 1;
	//a++;//2
	//a++;//3
	////printf("%d",a++)//3
	//printf("%d", ++a);//4

	//1)�� ������ �Է¹ް� ū �� ����ϱ�
	/*int a, b;
	printf("ù��° ������ �Է��ϼ���.:");
	scanf_s("%d", &a);
	printf("�ι�° ������ �Է��ϼ���.:");
	scanf_s("%d", &b);
	int bigger = a >= b ? 'a' : 'b';
	printf("�� ���� �� %d�� �� ū ���̴�.",bigger);*/

	//70���̻�
	int eng;
	printf("��������:");
	scanf_s("%d", &eng);
	printf("����� %c�Դϴ�.", eng > 70 ? 'A' : 'F');

	return 0;
}