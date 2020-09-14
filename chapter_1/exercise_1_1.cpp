#include <cstdio>
#include <cstdlib>

int absolute_value(int x) {
  if(x > 0) {
    return x;
  } else {
    return x * -1;
  }
}

// 1-4.
int sum (int a, int b) {
  return a + b;
}

int main(int argc, const char* argv[]) {
  int my_num = atoi(argv[1]);
  printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));
  
  // 1-4.
  int a{1};
  int b{2};
  printf("The sum of %d and %d is %d.\n", a, b, sum(a, b));
}
