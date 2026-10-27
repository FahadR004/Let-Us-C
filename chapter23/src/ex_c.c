#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
  int i;
  if (argc == 1) {
    printf("ERROR: Missing arguments!\n");
    return 1;
  }
  printf("Number of arguments recieved: %d\n", argc);
  for (i = 0; i < argc; i++) {
    printf("This is the argument (%d) recieved: %s\n", i, argv[i]);
  }

  return 0;
}