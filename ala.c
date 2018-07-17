/**

*/

#include <stdio.h>

void test_1(void);

int main(void) {
  test_1();

  return 0;
}

void test_1(void) {
  int size_1 , size_2 , size_3;

  printf("Please write three value\n");
  scanf("%d%d%d" , &size_1 , &size_2 , &size_3);

  //Declaration Variable Length Array
  int array_1[size_1];
  int array_2[size_2][size_3];

  //Set value to VLA
  for(int i = 0 ; i < size_1 ; i++) {
    array_1[i] = i;
    printf("array_q[%d]..%d\n", i , array_1[i]);
  }
  
  for(int i = 0 ; i < size_2 ; i++) {
    for(int j = 0 ; j < size_3 ; j++) {
      array_2[i][j] = i * size_3 + j;
      printf("\t%d",array_2[i][j]);
    }
    printf("\n");
   }
  printf("sizeof(array_1)..%zd\n" , sizeof(array_1));
  printf("sizeof(array_2)..%zd\n" , sizeof(array_2));
}
