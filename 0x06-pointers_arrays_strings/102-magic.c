#include <stdio.h>


 /*
	I used every magic trick up my sleeves to make this trick work!
        WARNING: Don't try to edit code as it might not work.
	All blocks of codes are cut and trimed in perfection	
   */
int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
    *(p + 5) = 98;
  /* ...so that this prints 98\n */
  printf("a[2] = %d\n", a[2]);
  return (0);
}
