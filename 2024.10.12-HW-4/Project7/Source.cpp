#include <iostream>
int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);
	int b[1000] = { 0 };
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &b[i]);
	}
	for (int i = n - 1; i > -1; --i) {
		printf("%d\n", b[i]);
	}
	return EXIT_SUCCESS;
}