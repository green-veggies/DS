- Array is a collection of same type of datatype.
- All elements in an array are stored in continuous locations i.e. one after the another.
- Array can be initialised by two types : 
                                        1. At compilation time : At the time of declaration, elements will be specified.
                                        2. At runtime : User can enter size and elements of the array.
- Once declared size of array cannot be changed.
- For accessing particular element : array_name[index_num].
- If array is created but has no value then it will store garbage value.

# Traversal
- Traversing : visiting every element in array and printing those elements

# Insertion
- There is no upper bound check in array so if the insertion is crossing the size that has to be fixed by programmer.
- For this if else statement is used:
     - `if` size greater than **upperbound limit** print **overflow**
     - `else` insert 

``` 
 #include <stdio.h>
 #define MAX_SIZE 100
 int main() {
    int arr[MAX_SIZE], size, pos, num;

    // Read array size from user
    printf("Enter array size (max %d): ", MAX_SIZE);
    scanf("%d", &size);

    // Read array elements from user
    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Read position and number to be inserted
    printf("Enter position to insert element (1 to %d): ", size+1);
    scanf("%d", &pos);
    printf("Enter number to insert: ");
    scanf("%d", &num);

    // Shift elements to the right
    for (int i = size-1; i >= pos-1; i--) {
        arr[i+1] = arr[i];
    }

    // Insert element at the specified position
    arr[pos-1] = num;

    // Update array size
    size++;

    // Print the updated array
    printf("Updated array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
 } 
 ```

- The program first declares an array arr of maximum size MAX_SIZE and initializes variables size, pos, and num. The program then prompts the user to input the size of the array and the array elements. It then prompts the user to input the position at which the element is to be inserted and the number to be inserted.

The program then shifts the elements of the array to the right from the specified position to the end of the array to make space for the new element. Finally, the program inserts the new element at the specified position and prints the updated array.

Note that the program assumes that the user inputs a valid position between 1 and size+1 inclusive. It also assumes that the array is not already full, and the new element will fit within the array bounds.And for checking this we can add `if-else` as mentioned above and in [This program](https://github.com/green-veggies/DS/blob/master/Array/2_insertion.c).

### Array at beginning ###

```
    #include <stdio.h>
    #define MAX_SIZE 100 // Define the maximum size of the array
    int main() {
    int arr[MAX_SIZE], size, num;

    // Read array size from user
    printf("Enter array size (max %d): ", MAX_SIZE);
    scanf("%d", &size);

    // Read array elements from user
    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Read number to be inserted at the beginning
    printf("Enter number to insert at beginning: ");
    scanf("%d", &num);

    // Shift elements to the right
    for (int i = size-1; i >= 0; i--) {
        arr[i+1] = arr[i];
    }

    // Insert element at the beginning
    arr[0] = num;

    // Increment array size
    size++;

    // Print the updated array
    printf("Updated array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
    }
```

### Array at the end ###

```
    #include<stdio.h>
    int main()
    {
        int n;
        printf("Enter size of array :");
        scanf("%d",&n);
        int arr[50];
        printf("Enter elements :");
        for(int i=0;i<=n-1;i++){
            scanf("%d",&arr[i]);
        }
        // INSERTING AT THE END //
        int x;
        printf("Enter element you want to insert :");
        scanf("%d",&x);
        n++;
        arr[n-1]=x;
        printf("Array is :");
        for(int i=0;i<=n-1;i++){
            printf("%d ",arr[i]);
        }
        return 0;
}
```
- For inserting in the back of the array. The array wil remain same we just have to increase the size of the array and enter the element

# Deletion #

- For deletion we will simply run `if-else` statement where `if` postion entered is greater than size of array or less equal to zero then `printf("INVALID INPUT");`
     - else we will run a for loop :
         - This for loop is shifting all the elements of the array to the left by one position starting
        from the position `p-1` (since array indexing starts from 0) and ending at the last position
        `n-1`. This effectively deletes the element at position `p` by overwriting it with the next
        element in the array.

```
// Deletion from user given position//

#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of array :");
    scanf("%d",&n);
    int arr[50];
    printf("Enter elements in an array :");
    for(int i=0;i<=n-1;i++)
    scanf("%d",&arr[i]);

    // Deletion from position p //
    int p;
    printf("Enter position from where you want to delete :");
    scanf("%d",&p);
    if (p>=n || p<=0){
        printf("INVALID INPUT");
    }
    else{
        for(int i=p-1;i<=n-1;i++){
            arr[i]=arr[i+1];
        }
        n--;
        printf("Array = ");
        for(int i=0;i<=n-1;i++){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
```