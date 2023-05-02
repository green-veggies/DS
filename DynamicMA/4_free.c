
// free()

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)calloc(10, sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        printf("%d", ptr[i]);
    }
    printf("\n");
    free(ptr);
    ptr = (int *)calloc(3, sizeof(int));
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", ptr[i]);
    }
    return 0;
}