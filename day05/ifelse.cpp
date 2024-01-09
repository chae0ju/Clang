//ifelse.cpp
#include<stdio.h>
int main() {
	/*int eng = 80;
	if (eng > 90) {
		printf("A");
	}
	else if (eng > 80) {
		printf("B");
	}
	else if (eng > 70) {
		printf("C");
	}
	else {
		printf("F 수고하십쇼");
	}*/

	//각도를 입력해서
	//90이하 예각
	//90 직각
	//90~180 둔각
	//180 평각
	int angle;
	printf("각 입력:");
	scanf_s("%d", &angle);
	if (0 < angle && angle < 90) {
		printf("예각");
	}
	else if (angle == 90) {
		printf("직각");
	}
	else if (90 < angle && angle < 180) {
		printf("둔각");
	}
	else if (angle = 180) {
		printf("평각");
	}
	else {
		printf("쉬는 시간 각");
	}


	return 0;
}