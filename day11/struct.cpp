//struct
#include<stdio.h>
#include<string.h>
struct Coffee {
	char name[50];
	int price;
	int shots;
};
struct student {
	char name[20];
	int id;
	char major[50];
	struct Coffee coffee;
};
int main() {
	struct Coffee a;
	a.price = 2500;
	strcpy(a.name,"americano");
	a.shots = 2;
	printf("�̸�:%s ��:%d ����:%d\n", a.name, a.shots, a.price);
//�л� ����ü �̸�,�а�,�й�

	struct student kim;
	strcpy(kim.major,"computer");
	strcpy(kim.name, "kim");
	kim.id = 1;
	kim.coffee = a;

	printf("�̸�:%s ����:%s Ŀ��:%s",kim.name,kim.major,kim.coffee.name);
}