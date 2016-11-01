#include <stdio.h>

int check(int num) {
  int i;
  for (i = 1; i <= 20; i++) {
    if (num % i != 0)
      return 0;
  }
  return 1;
}

int main() {
  int num;
  num = 1;
  while (!check(num))
    num++;
  printf("Number: %d\n", num);
  return 0;
}
