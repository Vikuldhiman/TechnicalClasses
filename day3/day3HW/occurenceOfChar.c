#include<stdio.h>
#include<String.h>
int main(){
    char str[20];
    char ch;
    int n=0,count=0;
    printf("Enter your string ");
    gets(str);
    printf("Enter your character ");
    scanf("%c",&ch);
    for(int i=0;i<str[i]!='\0';i++) 
    // this loop is for find length of string without using predefined functions
    {
        n++;
    }
    // n=strlen(str);
    for(int i=0;i<n;i++)
    {
        if(ch==str[i])
        {
            count++;
        }
    }
    printf("%d",count);
}