#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a % b == 0)
    {
        printf("This number is diviider\n");
    }
    else
        printf("This is number is not devior\n");
    return 0;
}