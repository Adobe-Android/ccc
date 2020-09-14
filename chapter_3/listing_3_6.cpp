#include <cstdio>

void read_from(char *array, size_t array_size);
void write_to(char *array, size_t array_size, char content, int index);

int main() {
  char lower[] = "abc?e";
  char upper[] = "ABC?E";
  char* upper_ptr = upper; // Equivalent: &upper[0]

  lower[3] = 'd'; // lower now contains a b c d e \0
  upper_ptr[3] = 'D'; // upper now contains A B C D E \0

  char letter_d = lower[3]; // letter_d equals 'd'
  char letter_D = upper_ptr[3]; // letter_D equals 'D'

  printf("lower: %s\nupper: %s\n", lower, upper);

  // lower[7] = 'g'; // Super bad. You must never do this.
  write_to(lower, sizeof(lower) / sizeof(char), 'J', 4);
  read_from(lower, sizeof(lower) / sizeof(char));
}

void read_from(char *array, size_t array_size)
{
    printf("array: %s\n", array);
    printf("array size: %i\n", array_size);
}

void write_to(char *array, size_t array_size, char content, int index)
{
    printf("index: %i\n", index);
    // Preserve \0 null terminator at the end of the char array.
    if (index < (int)array_size - 1)
    {
        array[index] = content;
    }
    else
    {
        printf("The data was not written. Your index is out of the array's bounds");
    }
}