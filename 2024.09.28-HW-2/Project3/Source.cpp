#include <iostream> 

int main(int argc, int argv[])
{
    int x1 = 0;
    int y1 = 0;
    int r1 = 0;
    
    scanf_s("%d", &x1);
    scanf_s("%d", &y1);
    scanf_s("%d", &r1);

    int x2 = 0;
    int y2 = 0;
    int r2 = 0;
    scanf_s("%d", &x2);
    scanf_s("%d", &y2);
    scanf_s("%d", &r2);

    int dx = x2 - x1;
    int dy = y2 - y1;
    int S = dx * dx + dy * dy;

    int Rs = r1 + r2;
    int Rr = abs(r1 - r2);

    if (S <= Rs * Rs && S >= Rr * Rr)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return EXIT_SUCCESS;
}