/**
One the purpose to use pointer is 'Get some value from functions'.
Lets comfirm.
*/
#include <stdio.h>

void get_xy(double* ,double*);

int main(void) {
  double x , y;

  //Print address of x and y
  printf("&x..%p, &y..%p\n" , (void*)&x , (void*)&y);

  //After give address of x and y into argument,
  //have hold value in the address with get_xy function side
  get_xy(&x,&y);

  //Print value
  printf("x..%f , y..%f\n" , x , y);

  return 0;
}

void get_xy(double* x_pointer , double* y_pointer) {
  //Print address and value of x_pointer and y_pointer
  printf("x_pointer..%p , y_pointer..%p\n" , (void*)x_pointer , (void*)y_pointer);
  printf("&x_pointer..%p , &y_pointer..%p\n" , (void*)&x_pointer , (void*)&y_pointer);

  //Have hold some value into each address in argument
  *x_pointer = 1.0;
  *y_pointer = 2.0;
}

