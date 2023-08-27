#include<stdio.h>
int main()
{
    int arr[20];
    int n,pos;
    int temp[20];
    int c = 1;
    printf("enter your size ");
    scanf("%d",&n);
    printf("enter your integers ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter your specific position ");
    scanf("%d",&pos);
    // int temp[n];
    for(int j=0;j<n;j++)
    {
        temp[j]=arr[j];
        if(j >= pos){
            temp[j] = arr[n - c];
            c++;
        }
    }
    for(int p=0;p<n;p++)
    {
        printf("%d ",temp[p]);
    }
    return 0;
}