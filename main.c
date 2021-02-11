#include "stdio.h"

int a, b, i, sum, input;

int main (int argc, char * argv[]) {

  if (argc > 1)
    sscanf(argv[1], "%d", &input);
  else { 
    printf("Give me a num ");
    scanf("%d", &input);
  }
  for(i = 0; i < input; i++) {
    if (i < 2) sum = 1;
    else sum = a + b;
    printf("%d ", sum);
    a = b; b = sum;
  }
  printf("\n");
  return 0;
}
