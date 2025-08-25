#include <stdio.h>
#include <stdlib.h>

int var1 = 0;

void main()
{
  int var2 = 1;
  int *var3 = (int *)malloc(sizeof(int)); // Note, since we are using malloc(), var3 will be a
                                          // pointer into the heap!
                                          // So the question is, where is the pointer stored?
  *var3 = 2;
  printf("(var1) Address: %x; Value: %d\n", &var1, var1);
  printf("(var2) Address: %x; Value: %d\n", &var2, var2);
  printf("(var3) Address: %x; Address: %x; Value: %d\n", &var3, var3, *var3);
}

// Var 1 is a global variable
// Var 2 is a local variable stored on the stack
// Var 3 is a pointer to an int, which is stored on the stack, but it points to an int in the heap


