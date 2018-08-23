#include <stdio.h>
#include <stdint.h>

uint8_t array_1[20] = {0};
uint8_t array_2[4];

void insert_array(uint8_t*,uint8_t*,uint8_t);

int main(void) {
  for(int i = 0 ; i < 10 ; i++) {
    array_1[i] = i;
    printf("array_1[%d]:%d\n",i,array_1[i]);
  }

  for(int j = 0 ; j < 4 ; j++) {
    array_2[j] = (j + 1)*10;
    printf("array_2[%d]:%d\n",j,array_2[j]);
  }

  insert_array(&array_1[5],&array_2[0],4);
  
  for(int i = 0 ; i < 20 ; i++) {
      printf("array_1[%d]:%d\n",i,array_1[i]);
    }

   for(int j = 0 ; j < 4 ; j++) {
     printf("array_2[%d]:%d\n",j,array_2[j]);
    }

    }

void insert_array(uint8_t* original_data, uint8_t* insert_data, uint8_t noBytes) {
  for(int i = 0 ; i < noBytes ; i++) {
   uint8_t coppy_data = *(original_data + i);
   *(original_data + i) = *(insert_data + i);
   *(original_data + noBytes + i) = coppy_data;
  }
}
