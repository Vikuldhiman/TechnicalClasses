#include<stdio.h>
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4;j++)
        {
            printf("%d",j); 
            // printf("*"); printf("%d",i); printf("%d",j);
        }
        printf("\n");
    }
}

// 1234                      ****                    1111
// 1234    printf("%d",j);   ****     printf("*");   2222   printf("%d",i);
// 1234                      ****                    3333
// 1234                      ****                    4444


