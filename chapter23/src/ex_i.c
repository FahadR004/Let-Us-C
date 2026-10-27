#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void sighandler(int signum) {
  printf("Can't catch these signals!\n")
}

int main() {
  signal(SIGSTOP, sighandler);
  signal(SIGKILL, sighandler);

  while (1) {
    printf("WOOOOOOOOOOOOOOOOOOOOOOOOOOO\n");
  }

  return 0;
}