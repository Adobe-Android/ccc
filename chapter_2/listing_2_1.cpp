#include <cstdio>

int main() {
  auto const a = 0b10101010u;
  printf("%u\n", a);
  auto const b = 0123;
  printf("%d\n", b);
  auto const d = 0xFFFFFFFFFFFFFFFFull;
  printf("%llu\n", d);
}
