#include <cstdio>

int main(int argc, char* argv[])
{
    int i = 0;
    int j = 0;
    scanf_s("%d", &i);
    scanf_s("%d", &j);
    int a = i;
    int b = j;
    while (b != 0)
    {
        int t = b;
        b = a % b;
        a = t;
    }
    int g = a;
    int f = 0;
    if (g == 0)
    {
        f = 0;
    }
    else if (g == 1)
    {
        f = 1;
    }
    else
    {
        int a = 0;
        int b = 1;
        for (int k = 2; k <= g; ++k)
        {
            int c = (a + b) % 1000000000;
            a = b;
            b = c;
        }
        f = b;
    }
    printf("%d", f);
    return 0;
}