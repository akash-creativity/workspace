#include <stdio.h>
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

main()
{
  int c, nl, nw, nc, state, char_length=0, i,j;
  state =OUT;
  nl =nw =nc =0;
  int small[26] = {};
  int caps[26] = {};

  
  while ((c = getchar()) != EOF) {
    if(c >= 'a' && c <= 'z')
      small[c - 'a'] ++;
    if(c >= 'A' && c <= 'Z')
      caps[c - 'A'] ++;
  }
  
  for(i=0; i<26;i++){
    
    if(small[i] == 0) continue;
    
    printf("\n%c: ", 'a' + i);
      for(j=0; j < small[i]; j++){
        printf("*");
      }
  }
  for(i=0; i<26;i++){
    
    if(caps[i] == 0) continue;
    
    printf("\n%c: ", 'A' + i);
      for(j=0; j < caps[i]; j++){
        printf("*");
      }
  }
  printf("\n");
}