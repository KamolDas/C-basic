#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,root1,root2;
    a=2;
    b=1;
    c=-6;
    root1=(-b+sqrt (b*b-4*a*c))/(2*a);
    root2=(-b-sqrt (b*b-4*a*c))/(2*a);
    printf("root1 = %7.2f  root2= %7.2f\n",root1,root2);
}