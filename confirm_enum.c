#include <stdio.h>

typedef enum number {
  ONE,
  TWO,
  THREE,
  FOUR,
} numbar_t;

typedef enum alphabet :(unsigned char) {
  A,
  B,
  C,
  D
} alphabet_t;

int dummy;

int main(void) {
  printf("%lu\n",sizeof(ONE));
  printf("%lu\n",sizeof(dummy));
  //printf("%lu\n",sizeof(A));
  return 0;
}
