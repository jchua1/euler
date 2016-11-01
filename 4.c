
#include <stdio.h>

int check(int num) {
  int temp, reversed;
  temp = num;
  reversed = 0;
  while (temp > 0) {
    reversed = reversed * 10 + temp % 10;
    temp /= 10;
  }
  if (reversed == num)
    return 1;
  return 0;
}

int main() {
  int first, second, product;
  product = 0;
  for (first = 100; first < 1000; first++) {
    for (second = 100; second < 1000; second++) {
      if (check(first * second) && first * second > product)
	product = first * second;
    }
  }
  printf("Palindrome: %d\n", product);
  return 0;
}
