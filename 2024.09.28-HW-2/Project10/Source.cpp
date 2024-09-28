#include<iostream> 

int main(int argc, int argv[])
{
	int n = 0;

	scanf_s("%d", &n);

	if (n == 8)
	{
		printf("%d %d", 1, 1);
	}
	else if (n == 9)
	{
		printf("%d %d", 0, 3);
	}
	else if (n % 5 == 0)
	{
		printf("%d %d", n / 5, 0);
	}
	else if (n % 5 == 1)
	{
		printf("%d %d", (n - 6) / 5, 2);
	}
	else if (n % 5 == 2)
	{
		printf("%d %d", (n - 12) / 5, 4);
	}
	else if (n % 5 == 3)
	{
		printf("%d %d", n / 5, 2);
	}
	else if (n % 5 == 4)
	{
		printf("%d %d", (n - 6) / 5, 3);
	}
	return EXIT_SUCCESS;
}