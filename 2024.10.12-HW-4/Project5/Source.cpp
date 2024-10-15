#include <iostream>
#include <cmath>
int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);
	int c[1001] = { 0 };
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &c[i]);
	}
	int k = 0;
	int x = 0;
	k = c[0];
	scanf_s("%d", &x);
	for (int i = 0; i < n; ++i)
		if (abs(c[i] - x) < abs(k - x) || abs(c[i] - x) == abs(k - x) && c[i] < k)
		{
			k = c[i];
		}
	printf("%d", k);
	return EXIT_SUCCESS;
}