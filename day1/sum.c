#include<stdio.h>

int sumwithfunc(int x, int y);
int main()
{
    int a,b,sum;
    printf("enter your first number");
    scanf("%d",&a);
    printf("enter your second number");
    scanf("%d",&b);
    sum=sumwithfunc(a,b);
    printf("%d",sum);
    return 0;
}
int sumwithfunc(int x, int y)
{
    int sum;
    sum=x+y;
    return sum;
}