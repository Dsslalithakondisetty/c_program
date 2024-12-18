#include<stdio.h>
int main()
{
    int n,sum=0,rem,temp;
    printf("Enter the n value:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    printf("The temp value is %d\n",temp);
    if(temp==sum)
    {
        printf("The number is armstrong");
    }
    else
    {
        printf("The number is not armstrong");
    }
    return 0;
}
