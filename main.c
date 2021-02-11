#include "stdio.h"

int a, b, i, sum, input;

int main () {

  printf("Gice me a num ");
  scanf("%d", &input);

  for(i = 0; i < input; i++) {
    if (i < 2) sum = 1;
    else sum = a + b;
    printf("%d ", sum);
    a = b; b = sum;
  }
  printf("\n");
  return 0;
}
