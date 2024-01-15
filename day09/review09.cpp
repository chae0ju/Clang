//유저가 0을 입력하기 전까지 소문자 알파벳들을 입력하고 0을 누른 후 대문자로 바꾸기
#include<stdio.h>
#include<string.h>
int main() {
	/*int a;
	int count = 0;
	while (1) {
		printf("소문자 입력:");
		scanf_s("%c", &a);
		if (a == 0) break;
		count++;
	}
	for (int i = 0; i < count; i++) {
		a[i] = (char)(int)(a - 32);
	}
	printf("대문자:%s",a);*/
	char alpha[100];
	int count = 0;

	while (1) {
		char a;
		printf("알파벳을 입력(0종료):");
		scanf_s("%c", &a);
		getchar();
		if (a == '0') {
			alpha[count] = '\0';
			break;
		}
		alpha[count] = a - 32;
		count++;
	}
	printf("%s",alpha);

	
	return 0;
}