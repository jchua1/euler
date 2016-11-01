#include <stdio.h>

int main() {
  int first, second, sum, temp;
  first = temp = 1;
  second = 2;
  sum = 0;
  while (first < 4000000) {
    if (second % 2 == 0)
      sum += second;
    first = second;
    second += temp;
    temp = first;
  }
  printf("Sum: %d\n", sum);
  return 0;
}
