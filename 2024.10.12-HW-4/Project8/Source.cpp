#include <iostream>
int main(int argc, char* argv[])
{
		int n = 0;
		scanf_s("%d", &n);
		int b[1000] = { 0 };
		for (int c = 0; c < n; ++c) {
			scanf_s("%d", &b[c]);
		}
		int m = 0;
		int i = 0;
		int j = 0;
		scanf_s("%d", &m);
		for (int k = 0; k < m; ++k) {
			scanf_s("%d", &i);
			scanf_s("%d", &j);
			for (int c = i - 1; c <= j - 1; ++c) {
				printf("%d\n", b[c]);
			}
		}
	return EXIT_SUCCESS;
}