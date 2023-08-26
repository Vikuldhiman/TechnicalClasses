#include<stdio.h>
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int k=4;k>i;k--)
        {
            printf("   ");
        }
        for(int j=0;j<i;j++)
        {
            printf("  %d  ",i);
        }
        printf("\n");
    }
}

//            1  
//         2    2
//      3    3    3
//   4    4    4    4