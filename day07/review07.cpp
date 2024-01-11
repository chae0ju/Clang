#include<stdio.h>
int main() {

	//1유저에게 입력 받은 정수의 배수의 0~100까지의 합을 구하세요
	/*int num, sum=0;
	printf("정수 입력:");
	scanf_s("%d", &num);
	for (int i = 0; i <= 100; i++) {
		if (i%num==0) sum += i;
		}
	   printf("%d", sum);
	*/
	
	//2. 두 정수를 입력 받아 0~1000의 두 정수의 공배수 출력하기
	/*int a,b;
	printf("첫번째 정수:");
	scanf_s("%d", &a);

	printf("두번째 정수:");
	scanf_s("%d", &b);
	for (int i = 0; i <= 1000; i++) {
		if (i % a == 0 && i % b == 0) {
			printf("%d\n", i);
		}
	}*/

	//3.유저에게 정수 n을 숫자 0을 누리기 전까지 여러정수를 입력받아 0을 누른 후,지금까지 눌렀던 정수의 합 나타내기
	//for[개발자가 끝을 알떄] vs while[유저에게 끝을 맡김]
	//if[optional] vs swtich[mandantory]
	/*int sum=0;
	while (1) {
		int num;
		printf("정수입력(0종료):");
		scanf_s("%d", &num);
		if (num == 0) break;
		sum += num;
	}
	printf("sum:%d", sum);*/

    return 0;
}