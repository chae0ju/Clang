//ifelse.cpp
#include<stdio.h>
int main() {
	/*int eng = 80;
	if (eng > 90) {
		printf("A");
	}
	else if (eng > 80) {
		printf("B");
	}
	else if (eng > 70) {
		printf("C");
	}
	else {
		printf("F �����Ͻʼ�");
	}*/

	//������ �Է��ؼ�
	//90���� ����
	//90 ����
	//90~180 �а�
	//180 ��
	int angle;
	printf("�� �Է�:");
	scanf_s("%d", &angle);
	if (0 < angle && angle < 90) {
		printf("����");
	}
	else if (angle == 90) {
		printf("����");
	}
	else if (90 < angle && angle < 180) {
		printf("�а�");
	}
	else if (angle = 180) {
		printf("��");
	}
	else {
		printf("���� �ð� ��");
	}


	return 0;
}