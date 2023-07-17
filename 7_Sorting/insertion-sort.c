
#include<stdio.h>

void insertionSort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=a[i];
        int j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("Sorted Array :");
    for(int k=0;k<n;k++){
        printf("%d ",a[k]);
    }
}

int main()
{
    int size;
    printf("Enter size of array");
    scanf("%d",&size);

    int arr[size];
    printf("Insert Elements");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    insertionSort(arr,size);
    return 0;
}