

#include<stdio.h>

int binSearch(int a[],int size,int data)
{
    int l=0,r=size-1;
    while(l<r)
    {
        int mid = (l+r)/2;
        if(data == a[mid]){
            printf("Element found at index %d",mid);
            break;
        }
        else if( data < a[mid])
            r = mid - 1;
        else    
            l = mid+1;
    }
}

int main(){
    int n;
    printf("enter size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("INsert Elements :\n");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // searching for x

    int x;
    printf("Enter element you want to search");
    scanf("%d",&x);
    binSearch(arr,n,x);
}