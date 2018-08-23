#include <stdio.h>
#include <stdint.h>

uint8_t array_1[43] = {0};
uint8_t array_2[6];

void insert_array(uint8_t*,uint8_t*,uint8_t);
void insert(uint8_t* ,uint8_t* ,int);

int main(void) {
  for(int i = 0 ; i < 36 ; i++) {
    array_1[i] = i;
    printf("array_1[%d]:%d\n",i,array_1[i]);
  }

  for(int j = 0 ; j < 6 ; j++) {
    array_2[j] = (j + 1)*10;
    printf("array_2[%d]:%d\n",j,array_2[j]);
  }

 // insert_array(&array_1[5],&array_2[0],4);
  insert(&array_1[20],&array_1[23],3); 
  for(int i = 0 ; i < 35 ; i++) {
      printf("array_1[%d]:%d\n",i,array_1[i]);
    }

 // insert(&array_1[20],&array_1[23],3);
    }

/*void insert_array(uint8_t* original_data, uint8_t* insert_data, uint8_t noBytes, uint8_t max_bytes) {
  for(int i = 0 ; i < noBytes - 1 ; i++) {
   uint8_t coppy_data = *(original_data + i);
   *(original_data + i) = *(insert_data + i);
  }
}*/

  void insert(uint8_t *start, uint8_t *last, int val) {
    for(uint8_t *dst = last - 1; dst-- >= start; ) {
       *(dst + 1) = *dst;
       *start = val;
    }
  }
