#include<stdio.h>
int main()
{
    char s[200];
    scanf("%s",&s);
    int ctn[26]={0};
    for(int i=0;i<strlen(s);i++)
    {

        int value=s[i]- 'a';
        ctn[value]++;
        printf("%d\n",ctn[i]);
    }



    return 0;
}
