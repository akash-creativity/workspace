#include <stdio.h>

int main(void)
{
    int c = (getchar() != EOF);
  
    printf("value of 'c' is %d.\n", c);
    return 0;
}