#include<stdio.h>
int maxSub(int arr[],int n)
{
    int max=0;
    int curr=0;
    for(int i=0;i<n;i++)
    {
        curr=curr+arr[i];
        if(curr<0)
        {
            curr=0;
        }
        if(max<curr)
        {
            max=curr;
        }
    }
    return max;
}
int main()
{
    int arr[20];
    int n , ans;
    printf("enter your size ");
    scanf("%d",&n);
    printf("Enter your array elements ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    ans=maxSub(arr,n);
    printf("%d ",ans);
    return 0;
}