#include<stdio.h>
#define p printf
main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)p("%d",j);
        for(k=1;k<=5-i;k++)p(" ");
        p("\n");
    }
    for(i=4;i>=1;i--)
    {
        for(j=1;j<=i;j++)p("%d",j);
        for(k=1;k<=5-i;k++)p(" ");
        p("\n");
    }
}
