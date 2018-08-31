#include <stdio.h>

union test {
  struct {
    int part;
    char* moji:
  };

  struct data_2 {
    int part;
    char* moji_moji;
  };
};

int main(void) {
  test_t test;
  test.data_1_t.part = 15;
  printf("%d\n",test.data_2_t.part);
  
  return 0;
}

