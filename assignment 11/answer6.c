#include<stdio.h>
void prime(int n,int a);
int  main()
{
    int n,a;
    printf("enter a number");
    scanf("%d%d",&n,&a);
    prime(n,a);
   
}
 void prime(int n,int a)
 { int i,j;
 for(int i=a;i<n;i++)
    {
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
                break;
            else if(i==j+1)
                printf("%d ",i);
        }
    }
 
        
}
  