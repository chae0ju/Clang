//������ 0�� �Է��ϱ� ������ �ҹ��� ���ĺ����� �Է��ϰ� 0�� ���� �� �빮�ڷ� �ٲٱ�
#include<stdio.h>
#include<string.h>
int main() {
	/*int a;
	int count = 0;
	while (1) {
		printf("�ҹ��� �Է�:");
		scanf_s("%c", &a);
		if (a == 0) break;
		count++;
	}
	for (int i = 0; i < count; i++) {
		a[i] = (char)(int)(a - 32);
	}
	printf("�빮��:%s",a);*/
	char alpha[100];
	int count = 0;

	while (1) {
		char a;
		printf("���ĺ��� �Է�(0����):");
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