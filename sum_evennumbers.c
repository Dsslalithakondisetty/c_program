#include <stdio.h>
int main() 
{
    int i,n,sum=0;
    printf("Enter the n value:");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        if(i%2==0)
        {
        sum=sum+i;
    }
    }
        printf("The sum is %d\t",sum);
    return 0;
}
