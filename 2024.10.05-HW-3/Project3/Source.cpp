#include <cstdio>

int main(int argc, char* argv[])
{
    int n = 0;
    scanf_s("%d", &n);
    int b = 437;
    int a = 0;
    for (int i = 1; i <= n; ++i)
    {
        int h = 0;
        scanf_s("%d", &h);
        if (h <= b)
        {
            a = i;
            break;
        }
    }
    if (a == 0)
    {
        printf("No crash");
    }
    else
    {
        printf("Crash %d", a);
    }
    return 0;
}