#include<stdio.h>
int main()
{
    int n;
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j<=5;j++)
        {
            printf(" %d ",i);
        }
        printf("\n");
    }
}

//  1  2  3  4  5 
//  2  3  4  5      for(int j=i;j<=5;j++)
//  3  4  5            printf(" %d ",j);
//  4  5
//  5

//  1  1  1  1  1 
//  2  2  2  2          for(int j=i;j<=5;j++)
//  3  3  3                printf(" %d ",i);
//  4  4
//  5