#include <stdio.h>
#include <stdlib.h>

uint8_t check_sum(uint8_t* , uint8_t);

int main(void) {
  uint8_t rx_data[5] = {0x11,0x23,0x00,0x56,0x51};
  uint8_t data = check_sum(rx_data,5);
  printf("check_sum: %x\n",data);
  return 0;
}

uint8_t check_sum(uint8_t* data, uint8_t data_size) {
  uint8_t result = *data;
  for(int i = 1 ; i <= data_size ; i++) {
     result ^= *(data + i);
  }
  return result;
}
