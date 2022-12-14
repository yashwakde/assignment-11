#include<stdio.h>
void prime(int n);
int  main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    prime(n);
   
}
 void prime(int n)
 { int i,x=2;
 while(n)
 { for( i=2;i<=x;i++)
        {
            if(x%i==0) 
             break;
         }
       if(i == x)
       {
        printf("%d  ",i);
        n--;
       
        
       }
         x++;
 }
        
}
  