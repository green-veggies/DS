

#include <stdio.h>
int main()
{
    int arr[5] = {5, 4, 6, 8, 10};
    int *p;

    for (int i = 0; i <= 4; i++)
    {
        *p = &arr[i];
        printf("%d ", *p);
    }
    printf("\n%d", *(arr + 2));

    return 0;
}