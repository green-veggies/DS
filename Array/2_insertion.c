
// Insertion

/*#include<stdio.h>
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
}*/

#include<stdio.h>
int main()
{
    int x,pos,arr[50],size;
    printf("Enter size of array :");
    scanf("%d",&size);
    printf("Enter elements in array");
    for(int i=0;i<=size-1;i++){
        scanf("%d",&arr[i]);
    }
    if(size>=50)
    printf("Stack Overflow");
    else{
        printf("Enter position :");
        scanf("%d",&pos);
        printf("enter element :");
        scanf("%d",&x);
        for(int i=size-1;i>=pos-1;i--){
            arr[i+1]=arr[i];
        }
        arr[pos-1]=x;
        size++;
        for(int i=0;i<=size-1;i++)
        printf("%d ",arr[i]);
    }
    return 0;
}