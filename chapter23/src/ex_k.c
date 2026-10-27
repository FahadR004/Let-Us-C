#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void sighandler(int signum) {
  sigset_t block;
  sigemptyset(&block);
  sigaddset(&block, SIGTERM);
  sigprocmask(SIG_BLOCK, &block, NULL);
  while (1) {
    printf("Processing Signal\n");
  }
}

int main() {
  signal(SIGINT, sighandler);
  while (1) {
    printf("WOOOOOOOOOOOOOOOOOOOOOOOOOOO\n");
  }

  return 0;
}