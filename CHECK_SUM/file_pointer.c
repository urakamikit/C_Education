#include <stdio.h>
#include <stdlib.h>

uint8_t convert_function(char);
uint8_t check_sum(uint8_t*,uint8_t);

uint8_t convert_count = 0;

int main(void) {
  FILE* file_ptr;

  /*Pick up file with file pointer.*/
  if((file_ptr = fopen("hoge.txt","r")) == NULL) {
    printf("file open error!\n");
    exit(EXIT_FAILURE);
  }
  
  char data;
  uint8_t part_1 , part_2 , convert_data[255];
  int count = 0;

  while((data = getc(file_ptr)) != EOF) {
    if(data == 0x20  || data == 0x0A) {  //space and newline
      data = 0x7F;  //deleate
     } else {
        if(count == 0) {
           part_1 = convert_function(data);
           count = 1;
        } else if(count == 1) {
           part_2 = convert_function(data);
           convert_data[convert_count] = ((part_1 << 4) | (0x0F & part_2));
           convert_count++;
           count = 0;
        }
     }
  }
  
  uint8_t check_sum_result = check_sum(&convert_data[0],convert_count);
  
  printf("check_sum:%x\n",check_sum_result);

  return 0;
}

uint8_t check_sum(uint8_t* data, uint8_t data_size) {
    uint8_t result = *data;
    for(int i = 1 ; i <= data_size - 1 ; i++) {
       result ^= *(data + i);
    }
    return result;
  } 


uint8_t convert_function(char data) {
 uint8_t result;
 switch(data) {
    case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
      result = (0x0F & data);
    break;

    case 'A':
      result = 0x0A;
    break;

    case 'B':
      result = 0x0B;
    break;

    case 'C':
      result = 0x0C;
    break;

    case 'D':
      result = 0x0D;
    break;

    case 'E':
      result = 0x0E;
    break;

    case 'F':
      result = 0x0F;
    break;
 }

 return result;
 }


