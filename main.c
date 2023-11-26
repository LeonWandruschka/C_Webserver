// Webserver in C 
//
// Getting used to Sockets API
//


#include <stdio.h>


// INCLUDE FOR SOCKETS
#include <sys/socket.h>
#include <sys/types.h>
#include <netdb.h>



#include "webserver.h"



#define DEBUG // DEBUG FLAG IF ON PRINT STUFF 



int main(int argc, char **argv)
{

  printf("Program start!\n");


#ifdef DEBUG
  printf("This is an DEBUG statement!\n");
#endif

  test();





  return 0; // Programm end
}









