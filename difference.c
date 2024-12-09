#include <stdio.h>
int main() 
{
    int i,n,sumeven=0,sumodd=0;
    printf("Enter the n value:");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        if(i%2==0)
        {
        sumeven=sumeven+i;
    }
    else
    {
        sumodd=sumodd+i;
    }
    }
        printf("The difference is %d\t",sumeven-sumodd);
    return 0;
}
