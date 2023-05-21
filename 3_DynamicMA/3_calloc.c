
// calloc()

#include<stdio.h>
#include<stdlib.h>
int main()
{
    // float* ptr;
    // ptr=(float*)calloc(5,sizeof(float));
    // for(int i=0;i<5;i++){
    //     printf("%f\n",ptr[i]);
    // }

    /* WAP to allocate memory of size n,where n is entered by the user */
    int n;
    int *ptr;
    printf("Enter size of memory :");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        printf("%f\n",ptr[i]);
    }
    return 0;
}
