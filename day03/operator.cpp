#include<stdio.h>
int main() {

	//RAM:변수 데이터 타입
	//Input:입력
	//Output:출력
	//Operator:연산자

	//1) 100이하의 양의 정수를 입력받고
	//10자리와 1자리를 출력하는 프로그램
	/*int num;
	printf("정수 입력:");
	scanf_s("%d", &num);
	printf("10의 자리:%d, 1의 자리: %d", num / 10, num % 10);
	return 0;*/

	//int a = 1;
	//a++;//2
	//a++;//3
	////printf("%d",a++)//3
	//printf("%d", ++a);//4

	//1)두 정수를 입력받고 큰 수 출력하기
	/*int a, b;
	printf("첫번째 정수를 입력하세요.:");
	scanf_s("%d", &a);
	printf("두번째 정수를 입력하세요.:");
	scanf_s("%d", &b);
	int bigger = a >= b ? 'a' : 'b';
	printf("두 정수 중 %d가 더 큰 수이다.",bigger);*/

	//70점이상
	int eng;
	printf("영어점수:");
	scanf_s("%d", &eng);
	printf("결과는 %c입니다.", eng > 70 ? 'A' : 'F');

	return 0;
}