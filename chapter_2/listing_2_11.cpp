#include <cstdio>

int main() {
  auto maximum = 0ul;
  unsigned long const values[] = { 10, 50, 20, 40, 0 };
  for(auto value : values) {
    if(value > maximum)
      maximum = value;
  }
  printf("The maximum value is %lu.", maximum);
}
