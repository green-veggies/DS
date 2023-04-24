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