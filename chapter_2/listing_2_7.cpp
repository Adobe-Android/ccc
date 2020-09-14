#include <cstdio>

int main() {
  auto const t = true;
  auto const f = false;
  printf("!true: %d\n", !t);
  printf("true  &&  false: %d\n", t && f);
  printf("true  && !false: %d\n", t && !f);
  printf("true  ||  false: %d\n", t || f);
  printf("false ||  false: %d\n", f || f);
}
