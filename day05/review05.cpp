#include<stdio.h>
int main() {
	//1.�빮�ڸ� �Է� > �ҹ���, �ҹ��� > �빮��
	/*char alphabet;
	printf("���ĺ� �Է�:");
	scanf_s("%c", &alphabet);
	getchar();
	if (65 <= (int)alphabet && (int)alphabet <= 90) {
		printf("%c", (char)(alphabet + 32));
	}
	else {
		printf("%c", (char)(alphabet - 32));
	}*/

	//2.�ϳ��� ������ �Է� > ���� Ȧ��,���� ¦��,0,���� Ȧ��, ����¦������ �Ǻ��ϴ� ���α׷�
	int num;
	printf("�����Է�:");
	scanf_s("%d", &num);
	if (num > 0) {
		if (num % 2 == 0) {
			printf("���� ¦��");
		}
		else {
			printf("���� Ȧ��");
		}
	}
	else {
		if (num % 2 == 0) {
			if (num == 0) {
				printf("0�Դϴ�.");
			}
			else {
				printf("���� ¦��");
			}
		}
		else {
			printf("���� Ȧ��");
		}
	}
	return 0;
}