#include<stdio.h>
main()
{
    int i,j,k;
    for(i=1; i<=5  ;i++)
    {
        for(k=1;k<=5-i;k++)printf("_");
        for(j=i;j>=1;j--)printf("%d",j);
        printf("\n");
    }
}