#include<locale.h>
#include<stdio.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	int num1,num2;
	puts("������� �����");
	scanf("%d", &num1);
	printf("\n������� ����� %d", num1);

	puts("\n������� �����");
	scanf("%d", &num2);
	printf("������� ����� %d", num2);

	printf("\n�����: %d+%d=%d\n", num1, num2, num1 + num2);
	printf("\n��������: %d-%d=%d\n", num1, num2, num1 - num2);
	printf("\n������������: %d*%d=%d\n", num1, num2, num1 * num2);
	printf("\n��������: %d/%d=%d\n", num2, num, num2 / num1);
	printf("\n������� �� �������: %d �� %d=%d\n", num2, num1, num2 % num1);

	


}