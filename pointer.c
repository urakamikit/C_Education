/**
Sample code to comfirm how to use pointer.
Print each objects' address. Later, give address to get value

・Why use (void*) in 'printf' functions?
Define pick up pointer to void for %p. So, should cast with void*.
*/

#include <stdio.h>

void test_1(void);
void test_2(void);

int main(void) {
  test_1();
  test_2();
  return 0;
  }

void test_1(void) {
  
  int hoge = 5, piyo = 10;
  int* hoge_pointer;

  //Print each address 
  printf("&hoge..%p\n",(void*)&hoge);
  printf("&piyo..%p\n",(void*)&piyo);
  printf("&hoge_pointer..%p\n" , (void*)&hoge_pointer);

  //Put address of hoge into hoge_pointer
  hoge_pointer = &hoge;
  printf("hoge_pointer..%p\n",(void*)hoge_pointer);

  //Print value of hoge through hoge_pointer
  printf("*hoge_pointer..%d\n",*hoge_pointer);

  //Change value of hoge through hoge_pointer
  *hoge_pointer = 10;
  printf("hoge..%d\n", hoge);
} 

void test_2(void) {
  int hoge = 5;
  void* hoge_pointer;

  hoge_pointer = &hoge;
  
  //Print value of hoge_pointer through hoge
  //printf("%d\n" , *hoge_pointer);
}

