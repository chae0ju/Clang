#include<stdio.h>
int main() {
	// = ���� ������
	//++ �ø��� ������
	//& �ּ� ������
	//*������ ������ = �ּҰ��� �ָ� �ű⿡ ��� ���� �����ٰ�
	int a = 10;
	int* pa = &a;
	printf("*pa:%d\n", *pa);
	printf("a:%d\n", a);
	printf("pa:%d\n", pa);
	printf("&a:%d\n", &a);

	*pa = 50;
	printf("a:%d\n", a);
	return 0;

}