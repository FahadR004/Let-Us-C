#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
  unsigned  int  i = 0 ;  
  int  pid, status ; 
  pid = fork( ) ; 
  if ( pid == 0 ) 
  { 
  sleep ( i < 4294967295u ); 
  i++ ; 
  printf ( "The child is now terminating\n" ) ; 
  } 
  else 
  { 
  waitpid ( pid, &status, 0 )  ; 
  if ( WIFEXITED ( status ) ) 
  printf ( "Parent: Child terminated normally\n" ) ; 
  else 
  printf ( "Parent: Child terminated abnormally\n" ) ; 
  } 
  return 0 ;
}