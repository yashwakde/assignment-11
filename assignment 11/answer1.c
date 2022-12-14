#include<stdio.h>
int lcm(int x,int y);
int  main()
{
    int x,y,z;
    printf("enter  two number");
    scanf("%d%d",&x,&y);
    z= lcm(x,y);
    printf("lcm of %d and %d is %d",x,y,z);
}
int lcm(int x,int y)
{
  int i,ans;
  for(i=1;i<=x*y;i++)
  {
   if(i%x == 0 && i%y == 0)
    {
        ans=i;
         return ans;
    }
   
}

}