#include<stdio.h>
#define p printf
main()
{
    int i;
    for(i=1;i<=7;i++)
    {
        if(i==4)p("*****");
        else p("*   *");
        p("\n");
    }

}