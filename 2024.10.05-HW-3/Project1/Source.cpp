#include <cstdio>

int main(int argc, char* argv[])
{
    int n = 0;
    scanf_s("%d", &n);
    int a = 0;
    for (int i = 0; i < n; ++i)
    {
        int b = 0;
        scanf_s("%d", &b);
        if (b != 0)
        {
            ++a;
        }
    }
    if (n - a < a)
    {
        printf("%d", n - a);
    }
    else
    {
        printf("%d", a);
    }
    return 0;
}