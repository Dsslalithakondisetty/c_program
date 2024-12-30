#include<stdio.h>
int main()
{
    int i,j;
    char n='z';
    for(i=10;i>0;i--)
    {
        for(j=10;j>i;j--)
        {
            printf("%c\t",n--);
        }
        printf("\n");
    }
    return 0;
}
