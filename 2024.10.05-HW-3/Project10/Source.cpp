#include <cstdio>

int main(int argc, char* argv[])
{
    int n = 0;
    scanf_s("%d", &n);
    int t = 0;
    int m = 0;
    int c = 0;
    for (int i = 0; i < n; ++i)
    {
        scanf_s("%d", &t);
        if (t > 0)
        {
            ++c;
        }
        else
        {
            if (c > m)
            {
                m = c;
            }
            c = 0;
        }
    }
    if (c > m)
    {
        m = c;
    }
    printf("%d", m);
    return 0;
}