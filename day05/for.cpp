//control statement(제어문)
//1)conditional statement(조건문)
//if,switch
//2)loop statement(반복문)
//-코드를 n번 반복함
//-for
#include<stdio.h>
int main() {
	/*for (int i = 0; i < 10; i++) {
		printf("%d\n", i);
	}*/

	for (int i = 0; i <= 100; i++) {
		if (i % 2 != 0) {
			printf("%d\n", i);
		}
	}
	return 0;
}