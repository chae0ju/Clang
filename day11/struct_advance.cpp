//struct_adv
#include<stdio.h>
#include<string.h>

//Ÿ���� �����ϰ���(����������)
//typedef int Umm;//int�� Umm�̶�� ��
typedef struct Coffee {
	char name[50];
	int price;
	int shots;
}Coffee;
//raiseCoffeePrice(Coffee �ּڰ�, int price)
void raiseCoffeePrice(Coffee* coffee, int price) {
	coffee->price += price;
}

int main() {
	int a[3] = { 1,2,3 };
	Coffee menu[3] = {
		{"americano",6500,2},
		{"signature",9000,1},
		{"today",5000,2},
	};

	for (int i = 0; i < sizeof(menu) / sizeof(menu[0]); i++) {
		menu[i].price += 1000;
	}
	raiseCoffeePrice(&menu[0], 5000);
	raiseCoffeePrice(&menu[1], 2000);
	raiseCoffeePrice(&menu[2], 1000);

	for (int i = 0; i < sizeof(menu)/sizeof(menu[0]); i++) {
		printf("Ŀ���̸�:%s ����:%d ����:%d\n",menu[i].name,menu[i].price,menu[i].shots);
	}
}