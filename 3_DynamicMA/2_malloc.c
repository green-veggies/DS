// malloc()

#include <stdio.h>
#include <stdlib.h>
int main()
{
    // int *ptr;
    // ptr=(int*)malloc(5*sizeof(int));
    // ptr[0]=5;
    // ptr[1]=41;
    // ptr[2]=50;
    // ptr[3]=65;
    // ptr[4]=75;
    // for(int i=0;i<=4;i++){
    //     printf("%d\n",ptr[i]);
    // }

    /*WAP to allocate memory store prices*/
    float *ptr;
    ptr = (float *)malloc(sizeof(float));
    ptr[0] = 56;
    ptr[1] = 25;
    ptr[2] = 78;
    ptr[3] = 93;
    ptr[4] = 41;
    for (int i = 0; i <= 4; i++)
    {
        printf("%.2f\n", ptr[i]);
    }
    return 0;
}
