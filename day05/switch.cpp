//switch.cpp
//control statement(���)
//conditional statement(���ǹ�)
//if��-switch��
#include<stdio.h>
int main() {
	//char alpha = 'b';
	//switch (alpha) {
	//case 'a':
	//	printf("a�� �����ϼ̱���!");
	//	break;//break �ʼ�!
	//case 'b':
	//	printf("b�� �����ϼ̱���!");
	//	break;

	//default:
	//	printf("�����Ͻ� ���ĺ��� ����");
	//	break;
	//}

	//1)�������� 1~3���� �Է¹ް�,
	//1>1���Դϴ�
	//2>2���Դϴ�
	/*int month;
	printf("���Է�:");
	scanf_s("%d", &month);
	switch (month) {
	case (1):
		printf("1���Դϴ�.");
	    break;
	case (2):
		printf("2���Դϴ�.");
	    break;
	case (3):
		printf("3���Դϴ�.");
	    break;
	default:
		printf("����");
		break;
	}*/


	//2)�������� �� ���� ������ �Է¹ް�, +/-/*�� �Է¹ް�
	//+>�μ��� ���� ��Ÿ����
	//->�μ��� ���� ��Ÿ����
	//*>�μ��� ���� ��Ÿ���� ���α׷�
	//3 5 + > 3 + 5 = 8
	//4 2 - > 4 * 2 = 8
	/*int first, second;
	char op;

	printf("ù��° ����:");
	scanf_s("%d", &first);
	printf("�ι�° ����:");
	scanf_s("%d", &second);
	getchar();
	printf("+ - * �Է�:");
	scanf_s("%c", &op);

	switch (op) {
	case '+':
			printf("%d %c %d = %d", first, op, second, first + second);
			break;
	case '-':
		printf("%d %c %d = %d", first, op, second, first - second);
		break;
	case '*':
		printf("%d %c %d = %d", first, op, second, first * second);
		break;
	defaut:
		printf("����");
		break;
	}*/


	return 0;
}