//var
#include<stdio.h>

int main() {

	//1+2=3 [���� cpu, ��� ram]
	//����[��� �����ִ� ��]

	//int today = 4;//���� int %d
	//float stock = 2124.6;//�Ǽ� float %f
	//double height = 170.5;//�Ǽ� double ������ �� ũ�� %lf
	//char coffee_size = 'L'; // ���� char ���ĺ� or Ư������ ���� %c
	//printf("���� ��¥�� %d���Դϴ�.", today);
	
	// int today =4;
	// float nasdaq;
	//double bitconin;
	//char coffee_size;
	//������ ~���Դϴ�. ������ �ֽ��� ~�̰� ��Ʈ���� ������ ~�̰�, ���� Ŀ�� ������
	//�ֹ��� ~������ �Դϴ�.

	int today = 4;
	float nasdaq = 14592.21;
	double bitcoin = 58789000.123;
	char coffee_size = 'L';

	printf("������ %d���Դϴ�.\n",today);
	printf("������ ������ �ֽ��� %.2f�Դϴ�.\n",nasdaq); 
	printf("������ ��Ʈ���� ������ %.2lf�Դϴ�.\n",bitcoin);
    printf("������ Ŀ�ǻ������ %c�Դϴ�.\n",coffee_size);


	return 0;
}