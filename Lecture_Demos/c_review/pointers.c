#include <stdio.h>

int
main(int argc, char **argv)
{
  int *p = (int *)0xdeadbeef;

  // silence compilation warnings, ignore this.
  (void)p;

  printf("p contains the address %p\n", p);
  printf("What would be this value? %p\n", &p);

  return 0;
}
