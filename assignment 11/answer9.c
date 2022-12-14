#include<stdio.h>
int fun(int n);
int main()
{
    int n,square;
    printf("enter a number");
    scanf("%d",&n);
    square = fun(n);
    printf("%d is a square",square);
}

int fun(int n)
{
 
 return n*n;

}