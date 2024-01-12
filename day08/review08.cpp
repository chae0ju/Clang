#include<stdio.h>
int main() {
	//하나의 양의 정수를 N 받아 1부터 N까지의 홀수의 합을 출력하는 프로그램
	/*int n;
	printf("숫자 입력:");
	scanf_s("%d", &n);
	int sum = 0;
	for (int i = 0; i <= n; i++) {
		if (i % 2 != 0) {
			sum += i;
		}
	}
	printf("홀수의 합:%d", sum);*/

	//2)0~100사이의 정수를 반복해서 입력 받아 합계,평균,개수를 출력하는 프로그램
	//입력된 수 중에 100 넘으면 무시
	//종료 조건은  0 또는 음력
	//실수는 소수점 둘째 자리까지만 출력하기
	//배열 사용금지
	/*int num,i,sum=0;
	for (i = 1; 1<=i ; i++) {
		printf("수 입력:");
		scanf_s("%d", &num);
		if (num > 100) continue;
		if (num <= 0) break;
		sum += num;
	}
	printf("정수의 개수:%d\n", i);
	printf("정수의 합계:%d\n", sum);
	printf("정수의 평균:%.2lf\n", (double)(sum / i));*/

	/*int sum = 0, avg = 0, count = 0;
	while (1) {

		int num;
		printf("정수 입력:");
		scanf_s("%d", &num);
		if (num <= 0) break;
		sum += num;
		count++;

	}
	printf("합계:%d\n평균:%.2lf\n개수:&d",sum,(double)sum/count,count);*/


	//3)사칙연산 프로그램 ***
	/*int codeNumber;

	while (1) {
		printf("1.더하기\n2.빼기\n3.곱하기\n4.나누기\n5.종료\n번호 입력:");
		scanf_s("%d", &codeNumber);

		switch (codeNumber) {
		case 1:
			int a, b;
			printf("첫 번째 정수 입력:");
			scanf_s("%d", &a);
			printf("두 번째 정수 입력:");
			scanf_s("%d", &b);
			printf("%d + %d = %d\n", a, b, a + b);
			break;
		case 2:
			int c, d;
			printf("첫 번째 정수 입력:");
			scanf_s("%d", &c);
			printf("두 번째 정수 입력:");
			scanf_s("%d", &d);
			printf("%d - %d = %d\n", c, d, c - d);
			break;
		case 3:
			int e, f;
			printf("첫 번째 정수 입력:");
			scanf_s("%d", &e);
			printf("두 번째 정수 입력:");
			scanf_s("%d", &f);
			printf("%d * %d = %d\n", e, f, e * f);
			break;
		case 4:
			int y, n;
			printf("첫 번째 정수 입력:");
			scanf_s("%d", &y);
			printf("두 번째 정수 입력:");
			scanf_s("%d", &n);
			printf("%d / %d = %.2lf\n", y, n, (double)y / n);
			break;
		case 5:
			printf("프로그램 종료");
			return 0;
		default:
			printf("숫자를 잘못 입력 하였습니다. 다시 입력\n");
			break;

		}
	}
}*/

	/*return 0;
}*/