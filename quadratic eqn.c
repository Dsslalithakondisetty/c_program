#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float s,r1,r2;
    printf("enter the values of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    s=(b*b)-(4*a*c);
    printf("Print the value of s is %f\n",s);
    if(s>0)
    {
        printf("The roots are real and distinct");
        r1=(-b+sqrt(s))/(2*a);
        r2+(-b-sqrt(s))/(2*a);
    }
    else if(s==0)
    {
        printf("The roots are real and equal");
        r1=r2=(-b)/(2*a);
    }
    else
    {
        printf ("The roots are imaginary");
    }
    return 0;
}
