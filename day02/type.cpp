#include<stdio.h>
int main() {
	//명시적 타입변환
	int i_value = 10;
	double d_value = (double)i_value;

	double d_value1 = 12.23;
	int i_value1 = (int)d_value;

	char a = 'a';
	int c_value = (int)a;

	double avg = (3 + 2 + 2) / 3;
	printf("%f", avg);

	//암묵적 타입변환
	int intVal = 10;
	double sum = intVal + 3.5;

	return 0;
}