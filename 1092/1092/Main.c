#include <stdio.h>

int main(void)
{
	int day = 1;
	int a, b, c;

	scanf_s("%d %d %d", &a, &b, &c);

	while (day % a != 0 || day % b != 0 || day % c != 0)
		day++;

	printf("%d", day);

	return 0;
}