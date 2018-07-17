/**
Anyway, will use array.

*/

#include <stdio.h>

void test_1(void);

int main(void) {
  test_1();
  return 0;
}

void test_1(void) {
  int array[5];

  //Set value to each array
  for(int i = 0 ; i < 5 ; i++) {
    array[i] = i;
  }

  //Print each value in array
  for(int i = 0 ; i < 5 ; i++) {
    printf("%d\n",array[i]);
  }

  //Print address of each element in array
  for(int i = 0 ; i < 5 ; i++) {
    printf("&array[%d]...%p\n" , i , (void*)&array[i]);
  }
}
