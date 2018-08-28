#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE* file_ptr;

  /*Pick up file with file pointer.*/
  if((file_ptr = fopen("hoge.txt","r")) == NULL) {
    printf("file open error!\n");
    exit(EXIT_FAILURE);
  }
  
  char data;

  while((data = getc(file_ptr)) != EOF) {
    if(data == 'A') {
      printf("good\n");
    }
    printf("%c\n",data);
  }

  return 0;
}
