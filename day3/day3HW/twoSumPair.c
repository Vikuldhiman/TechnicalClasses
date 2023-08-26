#include<stdio.h>
int main()
{
    int arr[20];
    int n,target;
    printf("Enter the Size of Array ");
    scanf("%d",&n);
    printf("Enter your %d Integer in Array \n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter your Target value ");
    scanf("%d",&target);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                printf("%d %d  ",arr[i],arr[j]);
            }
        }
    }
    return 0;
}