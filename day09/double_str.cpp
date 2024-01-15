//double_str
#include<stdio.h>
int main() {
	/*char coffee;
	for (int i = 0; i < 3: i++) {
		printf("커피 입력:");
		scanf("%s", &coffee);
	}
	
	char coffee[3][100] = { coffee };

	for (int j = 0; j < 3; j++) {
		printf("%s\n", coffee[i][j]);
	}*/
	char coffee[3][10];

	for (int i = 0; i < 3; i++) {
		printf("커피 입력:");
		scanf("%s", &coffee[i]);
		getchar();
	}
	for (int i = 0; i < 3; i++) {
		printf("%s\n", coffee[i]);
	}
	return 0;
}