#include<stdio.h>
int main()
{
    int num,last,first,count,swap;
    printf("Entet the number");
    scanf("%d",&num);
    last=num%10;
    count=log10(num);
    first=num/pow(10,count);
    swap=last;
    swap=swap*pow(10,count);
    swap=swap+ num%(int)pow(10,count);
    swap=swap-last;
    swap=swap+first;
    printf("%d\n",num);
    printf("%d",swap);


    return 0;
}
