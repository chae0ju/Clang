#include<stdio.h>
int main() {
	/*int tem;
	printf("온도 입력:");
	scanf_s("%d", &tem);
	
	if (0 > tem) {
		printf("추우니까 실내활동 권장");
	}
	else if (0 <= tem && tem <= 40) {
		printf("쾌적하므로 실외활동 권장");
	}
	else if (40 < tem) {
		printf("더우니까 실내활동 권장");
	}*/

	/*int first, second;
	printf("첫번째 양의 정수:");
	scanf_s("%d", &first);
	getchar();
	printf("두번째 양의 정수:");
	scanf_s("%d", &second);
	
		if (first * first == second) {
			printf("%d %d = %d", first, first, second);
		}
	
		else if (second * second == first) {
			printf("%d %d = %d", second, second, first);
		}
		else {
			printf("none");
	

	}*/
	
	int a, b, c, d, e;
	printf("첫번째 정수 입력:");
	scanf_s("%d", &a);
	getchar();
	printf("두번째 정수 입력:");
	scanf_s("%d", &b);
	getchar();
	printf("세번째 정수 입력:");
	scanf_s("%d", &c);
	getchar();
	printf("네번째 정수 입력:");
	scanf_s("%d", &d);
	getchar();
	printf("다섯번째 정수 입력 : ");
	scanf_s("%d", &e);
	getchar();
	int sum = 0;
	if (a > 0) {
		sum += a;
	}
	if (b > 0) {
		sum += b;
	}
	if (c > 0) {
		sum += c;
	}
	if (d > 0) {
		sum += d;
	}
	if (e > 0) {
		sum += e;
	}
	printf("%d", sum);

	return 0;
}