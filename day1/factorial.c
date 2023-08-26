#include<stdio.h>
int fact(double n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
    double res,num;
    printf("Enter your Number");
    scanf("%d",&num);
    res=fact(num);
    printf("Factorial of %d is %d",num,res);
    return 0;
}