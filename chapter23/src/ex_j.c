#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void sighandler(int signum) {
  while (1) {
    printf("Processing Signal\n");
  }
}

int main() {
  signal(SIGINT, sighandler);
  signal(SIGTERM, sighandler);

  while (1) {
    printf("WOOOOOOOOOOOOOOOOOOOOOOOOOOO\n");
  }

  return 0;
}