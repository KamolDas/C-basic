#include<stdio.h>
int main()
{
    int x[4] ;    

    x[0] = 21;
    x[1] = 22;
    x[2] = 23;
    x[3] = 24;

    printf("hello speacial index %d  \n",x[0]);
    printf("hello speacial index %d  \n",x[1]);
    printf("hello speacial index %d  \n",x[4]);

    return 0;
}