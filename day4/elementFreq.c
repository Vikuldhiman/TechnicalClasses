#include<stdio.h>
int main()
{
    int arr[20];
    int n;
    int c = 0;
    int count;
    printf("enter your size ");
    scanf("%d",&n);
    printf("enter your integers ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int freq[n];
    for(int i=0; i < n; i++){
        count=1;
        
        for(int j = i+1; j < n; j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j]=c;
            }
        }
        
        if(freq[i]!= c){
            freq[i] = count;
        }
    }
    for(int p=0;p<n;p++)
    {
        if(freq[p]!=c)
        {
            printf("( %d  %d ),",arr[p],freq[p]);
        }
    }
    return 0;
}  