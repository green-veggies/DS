# Dynamic memory allocation #

## FOR USING DMA WE HAVE TO USE `#include<stdlib.h>` ##

- It is a way to allocate memory to data structure during the runtime
 
 ## Function for DMA ##
 1. malloc() : memory allocation
 2. calloc() : contiguous allocation
 3. free() : deallocation
 4. realloc() : re-allocation

 ## MALLOC() ##
 - takes number of bytes to be allocated and return a pointer of type -void-
 ```ptr=(int*)malloc(5*sizeof(int));```
     - As we know `sizeof(int)` is equal to `4`, so `5*4=20`bytes of memory will be allocated,
     - We used `(int*)` to store 5 integers in `int` type 

## CALLOC() ##
- Continuous allocation
- Initializes with 0
`ptr=(int*)calloc(5,sizeof(int));`
- number of locations = 5, per location size = for int = 5
- If you want to initialize with 0 then use `calloc()` always

## FREE() ##

- `free()` is a function in the C programming language that is used to release memory that was dynamically allocated at runtime using `malloc()`, `calloc()`, or `realloc()`. When you allocate memory dynamically, you are responsible for freeing that memory once you are done using it. If you do not free the memory, your program will leak memory, which can cause your program to run out of memory over time.

The syntax for `free()` function is:

```
free(ptr);
```

Here, `ptr` is a pointer to the first byte of the memory block that was allocated using `malloc()`, `calloc()`, or `realloc()`.

For example, if you allocate memory for an integer variable using `malloc()` as follows:

```
int* ptr;
ptr = (int*) malloc(sizeof(int));
```

Once you are done using the memory, you should free it using the `free()` function as follows:

```
free(ptr);
```

Similarly, if you allocate memory for an array of integers using `calloc()` as follows:

```
int* ptr;
ptr = (int*) calloc(10, sizeof(int));
```

Once you are done using the memory, you should free it using the `free()` function as follows:

```
free(ptr);
```

And if you allocate memory for an array of integers using `realloc()` as follows:

```
int* ptr;
ptr = (int*) realloc(ptr, 20 * sizeof(int));
```

Once you are done using the memory, you should free it using the `free()` function as follows:

```
free(ptr);
```

It is important to note that after you free memory using `free()`, the memory block is no longer accessible and any attempt to access it can result in undefined behavior. Therefore, it is recommended to set the pointer to `NULL` after freeing the memory to avoid any accidental access to freed memory.

```
free(ptr);
ptr = NULL;
```

## realoc() ##
* `realloc()` is a function in the C programming language that is used to dynamically allocate or reallocate memory at runtime. It allows you to resize the memory block that was previously allocated using `malloc()`, `calloc()`, or `realloc()`.

The syntax for `realloc()` function is:

```
ptr = realloc(ptr, new-size);
```

Here, `ptr` is a pointer to the first byte of the memory block that was previously allocated, and `new-size` is the new size of the memory block in bytes. If `new-size` is smaller than the previous size of the memory block, `realloc()` will shrink the memory block. If `new-size` is larger than the previous size of the memory block, `realloc()` will either extend the memory block in place or allocate a new memory block and copy the contents of the old memory block to the new memory block.

For example, suppose you initially allocate memory for an array of 10 integers using `malloc()` as follows:

```
int* ptr;
ptr = (int*) malloc(10 * sizeof(int));
```

You can use `realloc()` to resize the memory block to 20 integers as follows:

```
ptr = realloc(ptr, 20 * sizeof(int));
```

Here, `ptr` is a pointer to the first byte of the memory block that was previously allocated, and `realloc()` resizes the memory block to 20 integers by either extending the memory block in place or allocating a new memory block and copying the contents of the old memory block to the new memory block.

It is important to note that `realloc()` may return a new pointer to the memory block if it had to allocate a new memory block to resize the old memory block. Therefore, you should always use the returned pointer to access the memory block, and you should not assume that the old pointer is still valid.

Also, like `malloc()` and `calloc()`, `realloc()` dynamically allocates memory, and once you are done using the dynamically allocated memory, you should free it using the `free()` function to release the memory back to the system.

```
free(ptr);
```

Here, `ptr` is a pointer to the first byte of the memory block that was allocated or reallocated using `malloc()`, `calloc()`, or `realloc()`. The `free()` function releases the memory block back to the system, making it available for future use.