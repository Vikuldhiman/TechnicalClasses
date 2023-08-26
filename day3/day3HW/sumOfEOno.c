#include<stdio.h>
int main()
{
    int n,temp;
    int sumOdd=0,sumEven=0;
    printf("Enter your Number ");
    scanf("%d",&n);
    while(n!=0){
    temp=n%10;
    n=n/10;
    if(temp%2==0)
    {
        sumEven=sumEven+temp;
    }
    else
    {
        sumOdd=sumOdd+temp;
    }
    }
    printf("Sum of Even number %d \nSum of Odd number %d",sumEven,sumOdd);
    return 0;
}