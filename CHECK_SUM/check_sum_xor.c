#include <stdio.h>
#include <stdlib.h>

uint8_t check_sum(uint8_t* , uint8_t);

int main(void) {
  uint8_t rx_data[50] =
   {0xA6,0x78,0xC1,0x9F,0x04,0x7E,0x5A,0xC1,0xC0,0xFA,0x02,0x7E,0x5D,0x05,0x26,0x78,0x36,0x78,0xC1,0x27,0x11,0x7E,0x59,0x12,0xC0,
   0xE6,0x9A,0x7E,0x59,0x0B,0x36,0x78,0x46,0x7B,0xC0,0xF7,0xF9,0x7E,0x53,0x23,0xC0,0xF8,0x8D,0x7E,0x56,0x29,0x46,0x7B,
   0x77};
  
  //A6 78 C1 9F 04 7E 5A  C1 C0 FA 02 7E 5D 05 26 78 36 78 C1 27 11 7E 59 12 C0 E6 9A 7E 59 0B 36 78 46
  //7B C0 F7 F9 7E 53 23 C0 F8 8D 7E 56 29 46 7B 77 FE  70
  
  uint8_t rx_data_2[50] = 
    {0x26,0x78,0xC3,0x05,0x29,0x7E,0x5B,0x13,0xC1,0x0F,0xF8,0x7E,0x5D,0x5D,0x26,0x79,0x36,0x78,0xC1,0x3E,0x8A,0x7E,0x59,0x9A,0xC1,
      0x05,0x25,0x7E,0x59,0x86,0x36,0x79,0x46,0x7C,0xC1,0x09,0xA6,0x7E,0x53,0x70,0xC1,0x09,0xA9,0x7E,0x56,0x3A,0x46,0x7C,
     0x77,0xFF};

  //26 78 C3 05 29 7E 5B 13 C1 0F F8 7E 5D 5D 26 79 36 78 C1 3E 8A 7E 59 9A C1 05 25 7E 59 86 36 79 46
  //7C C1 09 A6 7E 53 70 C1 09 A9 7E 56 3A 46 7C 77 FF 2E

  uint8_t rx_data_3[50] =
       {0xA6,0x77,0xC1,0x64,0xD5,0x7E,0x5A,0xC9,0xC1,0x03,0xC1,0x7E,0x5C,0xB2,0x26,0x77,0x36,0x77,0xC0,0xF7,0x69,0x7E,0x59,0x03,0xC0,
       0xF5,0x8D,0x7E,0x59,0x1B,0x36,0x77,0x46,0x7A,0xC0,0xF8,0x31,0x7E,0x53,0x36,0xC0,0xF5,0x05,0x7E,0x56,0x11,0x46,0x7A,
       0x77,0xFF}; 
  
  //A6 77 C1 64 D5 7E 5A C9 C1 03 C1 7E 5C B2 26 77 36 77 C0 F7 69 7E 59 03 C0 F5 8D 7E 59 1B 36 77 
  //46 7A C0 F8 31 7E 53 36 C0 F5 05 7E 56 11 46 7A 77 FF     E3

  uint8_t rx_data_4[51] =
       {0x26,0x77,0xC1,0x7A,0x88,0x7E,0x5A,0x81,0xC1,0x04,0x55,0x7E,0x5C,0xA2,0x26,0x77,0x36,0x76,0xC0,0xF7,0xF2,0x7E,0x59,0x51,0xC0,
        0xF7,0x5F,0x7E,0x59,0x2F,0x36,0x76,0x46,0x78,0xC0,0xF7,0xC7,0x7E,0x53,0x28,0xC0,0xF5,0x6F,0x7E,0x55,0xED,0x46,0x78,
        0x77,0xFF ,0xE3}; 

  //26 77 C1 7A 88 7E 5A 81 C1 04 55 7E 5C A2 26 77 36 76 C0 F7 F2 7E 59 51 C0 F7 5F 7E 59 2F 36 76 
  //46 78 C0 F7 C7 7E 53 28 C0 F5 6F 7E 55 ED 46 78 77 FF     57
  
  uint8_t rx_data_5[51] =
        {0x26,0x77,0xC1,0x90,0x28,0x7E,0x5A,0xAD,0xC1,0x04,0xF0,0x7E,0x5C,0xCB,0x26,0x77,0x36,0x77,0xC0,0xF8,0x93,0x7E,0x59,0x32,0xC0,
         0xF9,0x34,0x7E,0x59,0x10,0x36,0x77,0x46,0x79,0xC0,0xF7,0xA5,0x7E,0x52,0xB2,0xC0,0xF6,0x50,0x7E,0x55,0xF5,0x46,0x79,
         0x77,0xFE ,0x57}; 

  //26 77 C1 90 28 7E 5A AD C1 04 F0 7E 5C CB 26 77 36 77 C0 F8 93 7E 59 32 C0 F9 34 7E 59 10 36 77 
  //46 79 C0 F7 A5 7E 52 B2 C0 F6 50 7E 55 F5 46 79 77 FE     C2


/*NOMAL MODE DATA8*/
  uint8_t rx_data_6[50] =
         {0x26,0x78,0xCB,0xA1,0x4C,0x7E,0x56,0xAC,0xC1,0xD8,0x0B,0x7E,0x58,0xEA,0x26,0x78,0x36,0x79,0xC1,0xE6,0x95,0x7E,0x55,0x5E,0xC1,
         0xC5,0xFB,0x7E,0x55,0xE5,0x36,0x77,0x46,0x7B,0xC1,0x9F,0xBC,0x7E,0x4E,0xD7,0xC1,0x8D,0xDF,0x7E,0x52,0x60,0x46,0x79,
         0x77,0xFF};

  //26 78 CB A1 4C 7E 56 AC C1 D8 0B 7E 58 EA 26 78 36 79 C1 E6 95 7E 55 5E C1 C5 FB 7E 55 E5 36 77 
  //46 7B C1 9F BC 7E 4E D7 C1 8D DF 7E 52 60 46 79 77 FF     D4
  uint8_t data = check_sum(&rx_data_4[0],51);
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
