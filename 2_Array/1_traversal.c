
// Traversal in an Array
// TRAVERSING : visiting every element in array and printing those elements

#include<stdio.h>
int main()
{
    int n,arr[n];
    printf("Enter size of array:");
    scanf("%d",&n);
  
    printf("Enter elements:");
    for (int i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Your elements are:");
    for(int i=0;i<=n-1;i++) printf("%d",arr[i]);
    
    return 0;
}