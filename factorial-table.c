#include <stdio.h>

heading()
{
  printf("n\tn!\n");
  printf("-----------------\n");
}

main()
{
  int counter, product;
  int upper, lower, step;
  
  lower = 1;
  product = 1;
  upper = 10;

  heading();
  counter = lower;
  while (counter <= upper) {
    product = counter*product;
    printf("%d\t%d\n", counter, product);
    counter = counter + 1;
  }
}
