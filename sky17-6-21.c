#include<stdio.h>
main()
{
    int i,j,k;
    for(i=1;i<=5 ;i++)
    {
      for(k=1;k<=i-1;k++)printf("_");  
      for(j=i;j<=5 ;j++)
      {
        if(i%2==0)
                 {
                     printf("0");
                 }
        else    
                 {
                     printf("1");
                 }         
      }
      printf("\n");
    }

}