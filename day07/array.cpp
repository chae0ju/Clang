//array.cpp
#include<stdio.h>
int main() {

	////array[�迭]
	////1. �迭 ���� �� �ʱ�ȭ
	//int score[5] = { 100,30,40,50,20 };
	////2. �迭 ���� �� �ʱ�ȭ
	//int weight[] = { 100,200,300,400,500,600 };
	////3.�迭����
	//int height[10];
	////4.�迭�� �ε����� ���� 0!
	//height[0] = 188;

	//�л� 5�� >�� ���
	//int score[5];
	//	for (int i = 0; i < 5; i++) {
	//		printf("��������;");
	//		scanf_s("%d", &score[i]);
	//	}
	//	int sum = 0;
	//	for (int i = 0; i < 5; i++) {
	//		printf("%d��° �л� ����:%d\n", i, score[i]);
	//		sum += score[i];
	//	}

	//	printf("�� ���:%.2lf", (double)(sum / 5));

	/*double height[5];
	for (int i = 0; i < 5; i++) {
		printf("Ű:");
		scanf_s("%lf", &height[i]);
	}
	double sum = 0;
	for (int i = 0; i < 5; i++) {
		printf("%d��° �л��� Ű:%lf\n", i, height[i]);
		sum += height[i];
	}
	printf("Ű ���:%.2lf", (double)(sum / 5));*/

	//1��° char�迭 �����
	char it[] = { 'm','e','g','a','s','t','u','d','y','!','\0'};
	char starbucks[20] = { 'l','a','t','t','e' };
	char megacoffee[20];
	megacoffee[0] = 'l';
	megacoffee[1] = 'a';
	megacoffee[2] = 't';
	megacoffee[3] = 't';
	megacoffee[4] = 'e';
	megacoffee[5] = '\0';//null
	//printf("%d",sizeof(it));//4byte
	//%c�� ���� �迭 ���
	/*for (int i = 0;megacoffee[i] != '\0'; i++) {
		printf("%c", megacoffee[i]);
	}*/

	//%s�� ���� �迭 ���
	printf("%s\n", it);
	return 0;
}