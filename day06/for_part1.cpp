#include<stdio.h>
int main() {

	/*for (int i = 0; i < 100; i++) {
		if (i % 2 == 0)
			printf("%d\n", i);
	}*/
	//1.유저에게 입력받은 수의 총합 구하기
	//3>6
	/*int num;
	printf("정수 입력:");
	scanf_s("%d", &num);
	int sum = 0;
	for (int i = 0; i <= num; i++) {
		sum += i;
	}
	printf("%d\n", sum);*/


	//2.유저에게 입력받은 수로 구구단 출력
	//2*2=4
	int num;
	printf("정수:");
	scanf_s("%d", &num);
	for(int i=1;i<10;i++)
	{
		printf("%d * %d = %d\n", num, i, num * i);
	}

	return 0;
}