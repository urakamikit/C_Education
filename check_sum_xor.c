#include <stdio.h>
#include <stdlib.h>

uint8_t check_sum(uint8_t* , uint8_t);

int main(void) {
 // uint8_t rx_data[15] = {0x11,0x23,0x00,0x56,0x51,0x11,0xFF,0x00,0xAC,0x7E,0x2F,0xFA,0x34,0xDE,0xCA};

  uint8_t address = 0;
  uint8_t rx_data[16];
  for(int i = 0 ; i < 10 ; i++) {
    address++;
    rx_data[i] = 2 * i;
    printf("address:%d\n",address);
    printf("rx_data[%d]:%d\n",i,rx_data[i]);
  }
 
 uint8_t data = check_sum(&rx_data[0],address);

  printf("check_sum: %x\n",data);
  return 0;
}

uint8_t check_sum(uint8_t* data, uint8_t data_size) {
  uint8_t result = *data;
  for(int i = 1 ; i <= data_size - 1 ; i++) {
     result ^= *(data + i);
  }
  return result;
}
