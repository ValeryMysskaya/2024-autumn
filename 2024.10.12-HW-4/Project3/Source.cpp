#include <iostream>
int main(int argc, char* argv[])
{
    int n = 0;
    scanf_s("%d", &n);
    int b[1000] = { 0 };
    int mx = 0;
    int mn = 0;
    for (int i = 0; i < n; ++i) {
        scanf_s("%d", &b[i]);
    }
    mx = b[0];
    mn = b[0];
    for (int i = 1; i < n; ++i) {
        if (mx < b[i]) {
            mx = b[i];
        }
    }
    for (int i = 1; i < n; ++i) {
        if (mn > b[i]) {
            mn = b[i];
        }
    }
    for (int i = 0; i < n; ++i) {
        if (b[i] == mx) {
            b[i] = mn;
        }
        printf("%d\n", b[i]);
    }
  return EXIT_SUCCESS;
}