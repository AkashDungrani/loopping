#include<stdio.h>
main()
{
    int i,j,k;
    for(i=5; i>=1  ;i--)
    {
        for(k=1;k<=5-i;k++)printf("_");
        for(j=i;j>=1;j--)printf("*");
        printf("\n");
    }
}