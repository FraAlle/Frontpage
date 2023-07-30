#MEMORY USAGE C++
Is possible to control how much memory and when is used, is important when u don't know the size of the data to be processed is.
f.e. 
float *array = new float[20];
int *count = new int;

the new keyword returns a pointer of the type especificated, the new space will contain only garbage bc is nos initiated.

if we don't need more the memory we can erase it with delete
f.e.
delete [] array;
delete count;
is possible to relaese the whole memory but not part of it. after a delete all the pointers that point to that data becomes illegal.