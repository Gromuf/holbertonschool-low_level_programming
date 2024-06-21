#include <stdio.h>

int main(void)
{
	int a = 1;
	int b = 2;
	int result;
	int i;

	printf("%d, %d, ", a, b);
	for (i = 0 ; i < 49 ; i++)
	{
		result = a + b;
		printf("%d, ", result);
		a = b;
		b = result;
	}
	printf("%d\n", a + b);
	return (0);
}
