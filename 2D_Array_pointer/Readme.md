# Pointer in 2D ARRAY 3

- 2D array is a contiguous block of memory, where each row is stored one after the other. A pointer to a 2D array in C can be declared as follows:
```
int arr[3][4]; // 2D array
int (*ptr)[4]; // pointer to a 1D array of size 4
ptr = arr; // assign the address of the first row to the pointer
```
      Here, `ptr` is a pointer to a 1D array of size 4. The size of the array must be specified in the pointer declaration, which is `4` in this case since each row in the 2D array has 4 elements.

### Accessing element in 2D array ###
```
int x = ptr[i][j];
```
+ here `i` and `j` are row ad column indices
* We can also use pointer arithmatic to access the element directly:
    ```
    int x = *((ptr + i) + j);
    ```
+ Here `ptr+i` gives the address of the `i`th row,and adding `j` to it gives the address of `j`th element in that row.Finally we use`*` to dereference the address to get the value of the element.