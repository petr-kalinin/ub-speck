#include <cstdio>

int a;

void bar (void)
{
  setlinebuf(stdout);
  printf ("hello!\n");
}

void foo3 (unsigned y, unsigned z)
{
  bar();
  a = y%z;
}

int main (void)
{
  foo3(1,0);
  return 0;
}