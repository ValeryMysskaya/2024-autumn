#include <cstdio>

int main(int argc, char* argv[])
{
    int n = 0;
    int m = 0;
    scanf_s("%d", &n);
    scanf_s("%d", &m);
    int a = n;
    int b = m;
    while (b != 0)
    {
        int t = b;
        b = a % b;
        a = t;
    }
    int s = n / a;
    printf("%d", s);
    return 0;
}