#include<stdio.h>
#define p printf
main()
{
    int i,j,k;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)p("%d",j);
        for(k=1;k<=5-i;k++)p("  ");
        for(j=i;j>=1;j--)p("%d",j);
        p("\n");
    }
    for(i=2;i<=5;i++)
    {
        for(j=1;j<=i;j++)p("%d",j);
        for(k=1;k<=5-i;k++)p("  ");
        for(j=i;j>=1;j--)p("%d",j);
        p("\n");
    }
}