#include<stdio.h>
int main()
{
    int x[4] ;    

   for(int i =0;i < 5;++i)
   {
    printf(" enter value: ");
    scanf(" %d",&x[i]);
   }

    for(int i =0;i < 5;++i)
   {
    printf(" your value: %d \n",x[i]);
   }
    return 0;
}