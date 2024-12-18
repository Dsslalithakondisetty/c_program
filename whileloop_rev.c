#include<stdio.h>
int main()
{
    int n,rev=0,rem;
    printf("Enter the n value:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("rev of the number is %d",rev);
    return 0;
}
