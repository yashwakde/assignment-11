#include<stdio.h>
int sumseries(int n);
int main()
{
    int num,sum;
    printf("enter a number");
    scanf("%d",&num);
    sum = sumseries(num);
    printf("%d",sum);
    return 0;
}
int sumseries(int n)
{
  int  sum2 =0,f=1,i;
  for(i=1;i<=n;i++)
  {
    f=f*i;
    sum2=sum2+(f/i);
  }
  return sum2;
}


