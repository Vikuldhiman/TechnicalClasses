#include<stdio.h>
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(j%2==0)
            printf(" m ");
            else
            printf(" o ");
        }
        printf("\n");
    }
}

//  m  o  m  o  m 
//  m  o  m  o  m
//  m  o  m  o  m
//  m  o  m  o  m
//  m  o  m  o  m