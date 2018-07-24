#include <stdio.h>
#include <stdint.h>

typedef union number {
  uint32_t total;
  struct {
    uint8_t a;
    uint8_t b;
    uint8_t c;
    uint8_t d;
  };
} number_t;

int main(void) {
  number_t number;
  number.total = 0x12345678;
  uint8_t comfirm_num[4];
  comfirm_num[0] = number.a;
  comfirm_num[1] = number.b;
  comfirm_num[2] = number.c;
  comfirm_num[3] = number.d;

  printf("%x\n",comfirm_num[0]);
  printf("%x\n",comfirm_num[1]);
  printf("%x\n",comfirm_num[2]);
  printf("%x\n",comfirm_num[3]);

  return 0;
}

