#include <stdio.h>
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

main()
{
  int c, nl, nw, nc, state, char_length=0, i,j;
  state =OUT;
  nl =nw =nc =0;
  int histogram[20] = {};
    
  while ((c = getchar()) != EOF) {
     ++nc;
    if(c == ' ' || c == '\n' || c== '\t'){
      state =OUT;
      histogram[char_length] ++;
    }
    else if (state == OUT) {
      state =IN;
      ++nw;
      char_length = 1;
    }
    else{
      char_length ++;
    } 
  }
  
  for(i=1; i<20;i++){
    
    if(histogram[i] == 0) continue;
    
    printf("\n%d: ", i);
      for(j=0; j < histogram[i]; j++){
        printf("*");
      }
  }
}