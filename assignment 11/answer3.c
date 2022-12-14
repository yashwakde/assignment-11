#include<stdio.h>
int prime(int n);
int  main()
{
    int n,z;
    printf("enter a number");
    scanf("%d",&n);
    z= prime(n);
    if(n == z)
    printf(" %d ,yes it is prime number ",z);
    else
    printf(" %d ,no it is not prime number",n);
}
int prime(int n)
 { int i,flag =0;
  for(i=2;i<n;i++)
  {
   if(n%i == 0)
    {
        flag =1;
         return i;
    }
   
  }

}