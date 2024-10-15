#include <iostream>
int main(int argc, char* argv[])
{
		int n = 0;
		scanf_s("%d", &n);
		int x = 0;
		int k = 0;
		int b[100] = { 0 };
		for (int i = 0; i < n; ++i) {
			scanf_s("%d", &b[i]);
		}
		scanf_s("%d", &x);
		for (int i = 0; i < n; ++i) {
			if (b[i] >= x) {
				k = i + 2;
			}
		}
		printf("%d", k);
	return EXIT_SUCCESS;
}