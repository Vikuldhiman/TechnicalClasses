#include<stdio.h>
#include<conio.h>
int main(){
    char str[20],ch;
    int pos;
    printf("Enter your string");
    gets(str);
    printf("Enter your Position");
    scanf("%d",&pos);
    str[pos-1]=str[pos-1]-32;
    printf("%s",str);
    // ch=str[pos-1];
    // ch=ch-32;
    // str[pos-1]=ch;
    // puts(str);
    return 0;
}