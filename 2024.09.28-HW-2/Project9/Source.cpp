#include <iostream>

int main(int argc, int argv[])
{
    int K = 0;
    int W = 0;
    scanf_s("%d", &K);
    scanf_s("%d", &W);

    int a1 = 0;
    int b1 = 0;
    int a2 = 0;
    int b2 = 0;
    int a3 = 0;
    int b3 = 0;
    scanf_s("%d", &a1);
    scanf_s("%d", &b1);
    scanf_s("%d", &a2);
    scanf_s("%d", &b2);
    scanf_s("%d", &a3);
    scanf_s("%d", &b3);

    if ((a1 <= W && b1 >= K) || (a2 <= W && b2 >= K) || (a3 <= W && b3 >= K))
    {
        printf("YES");
    }
    else if ((a1 + a2 <= W && b1 + b2 >= K) || (a1 + a3 <= W && b1 + b3 >= K) || (a2 + a3 <= W && b2 + b3 >= K))
    {
        printf("YES");
    }
    else if (a1 + a2 + a3 <= W && b1 + b2 + b3 >= K)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
   
    return EXIT_SUCCESS;
}