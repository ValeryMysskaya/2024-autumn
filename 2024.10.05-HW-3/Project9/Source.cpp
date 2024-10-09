#include <iostream>

using namespace std;
int main(int argc, char* argv[])
{
    long long a = 0;
    long long b = 0;
    long long c = 0;
    long long d = 0;
    cin >> a >> b >> c >> d;
    int k = 0;
    for (long long x = -100; x <= 100; ++x)
    {
        if (a * x * x * x + b * x * x + c * x + d == 0)
        {
            if (k > 0)
            {
                printf(" ");
            }
            printf("%d", x);
            ++k;
        }
    }
    if (k == 0)
    {
        printf("%d", 0);
    }
    printf("\n");
    return 0;
}