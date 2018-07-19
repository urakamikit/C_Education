#include <stdio.h>
#include <stdint.h>

#define case_1
//#define case_2

typedef union error {
  uint8_t init_error : 1;
  uint8_t ex_error : 1;
} error_t;

int main(void) {
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
 
  return 0;
}

