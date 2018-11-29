#include <stdio.h>
#include <stdlib.h>

void delay(int);

int main(void) {
  char buf[BUFSIZ];
  
  /*Carry out buffer ling for standard output(stdout).*/ 
  setbuf(stdout, buf); //void setbuf(FILE* restrict stream, char* restrict buf)
  
  printf("hoge\n"); //Buffer ling this status

  delay(1000000);

  fflush(stdout); //Flash buffer

  setbuf(stdout,NULL);  //Stop buffer ling something.

  printf("hoge\n");

  delay(1000000);

  return EXIT_SUCCESS;
}

void delay(int time) {
  for(int i = 0 ; i < time * 500000 ; i++);
}
