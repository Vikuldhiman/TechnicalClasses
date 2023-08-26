#include<stdio.h>
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i%2==0)
            {
                
                printf(" %c ",97+i);
            }
            else{
                printf(" %c ",65+i);
            }
        }
        printf("\n");
    }
    return 0;
}

// a a a a a 
// B B B B B 
// c c c c c 
// D D D D D 
// e e e e e 



//  if(j%2==0)
//             {
//                 printf(" * ");
//             }
//             else
//             {
//                 printf(" # ");
//             }
//         }
//         printf("\n");
//  #  *  #  *  # 
//  #  *  #  *  #
//  #  *  #  *  #
//  #  *  #  *  #
//  #  *  #  *  #