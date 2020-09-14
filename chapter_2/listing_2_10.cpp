#include <cstdio>

int main() {
  auto maximum = 0ul;
  unsigned long const values[] = { 10, 50, 20, 40, 0 };
  for(auto i = 0; i < 5; i++) {
    if(values[i] > maximum)
      maximum = values[i];
  }
  printf("The maximum value is %lu.", maximum);
}
