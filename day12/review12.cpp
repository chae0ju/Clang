//1. Book ����ü�� ����� �ּ��� >  å ����,�۰�,����,ISBN
#include<stdio.h>
#include<string.h>
//struct Book{
//	char title[50];
//	char writer[50];
//	int price;
//	int ISBN;
//};
//2.å�� ������ �÷��ִ� RaiseBookPrice�� �Լ� ������ּ���.
//int RaiseBookPrice(Book* price,int add) {
//	price += add;
//}
//3.å�� �۰��� �ٲ��ִ� ChangeWriter�� �Լ� ������ּ���.
//void ChangeWriter(Book* writer, char new_writer) {
//	Book.writer = *new_writer;
//}
//int main() {
//	Book.title = "ABC";
//
//	printf("å ����:%s �۰�:%s ����:%d ISBN:%d",Book.title,Book.writer,Book.price,Book.ISBN );
//
//	return 0;
//}



typedef struct Book {
	char title[50];
	char writer[50];
	int price;
	int ISBN;
}Book;
void RaiseBookPrice(Book* something) {
	
	int p;
	printf("������ �Է�:");
	scanf("%d", &p);
	something->price += p;
}
void ChangeWriter(Book* something) {
	char name[50];
	printf("�۰��� �Է�:");
	scanf("%s", &name);
	strcpy(something->writer, name);
}
int main() {
	Book a = { "mega","study",15000,1234 };
	RaiseBookPrice(&a);
	ChangeWriter(&a);
	printf("å ����:%s �۰�:%s ����:%d ISBN:%d", a.title, a.writer,a.price, a.ISBN);

	return 0;

}

