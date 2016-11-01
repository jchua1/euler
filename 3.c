#include <stdio.h>

int main() {
  long i, num;
  num = 600851475143;
  for (i = 2; i < num; i++) {
    if (num % i == 0) {
      num /= i;
      i = 2;
    }
  }
  printf("Largest prime factor: %ld\n", num);
  return 0;
}
