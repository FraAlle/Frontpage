#POINTERS
"int *P" is not a int declaration, the * means that p is a pointer and it'll be used to store info about the location of the data type int.
p is an variable of type "pointer to int", the only values that it accepts are numbers.
U can assign 0 to a pointer(null pointer), for not be confused programmers use p = nullptr as p = 0.
to assign to p an true pointer we do this: p = &i. p will take the pointer of the i variable.

#DEFERENCE A POINTER
The pointer variable becomes synonymous with the value it points to. it can be also an expression.
Using "*p" we take the value assigned to that pointer, meanwhile using "p" we will take the pointer.
*p = 15 will assign at the pointer indicated the value 15.
ANY_TYPE *pointer means that pointer is ANY_TYPE type and the * pointer is of ANY_TYPE
if u try to give an variable the sizeof of an nullptr, it will have 8 if u use 64-bit or 4 if u use 34-bit.

#POINTERS && VECTORS
the method data() used with a vector returns the pointer pointing to the first element of the vector(vect.data()).

#OPERATIONS
-add int, gives an pointer
-substract int, gives an pointer
-substract a pointer from a pointer, gives an int. both pointers have to point to the same type, the addresses are substracted and then divided by the size of the type pointed to by the pointers
-comparing two pointers, gives a int
each time u sum or substract int to pointers, it will increase by 4 * int, bc the space for each int is 4 bytes
if we want to assigna to a variable the value of itself but in the next address we may use value = *(ptr+1) and can be written like this ptr[1].
We can create an pointer with the type of void (void *ptr;) this is called amorphous pointer bc it ca ne any value of any type.