#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int x = atoi(argv[1]);
int y = atoi(argv[2]);

void pId(int a, int b);

int Fib(int i);

int main(int argc, char *argv[]) {


  if (argc < 3) {
  	
    printf("Example: a.out 5 10 - spawns 5 children processes with 10 sequences\n");
    return -1;
    
  }

  pId(x-1, y);
  
  printf("\nGood Bye\n");
  return 0;
}

void pId(int a, int b) {
  pid_t pid;
  pid = fork();

  if (pid == 0) {
    printf("This is a child: %d PID: %d\n", x-a, getpid());
    printf("Sequence is: ");
    for(int i=0; i<b; i++) {
      printf("%d, ",Sequence(i));
    }
    printf("\n");
    return;
  }

  printf("This is a parent (PID %d) spawning a new child (PID %d)\n", getpid(), pid);
  
  wait(pid);

  if (a > 0) {
    myId(a-1, b);
  }
  else printf("Good bye\n");
}
