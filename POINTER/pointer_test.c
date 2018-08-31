#include <stdio.h>

unsigned char* pointer;

void test_1(unsigned char*);

int main(void) {
  unsigned char data[20];
 // pointer = &data;
  test_1(data);
  for (int i = 0 ; i < 10 ; i++) {
   // unsigned char data = *pointer;
    printf("Data:");
    printf("%u\n",data[i]);
    }
}
void test_1(unsigned char* rx_data) {
  for (int i = 0 ; i < 10 ; i++) {
    *(rx_data + i) = i;
  }
}
