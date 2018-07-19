#include <stdio.h>
#include <stdint.h>

//#define case_1
#define case_2

void test_1(void);
void test_2(void);

typedef union error {
  uint8_t init_error : 1;
  uint8_t ex_error : 1;
} error_t;

typedef struct bit_test {
  uint8_t bit_1 : 1;
  uint8_t bit_2 : 1;
} bit_test_t;

int main(void) {
  //test_1();
  test_2();
  return 0;
}

void test_1(void) {
  error_t error_1;

#ifdef case_1
  error_1.init_error = 1;
  error_1.ex_error = 0;
#endif

#ifdef case_2
  error_1.ex_error = 0;
  error_1.init_error = 1;
#endif 

  printf("%d\n",error_1.init_error);  
  printf("%d\n",error_1.ex_error);
}

void test_2(void) {
  bit_test_t bit_test_1;

#ifdef case_1
  bit_test_1.bit_1 = 1;
  bit_test_1.bit_2 = 0;
#endif

#ifdef case_2
  bit_test_1.bit_1 = 0;
  bit_test_1.bit_2 = 1;
#endif

  printf("%d\n",bit_test_1.bit_1);
  printf("%d\n",bit_test_1.bit_2);
}
