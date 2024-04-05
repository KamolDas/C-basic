#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,root1,root2;
    printf("enter a,b,c value:");
    scanf("%f %f %f",&a, &b, &c);
    root1=(-b+sqrt (b*b-4*a*c))/(2*a);
    root2=(-b-sqrt (b*b-4*a*c))/(2*a);
    printf("root1 = %4.2f  root2= %4.2f\n",root1,root2);
}