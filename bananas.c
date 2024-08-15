#include <stdio.h>
int k, n, w;
int money = 0;

int main()
{
    scanf("%d %d %d", &k, &n, &w);

    money = k * w * (w + 1) / 2;        // công thức tính số tiền
    if (money - n > 0)
    {
        printf("%d");
    }
    else
    {
        printf("0");
    }
    return 0;
}