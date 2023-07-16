

#include<stdio.h>

int main()
{
    int n,found = 0;
    printf("Enter size of array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in an array :");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    // Linear Searching

    int data;
    printf("Enter element you want to search");
    scanf("%d",&data);

    for(int i=0;i<n;i++){
        if(arr[i]==data){
            printf("Element found at %d index.",i);
            found++;
            break;
        }
    }    
    if(found == 0){
        printf("Element not Found");
    }
    return 0;
}