#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  int x, i;
  x = 0;
  for (i = 0; i < 10; ++i) {
    x += i;
  }
  printf("%d\n", x);
  return 0;
}
