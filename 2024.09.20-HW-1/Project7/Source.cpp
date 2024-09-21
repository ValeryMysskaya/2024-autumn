#include<iostream>

int main(int argc, char* argv[])
{
	int V = 0;
	int T = 0;
	scanf_s("%d", &V);
	scanf_s("%d", &T);
	int S = (V * T % 109 + 109) % 109;
	printf("%d", S + 1);
	return EXIT_SUCCESS;
}