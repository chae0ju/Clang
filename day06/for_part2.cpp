#include<stdio.h>
int main() {

	/*for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d %d\n", i, j);
		}
	}*/

	for (int i = 1; i < 10; i++) {
		printf("=========%d��===========\n", i);
		for (int j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("=======================\n");
	}

	return 0;
}