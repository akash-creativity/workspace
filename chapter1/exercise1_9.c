#include <stdio.h>

main()
{
  int c, flag = 0;
  while((c = getchar()) != EOF){
    if(c == ' '){
        flag = 1;
        continue;
    }
    else{
      if(flag){
        putchar(' ');
        flag = 0;
      }
      putchar(c);
    }
  }
}