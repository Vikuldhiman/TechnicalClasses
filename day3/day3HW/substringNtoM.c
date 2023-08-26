#include<stdio.h>
#include<String.h>
int main(){
    char str[20];
    char temp[20];
    int st,ed;
    int n,j=0;
    printf("Enter your String ");
    gets(str);
    printf("Enter starting position ");
    scanf("%d",&st);
    printf("Enter ending position ");
    scanf("%d",&ed);
    n=strlen(str);
    for(int i=0;i<n;i++){
        if(i==st-1 && i<=ed-1){
            temp[j]=str[st-1];
            j++;
            st++;
        }
    }
    fflush(stdin);
    printf("%s",temp);
    return 0;
    // puts(temp);  it give garbage value ?
}