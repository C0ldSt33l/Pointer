#include<iostream>

//����������� ��� ����� �� ����������� �� �������.

void swap(int *a, int *b)
{
	if (abs(*a) > abs(*b))
	{
		int temp = *a;
		*a = *b;
		*b = temp;
	}
}

int main()
{
	system("chcp 1251");
	system("cls");

	int a, b, c;
	
	printf("������� 3 �����:\n");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	
	swap(&a, &b);
	swap(&b, &c);
	
	printf("\n%d\n%d\n%d\n", a, b, c);

	return 0;
}
