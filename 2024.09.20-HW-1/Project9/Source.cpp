#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	int d = ((a - c) / (b - c));
	printf("%d", d - int(d < 0) * (d - 1) + int((((b - c) + ((a - c) % (b - c)))%(b-c)) > 0));

	return EXIT_SUCCESS;
}