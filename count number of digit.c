#include<stdio.h>
int main()
{
    //Input a number from user. Store it in some variable say num.
//Initialize another variable to store total digits say digit = 0.
//If num > 0 then increment count by 1 i.e. count++.
//Divide num by 10 to remove last digit of the given number i.e. num = num / 10.
//Repeat step 3 to 4 till num > 0 or num != 0.
   int i,n;
   int count=0;
   scanf("%d",&n);
   for(i=n;i>0;i=i/10)
   {
       count++;
   }
   printf("%d",count);
    return 0;
}
