//1.���� a,b�� ���� �����ϰ� 10�� 20�� ���� ��,�����͸� ����ؼ� ���� ���� �ٲٱ�
//2.���ڿ�:'americano'�� ���� �� �������� ���� n�� ���� m�� �Է¹ް� �ش� n��°�� �ۿ��� 
//m���ڷ� �ٲٱ�
//3.���ڿ� �迭���� �����ʰ� ���� �ְ� 'americano','latte','vanilla' �������� 
//���ڿ��� �Է¹ް� �ش� Ŀ�Ǹ� �߰��� �� ���� �����ֱ�
#include<stdio.h>
#include<string.h>
int main() {
	//1.
	//int a = 10;
	//int b = 20;

	//int* pa;
	//int* pb;
	//pa = &a;
	//pb = &b;
	//printf("a:%d b:%d\n", a, b);

	//int temp;
	//temp = *pa;//10
	//*pa = *pb;//20
	//*pb = temp;//10
	//printf("a:%d b:%d\n", a, b);
	
	/*char king = 'k';
	char queen = 'q';
	char* pk;
	char* pq;
	pk = &king;
	pq = &queen;
	printf("king:%c queen:%c\n", king, queen);

	int temp;
	temp = *pk;
	*pk = *pq;
	*pq = temp;
	printf("king:%c queen:%c", king, queen);*/

	//2.
	/*char coffee[] = "americano";
	int num;
	printf("n�� �Է�");
	scanf("%d", &num);
	getchar();
	char alpha;
	printf("alphabet �Է�:");
	scanf("%c", &alpha);
	coffee[num] = alpha;
	printf("%s", coffee);*/

	//3.
	char menu[4][20] = {
		"americano",
		"latte",
		"vanilla",
	};
	char newMenu[20];
	printf("�޴� �߰�:");
	scanf("%s", newMenu);
	strcpy(menu[3],newMenu);//strcpy(���, ������)

	for (int i = 0; i < 4; i++) {
		printf("%s\n", menu[i]);
	}
	return 0;
}