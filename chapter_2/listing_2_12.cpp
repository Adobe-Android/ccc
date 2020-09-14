#include <cstdio>

int main() {
  char alphabet[27];
  for(auto i = 0; i < 26; i++) {
    alphabet[i] = i + 97;
  }
  alphabet[26] = 0;
  printf("%s\n", alphabet);
  for(auto i = 0; i < 26; i++) {
    alphabet[i] = i + 65;
  }
  printf("%s", alphabet);
}
