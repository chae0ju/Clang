#include<stdio.h>
int main() {

	/*for (int i = 0; i < 100; i++) {
		if (i % 2 == 0)
			printf("%d\n", i);
	}*/
	//1.�������� �Է¹��� ���� ���� ���ϱ�
	//3>6
	/*int num;
	printf("���� �Է�:");
	scanf_s("%d", &num);
	int sum = 0;
	for (int i = 0; i <= num; i++) {
		sum += i;
	}
	printf("%d\n", sum);*/


	//2.�������� �Է¹��� ���� ������ ���
	//2*2=4
	int num;
	printf("����:");
	scanf_s("%d", &num);
	for(int i=1;i<10;i++)
	{
		printf("%d * %d = %d\n", num, i, num * i);
	}

	return 0;
}