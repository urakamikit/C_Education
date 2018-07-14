#include <stdio.h>

typedef enum number {
  ONE,
  TWO,
  THREE,
  FOUR,
} numbar_t;

int dummy;

int main(void) {
  printf("%lu¥r",sizeof(ONE));
  printf("%lu¥r",sizeof(dummy));
  return 0;
}
