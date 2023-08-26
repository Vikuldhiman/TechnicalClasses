#include<stdio.h>
#include<String.h>
int main()
{
    char str1[20];
    char str2[20];
    int n1=0,n2=0;
    int count=0;
    printf("Enter your First String ");
    gets(str1);
    printf("Enter your Second String ");
    gets(str2);
    n1=strlen(str1);
    n2=strlen(str2);
    if(n1==n2)
    {
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                if(str1[i]==str2[j])
                {
                    count=1;
                    // count++;
                }
            }
        }
        if(count==1)
        // if(count==n1 && count==n2)
        {
            printf("Strings are Anagram string");
        }
        else{
            printf("String are different");
        }
    }
    else{
        printf("Strings are not Anagram string");
    }
    return 0;
}