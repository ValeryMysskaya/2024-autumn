#include <cstdio>

int main(int argc, char* argv[])
{
    int n;
    scanf_s("%d", &n);
    int m = -1;
    int o = -1;
    for (int i = 0; i < n; ++i)
    {
        int a = 0;
        int s = 0;
        scanf_s("%d", &a);
        scanf_s("%d", &s);
        if (s == 1)
        {
            if (a > m)
            {
                m = a;
                o = i + 1;
            }
        }
    }
    if (o == -1)
    {
        printf("%d", -1);
    }
    else
    {
        printf("%d", o);
    }
    return 0;
}