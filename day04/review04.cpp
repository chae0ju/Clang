#include<stdio.h>
int main() {
	////1)1000������ ������ �Է��ϸ� �� �ʷ� ����ϴ� ���α׷�
	//int num;
	//printf("���� �Է�");
	//scanf_s("%d", &num);
	////83/60->1
	//int min = num / 60;
	//int sec = num % 60;
	//printf("%d�� %d��", min, sec);

	//2)10000~99999 ������ �Է��ϸ� ���� �ڸ��� ����ϴ� ���α׷�
	int num;
	printf("10000~99999 ���� �Է�:");
	scanf_s("%d", &num);
	//12345/100
	int over_hunderd = num / 100;
	//123
	int hundred = over_hunderd % 10;
	printf("���� �ڸ��� %d", hundred);
	return 0;
}