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
 

    

