#include <stdio.h>

int length(char str[]);

int main(void)
{
	char str[100];
	int a;
	printf("���ڿ��� �Է��ϼ��� : ");
	scanf_s("%s", str, sizeof(str));
	a = length(str);
	printf("�Էµ� ���ڿ���\n%s\n�Դϴ�.\n", str);
	printf("�Էµ� ���ڿ��� ���� = %d \n", a);

	return 0;
}

int length(char str[])
{
	int i, a;
	a = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		a++;
	}
	return a;
}