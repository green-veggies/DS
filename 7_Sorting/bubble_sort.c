

#include<stdio.h>

int bubbleSort(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int flag = 0;
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag++;
            }
        }
        if(flag==0){
            break;
        }
    }
    printf("Sorted Array is :\n");
    for(int k=0;k<n;k++){
        printf("%d\n",a[k]);
    }
}


int main()
{
    int size;
    printf("enter size of array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Insert Elements :\n");
    for(int i = 0 ; i<size;i++){
        scanf("%d",&arr[i]);
    }

    bubbleSort(arr,size);
    return 0;
}