#include<stdio.h>
int main()
{
    int n,ch;
    ch=65;
    printf("enter your number ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 || i==n ||j==1 ||j==n){
                printf(" * ");
            }
            else{
                printf(" %c ",ch);
                ch++;
            }
        }
        printf("\n");
    }
}

// * * * * *
// * A B C *
// * D E F *
// * G H I *
// * * * * * 