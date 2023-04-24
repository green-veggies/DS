
// Insertion

#include<stdio.h>
int main()
{
    int size,arr[50],pos,num;
    printf("enter size of array :");
    scanf("%d",&size);
    if(size>50) printf("OVERFLOW");
    else
    {
        printf("Enter data you want to insert :");
        scanf("%d",&num);
        printf("Enter position :");
        scanf("%d",&pos);
        for(int i=size-1;i>=pos-1;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[pos-1]=num;
        size++;
        for(int i=0;i<=size-1;i++)
            printf("%d",arr[i]);
    }
    return 0;
}