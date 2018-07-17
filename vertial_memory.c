/**
*/

#include <stdio.h>

int hoge;

void test_1(void);

int main(void) {
  test_1();
  
  for(;;) {
    printf("hoge..%d\n",hoge);
     /*
     Idling with getchar().
     The state is waiting for input.
     Every increasing hoge each push return key.
     */
    getchar();
    hoge++;
  }
  return 0;
}

void test_1(void) {
  char buf[256];

  printf("&hoge...%p\n" , (void*)&hoge);

  printf("Input initial cvalue.\n");
  fgets(buf , sizeof(buf) , stdin);
  sscanf(buf , "%d" , &hoge);
}
