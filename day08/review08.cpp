#include<stdio.h>
int main() {
	//�ϳ��� ���� ������ N �޾� 1���� N������ Ȧ���� ���� ����ϴ� ���α׷�
	/*int n;
	printf("���� �Է�:");
	scanf_s("%d", &n);
	int sum = 0;
	for (int i = 0; i <= n; i++) {
		if (i % 2 != 0) {
			sum += i;
		}
	}
	printf("Ȧ���� ��:%d", sum);*/

	//2)0~100������ ������ �ݺ��ؼ� �Է� �޾� �հ�,���,������ ����ϴ� ���α׷�
	//�Էµ� �� �߿� 100 ������ ����
	//���� ������  0 �Ǵ� ����
	//�Ǽ��� �Ҽ��� ��° �ڸ������� ����ϱ�
	//�迭 ������
	/*int num,i,sum=0;
	for (i = 1; 1<=i ; i++) {
		printf("�� �Է�:");
		scanf_s("%d", &num);
		if (num > 100) continue;
		if (num <= 0) break;
		sum += num;
	}
	printf("������ ����:%d\n", i);
	printf("������ �հ�:%d\n", sum);
	printf("������ ���:%.2lf\n", (double)(sum / i));*/

	/*int sum = 0, avg = 0, count = 0;
	while (1) {

		int num;
		printf("���� �Է�:");
		scanf_s("%d", &num);
		if (num <= 0) break;
		sum += num;
		count++;

	}
	printf("�հ�:%d\n���:%.2lf\n����:&d",sum,(double)sum/count,count);*/


	//3)��Ģ���� ���α׷� ***
	/*int codeNumber;

	while (1) {
		printf("1.���ϱ�\n2.����\n3.���ϱ�\n4.������\n5.����\n��ȣ �Է�:");
		scanf_s("%d", &codeNumber);

		switch (codeNumber) {
		case 1:
			int a, b;
			printf("ù ��° ���� �Է�:");
			scanf_s("%d", &a);
			printf("�� ��° ���� �Է�:");
			scanf_s("%d", &b);
			printf("%d + %d = %d\n", a, b, a + b);
			break;
		case 2:
			int c, d;
			printf("ù ��° ���� �Է�:");
			scanf_s("%d", &c);
			printf("�� ��° ���� �Է�:");
			scanf_s("%d", &d);
			printf("%d - %d = %d\n", c, d, c - d);
			break;
		case 3:
			int e, f;
			printf("ù ��° ���� �Է�:");
			scanf_s("%d", &e);
			printf("�� ��° ���� �Է�:");
			scanf_s("%d", &f);
			printf("%d * %d = %d\n", e, f, e * f);
			break;
		case 4:
			int y, n;
			printf("ù ��° ���� �Է�:");
			scanf_s("%d", &y);
			printf("�� ��° ���� �Է�:");
			scanf_s("%d", &n);
			printf("%d / %d = %.2lf\n", y, n, (double)y / n);
			break;
		case 5:
			printf("���α׷� ����");
			return 0;
		default:
			printf("���ڸ� �߸� �Է� �Ͽ����ϴ�. �ٽ� �Է�\n");
			break;

		}
	}
}*/

	/*return 0;
}*/