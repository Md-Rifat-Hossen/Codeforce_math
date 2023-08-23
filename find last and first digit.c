#include <stdio.h>
#include <math.h>
int main()
{

    int num, last, first, count;
    scanf("%d", &num);
    count = log10(num);
    first = num / pow(10, count);
    last = num % 10;

    // printf("%d \n%d\n",first,last);

    int sum = first + last;
    printf("%d", sum);

    return 0;
}
