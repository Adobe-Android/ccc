#include <cstddef>
#include <cstdio>

int main() {
  auto const size_c = sizeof(char);
  printf("char: %zd\n", size_c);
  auto const size_s = sizeof(short);
  printf("short: %zd\n", size_s);
  auto const size_i = sizeof(int);
  printf("int: %zd\n", size_i);
  auto const size_l = sizeof(long);
  printf("long: %zd\n", size_l);
  auto const size_ll = sizeof(long long);
  printf("long long: %zd\n", size_ll);
}
