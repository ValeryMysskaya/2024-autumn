#include <cstdio>

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    int m = (a > b) ? a : b;
    int l = m;
    while (true)
    {
        if (l % a == 0 && l % b == 0)
        {
            break;
        }
        l += m;
    }
    printf("%d", l);
    return 0;
}