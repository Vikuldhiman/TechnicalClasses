#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20];
    int n=0,count=0,i;
    printf("enter your string ");
    gets(ch);
    fflush(stdin);
    for(i=0;i<ch[i]!='\0';i++)
    {
        n++;
    }
    for(i=0;i<n/2;i++)
    {
        if(ch[i]==ch[n-i-1])
        {
            count++;
        }
    }
    if(count==i){
        printf("string is Palindrome");
    }
    else{
        printf("String is not Palindrome");
    }
}