#include<stdio.h>
int main()
{
    int ch=65;
    int n=1;
    for(int i=1;i<=4;i++)
    {
        for(int k=4;k>i;k--)
        {
            printf("   ");
        }
        for(int j=0;j<i;j++)
        {
            if(i%2==0)
            {
                printf("  %c  ",ch);
                ch++;
            }
            else
            {
                printf("  %d  ",n);
                n++;
            }
        }
        printf("\n");
    }
}

//            1  
//         A    B
//      2    3    4
//   C    D    E    F
