// #include <stdio.h>
// #include <stdlib.h>
// // #include <sys/types.h>
// #include <unistd.h>

// int main() {
//   printf("Process ID: %d\n", getpid());
//   return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// // #include <sys/types.h>
// #include <unistd.h>

// int main() {
//   printf("Process ID: %d\n", getpid());
//   printf("Before forking\n");
//   fork();
//   printf("Process ID: %d\n", getpid());
//   printf("After forking\n");
//   return 0;
// }
// # include <stdio.h> 
// # include <unistd.h> 
// int main( )  
// { 
// int  pid ; 
// pid = fork( ) ; 
// if ( pid == 0 )  
// { 
// printf ( "Child : Hello I am the child process\n" ) ; 
// printf ( "Child : Child’s PID: %d\n", getpid( ) ) ; 
// printf ( "Child : Parent’s PID: %d\n", getppid( ) ) ; 
// } 
// else   
// {
// printf ( "Parent : Hello I am the parent process\n" ) ; 
// printf ( "Parent : Parent’s PID: %d\n", getpid( ) ) ; 
// printf ( "Parent : Child’s PID: %d\n", pid ) ; 
// } 
// return 0 ; 
// } 

// # include <stdio.h> 
// # include <unistd.h> 
// int main( )  
// { 
// int  pid ; 
// pid = fork( ) ; 
// if ( pid == 0 )  
// { 
// execl ( "/bin/ls","-al", "/etc", NULL ) ; 
// printf ( "Child: After exec( )\n") ; 
// } 
// else 
// printf ( "Parent process\n" ) ; 
// return 0 ; 
// } 

// # include <stdio.h> 
// # include <unistd.h> 
// int main( )  
// { 
// int  pid ; 
// pid = fork( ) ; 
// if ( pid == 0 )  
// { 
// execl ( "/bin/ls","-al", "/etc", NULL ) ; 
// printf ( "Child: After exec( )\n") ; 
// } 
// else 
// printf ( "Parent process\n" ) ; 
// return 0 ; 
// }

// #include <stdio.h>
// #include <stdlib.h> 
// # include <signal.h> 
// void sighandler ( int signum )  
// { 
// printf ( "SIGINT received. Inside sighandler\n" ) ; 
// exit(0);
// } 
// int main( )  
// { 
// signal ( SIGINT, sighandler ) ; 
// while ( 1 )  
// printf ( "Program Running\n" ) ; 
// return 0 ; 
// } 

# include <stdio.h> 
# include <string.h>
# include <signal.h> 
void sighandler ( int  signum )  
{ 
switch ( signum )  
{ 
case SIGTERM : 
printf ( "SIGTERM Received\n" ) ; 
break ; 
case SIGINT : 
printf ( "SIGINT Received\n" ) ; 
break ; 
case SIGCONT : 
printf ( "SIGCONT Received\n" ) ; 
break ; 
 } 
} 
 
int main( )  
{  
 char  buffer [ 80 ] = "\0" ; 
 sigset_t  block ; 
 
 signal ( SIGTERM, sighandler ) ; 
 signal ( SIGINT,  sighandler ) ; 
 signal ( SIGCONT, sighandler ) ; 
 
 sigemptyset ( &block ) ; 
 sigaddset ( &block, SIGTERM ) ; 
 sigaddset ( &block, SIGINT ) ;  
 
 sigprocmask ( SIG_BLOCK, &block, NULL ) ; 
 
 while ( strcmp ( buffer, "n" ) != 0 )  
 { 
  printf ( "Enter a String: " ) ; 
  fgets ( buffer, sizeof(buffer), stdin ) ; 
  puts ( buffer ) ; 
 } 
 
 sigprocmask ( SIG_UNBLOCK, &block, NULL ) ; 
 
 while ( 1 )  
  printf ( "Program Running\n" ) ; 
 
 return 0 ; 
}


