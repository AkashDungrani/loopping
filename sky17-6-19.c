#include<stdio.h>
main()
{
    int i,j,k;
    for(i=5;i>=1 ;i--)
    {
      for(k=1;k<=5-i;k++)printf("_");  
      for(j=i;j>=1 ;j-- )
      {
        if(j%2==0)
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