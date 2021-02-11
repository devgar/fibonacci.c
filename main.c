#include "stdio.h"

unsigned int i, input;
unsigned long long a, b, sum;

int main (int argc, char * argv[]) {

  if (argc > 1)
    sscanf(argv[1], "%u", &input);
  else { 
    printf("Give me a num ");
    scanf("%u", &input);
  }
  for(i = 0; i < input; i++) {
    if (i < 2) sum = 1;
    else sum = a + b;
    printf("%llu ", sum);
    a = b; b = sum;
  }
  printf("\n");
  return 0;
}
