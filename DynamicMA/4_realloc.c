
// realloc()
// ptr=realloc(ptr,newSize);

/* Allocate memory for 5 numbers.then dynamically increase it to 8 numbers
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int*)malloc(5*sizeof(int));
    printf("enter elements:");
    for(int i=0;i<5;i++){
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d ",ptr[i]);
    }
    ptr=realloc(ptr,8);
    printf("enter elements again :");
    for(int i=0;i<8;i++){
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<8;i++){
        printf("%d\n",ptr[i]);
    }
    return 0;
}