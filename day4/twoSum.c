#include<stdio.h>
int main()
{
    int arr[20];
    int n, target,temp,i,j,k;
    int count=0;
    printf("enter your size ");
    scanf("%d",&n);
    printf("Enter your %d elements ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter your target Value ");
    scanf("%d",&target);

    for(j=0;j<n;j++)
    {
        temp=target-arr[j];
        for(count=0,k=0;k<n;k++)
        {
            if(temp==arr[k])
            {
                printf("%d ", k);
                count++;
            }
        }
        printf("mm %d  ..",count);
    }
    
    return 0;
}