#include<stdio.h>
int main() {
	/*int tem;
	printf("�µ� �Է�:");
	scanf_s("%d", &tem);
	
	if (0 > tem) {
		printf("�߿�ϱ� �ǳ�Ȱ�� ����");
	}
	else if (0 <= tem && tem <= 40) {
		printf("�����ϹǷ� �ǿ�Ȱ�� ����");
	}
	else if (40 < tem) {
		printf("����ϱ� �ǳ�Ȱ�� ����");
	}*/

	/*int first, second;
	printf("ù��° ���� ����:");
	scanf_s("%d", &first);
	getchar();
	printf("�ι�° ���� ����:");
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
	printf("ù��° ���� �Է�:");
	scanf_s("%d", &a);
	getchar();
	printf("�ι�° ���� �Է�:");
	scanf_s("%d", &b);
	getchar();
	printf("����° ���� �Է�:");
	scanf_s("%d", &c);
	getchar();
	printf("�׹�° ���� �Է�:");
	scanf_s("%d", &d);
	getchar();
	printf("�ټ���° ���� �Է� : ");
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