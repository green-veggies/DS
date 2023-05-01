
// Deletion from user given position//

#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of array :");
    scanf("%d",&n);
    int arr[50];
    printf("Enter elements in an array :");
    for(int i=0;i<=n-1;i++)
    scanf("%d",&arr[i]);

    // Deletion from position p //
    int p;
    printf("Enter position from where you want to delete :");
    scanf("%d",&p);
    if (p>=n || p<=0){
        printf("INVALID INPUT");
    }
    else{
        for(int i=p-1;i<=n-1;i++){
            arr[i]=arr[i+1];
        }
        n--;
        printf("Array = ");
        for(int i=0;i<=n-1;i++){
            printf("%d ",arr[i]);
        }
    }
    return 0;
} 