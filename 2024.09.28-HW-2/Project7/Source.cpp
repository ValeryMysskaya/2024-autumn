#include <iostream> 

int main(int argc, int argv[])
{
    int k = 0;
    int m = 0;
    int n = 0;
    
    scanf_s("%d", &k);
    scanf_s("%d", &m);
    scanf_s("%d", &n);

    int r;
    if (n == 0)
    {
        r = 0;
    }
    else if (n <= k)
    {
        r = 2;
    }
    else
    {
        r = (2 * n + k - 1) / k;
    }
    printf("%d", m * r);
    return EXIT_SUCCESS;
}