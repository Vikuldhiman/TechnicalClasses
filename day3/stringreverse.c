#include<stdio.h>
#include<String.h>
int main()
{
    char str[20],temp;
    int left,right,len;
    printf("Enter your String ");
    gets(str);
    len=strlen(str);
    left=0;
    right=len-1;
    for(int i=left;i<=right;i++)
    {
        temp=str[i];
        str[i]=str[right];
        str[right]=temp;
        right--;
    }
    printf("%s",str);
    return 0;
}