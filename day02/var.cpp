//var
#include<stdio.h>

int main() {

	//1+2=3 [연산 cpu, 기억 ram]
	//변수[기억 시켜주는 곳]

	//int today = 4;//정수 int %d
	//float stock = 2124.6;//실수 float %f
	//double height = 170.5;//실수 double 범위가 더 크다 %lf
	//char coffee_size = 'L'; // 문자 char 알파벳 or 특수문자 가능 %c
	//printf("오늘 날짜는 %d일입니다.", today);
	
	// int today =4;
	// float nasdaq;
	//double bitconin;
	//char coffee_size;
	//오늘은 ~일입니다. 나스닥 주식은 ~이고 비트코인 가격은 ~이고, 오늘 커피 사이즈
	//주문은 ~사이즈 입니다.

	int today = 4;
	float nasdaq = 14592.21;
	double bitcoin = 58789000.123;
	char coffee_size = 'L';

	printf("오늘은 %d일입니다.\n",today);
	printf("오늘의 나스닥 주식은 %.2f입니다.\n",nasdaq); 
	printf("오늘의 비트코인 가격은 %.2lf입니다.\n",bitcoin);
    printf("오늘의 커피사이즈는 %c입니다.\n",coffee_size);


	return 0;
}