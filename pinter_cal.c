/**
Comfirm operater of pointer.
Check address of pointer after add some integer.
*/
#include <stdio.h>

void test_1(void);

int main(void) {
  test_1();

  return 0;
}

void test_1(void) {
  int hoge;
  int* hoge_pointer;

  //Set address of hoge to hoge_pointer
  hoge_pointer = &hoge;
  
  //Print address of hoge_pointer
  printf("hoge_pointer..%p\n",(void*)hoge_pointer);

  //Add +1 to hoge_pointer
  hoge_pointer++;

  //Print address of hoge_pointer ,later added +1
  printf("hoge_pointer..%p\n",(void*)hoge_pointer);

  //Print address of hoge_pointer , later added +3
  printf("hoge_pointer..%p\n" , (void*)(hoge_pointer + 3));

}

