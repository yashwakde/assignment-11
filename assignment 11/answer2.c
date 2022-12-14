#include<stdio.h>
int hcf(int x,int y);
int  main()
{
    int x,y,z;
    printf("enter  two number");
    scanf("%d%d",&x,&y);
    z= hcf(x,y);
    printf(" hcf of %d  and %d is %d",x,y,z);
}
int hcf(int x,int y)
 { int i,ans;
  for((i=(x<y)?x:y);i>=1;i--)
  {
   if(x%i == 0 && y%i == 0)
    {
        ans=i;
         return ans;
    }
   
  }

}