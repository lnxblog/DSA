#include <stdio.h>

int main()
{
    int arr[]={2,1,0,0,0,1,2,1};
    int n=sizeof(arr)/sizeof(int);
    
    int l=0,r=n-1,curr=0;
    
    while(curr<=r)
    {
        if(arr[curr]==0)
        {
            arr[curr]=arr[l];
            arr[l]=0;
            l++;
            curr++;
        }
        else if(arr[curr]==2)
        {
            arr[curr]=arr[r];
            arr[r]=2;
            r--;
        }
        else
        curr++;
        
    }
    
    printf("%d %d\n",l,r);
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    
    return 0;
}
