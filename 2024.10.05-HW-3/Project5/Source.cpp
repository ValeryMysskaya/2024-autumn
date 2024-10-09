#include <cstdio>

int main(int argc, char* argv[])
{
    int n = 0;
    scanf_s("%d", &n);
    int r = 0;
    int c = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            scanf_s("%d", &c);

            if (i < j && c == 1)
            {
                ++r;
            }
        }
    }
    printf("%d", r);
    return 0;
}