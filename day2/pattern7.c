#include<stdio.h>
int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf(" %d ",j);
        }
        printf("\n");
    }
}

//  1  2  3  4  5 
//  1  2  3  4
//  1  2  3         printf(" %d ",j);
//  1  2
//  1


//  5  5  5  5  5 
//  4  4  4  4
//  3  3  3           printf(" %d ",i);
//  2  2
//  1