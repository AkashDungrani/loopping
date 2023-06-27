#include<stdio.h>
#define p printf
main()
{
    int i;
    for(i=1;i<=7;i++)
    {
        if(i==1)p(" ***");
        else if(i==5)p("* * *");
        else if(i==7)p("  **  *");
        else p("*   *");
        p("\n");
    }

}