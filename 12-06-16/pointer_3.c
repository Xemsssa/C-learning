#include <stdio.h>

int main() {
  int n = 10;

  /* your code goes here */
  int* pointer_to_n = &n;
    printf(" n = %d\n", n);
    printf("adress_n = %d\n", &n);
    
    printf(" pointer_to_n = %d\n", *pointer_to_n);
    printf(" adress_pointer_to_n = %d\n", &pointer_to_n);
    
  //for(int i)  
    

  /* testing code */
  if (pointer_to_n != &n) return 1;
  if (*pointer_to_n != 11) return 1;

  printf("Done!\n");
  return 0;
}