#include<stdio.h>
int main() {

	/*double length;
	printf("정사각형의 한 변의 길이를 입력하세요:");
	scanf_s("%lf", &length);
	printf("정사각형의 둘레는 %lf입니다.", 4 * length);
	printf("정사각형의 넓이는 %lf입니다.", length * length);

	int side;
	printf("한변의 길이:");
	scanf_s("%d",&side);
	printf("정사각형의 둘레는 %lf입니다.", 4 * length);
	printf("정사각형의 넓이는 %lf입니다.", length * length);

	*/

	double radius;
	double pi = 3.14;
	printf("반지름의 길이:");
	scanf_s("%lf", &radius);
	printf("원의 둘레는 %.2lf입니다\n", 2 * radius * pi);
	printf("원의 넓이는 %.2lf입니다", pi * radius * radius);

	return 0;
}

