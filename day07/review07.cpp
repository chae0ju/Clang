#include<stdio.h>
int main() {

	//1�������� �Է� ���� ������ ����� 0~100������ ���� ���ϼ���
	/*int num, sum=0;
	printf("���� �Է�:");
	scanf_s("%d", &num);
	for (int i = 0; i <= 100; i++) {
		if (i%num==0) sum += i;
		}
	   printf("%d", sum);
	*/
	
	//2. �� ������ �Է� �޾� 0~1000�� �� ������ ����� ����ϱ�
	/*int a,b;
	printf("ù��° ����:");
	scanf_s("%d", &a);

	printf("�ι�° ����:");
	scanf_s("%d", &b);
	for (int i = 0; i <= 1000; i++) {
		if (i % a == 0 && i % b == 0) {
			printf("%d\n", i);
		}
	}*/

	//3.�������� ���� n�� ���� 0�� ������ ������ ���������� �Է¹޾� 0�� ���� ��,���ݱ��� ������ ������ �� ��Ÿ����
	//for[�����ڰ� ���� �ˋ�] vs while[�������� ���� �ñ�]
	//if[optional] vs swtich[mandantory]
	/*int sum=0;
	while (1) {
		int num;
		printf("�����Է�(0����):");
		scanf_s("%d", &num);
		if (num == 0) break;
		sum += num;
	}
	printf("sum:%d", sum);*/

    return 0;
}