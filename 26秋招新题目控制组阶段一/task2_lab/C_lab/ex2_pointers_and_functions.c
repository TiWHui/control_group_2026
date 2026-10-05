#include <stdio.h>

void add_one(int input) {
  input += 1;
}

// TODO: create a pointer to input

void add_one_pointer(int* input) {
// TODO: add one to the integer that input points to

  *input += 1;
}

// TODO: create a pointer to a pointer to input

void add_one_double_ptr(int** input) {
  // TODO: add one to the integer that input doubly points to

  **input += 1;
}

int main() {
  // Assign x (an integer) to 5
  int x = 5;

  // Call add_one on x
  add_one(x);

  // This line should print 5
  // Why doesn't this work?
  printf("add_one: %d\n", x);
  // 答：这里传的是 x 的拷贝，所以函数里改的是副本，x 本身的值没变

  // Let's try using add_one_pointer

  // TODO: use add_one_pointer to increment x
  // Hint: compare the type of x with the type of the argument
  //       for add_one_pointer
  // x 是 int，而 add_one_pointer 需要 int*，所以要传x的地址
  add_one_pointer(&x);

  // This line should print 6
  printf("add_one_pointer: %d\n", x);

  // TODO: Let's save the pointer to x in y
  int* y = &x;

  // TODO: use add_one_double_ptr to increment x again, using the pointer we just made

  add_one_double_ptr(&y);

  // This line should print 7
  printf("add_one_double_ptr: %d\n", x);

  return 0;
}
