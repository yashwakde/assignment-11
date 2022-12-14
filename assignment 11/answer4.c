#include<stdio.h>
int nextprime(int n);
int  main()
{
    int n,z;
    printf("enter a number");
    scanf("%d",&n);
    z= nextprime(n);
    printf("next number is %d",z);
    
}
int nextprime(int n)
 { int i,j,count=0;
  for( i=n;i>0;i++)
    {
        count=0;
        for( j=1;j<=i;j++)
        {
            if(i%j==0) 
              count++;
            
        }
            if(count == 2)
            {
                break;
                
            }
        
    }
    return i;
}