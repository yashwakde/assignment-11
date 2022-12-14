#include<stdio.h>
void fibonacci(int num,int fib1,int fib2,int fib3);
int  main()
{
    int num,fib1= 0,fib2 = 1,fib3;
    printf("enter a number");
    scanf("%d",&num);
    fibonacci(num,fib1,fib2,fib3);
   
}
 void fibonacci(int num,int fib1,int fib2,int fib3)
 { 
    printf("%d\n",fib1);
    printf("%d\n",fib2);
    
    int count =0;
        count=2;
     while(count<num)
    {
      fib3=fib1+fib2;
      count++;
      printf("%d\n",fib3);
      fib1=fib2;
      fib2=fib3;
    }
}
  