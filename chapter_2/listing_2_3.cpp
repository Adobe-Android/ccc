#include <cstdio>

int main() {
  auto const an = 6.0221409e23;
  printf("Avogadro's Number:  %le %lf %lg\n", an, an, an);
  auto const hp = 9.75;
  printf("Hogwart's Platform: %e %f %g\n", hp, hp, hp);
}
