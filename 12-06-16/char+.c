#include <stdio.h>

int main() {
  /* define first_name */
  char* first_name = "John";
  /* define last_name */
  char last_name[4] = "Doe"; 
    
  char name[100];

  /* testing code */
  if (strncmp(first_name, "John") != 0) return 1;
  if (strncmp(last_name, "Doe") != 0) return 1;

  last_name[0] = 'B';
  sprintf(name, "%s %s", first_name, last_name);
  if (strncmp(name, "John Boe", 100) == 0) {
      printf("Done!\n");
  }

  return 0;
}