#include <stdio.h>

main() {
    int c, blanks=0, tabs=0, newlines=0;

    
    while ((c = getchar()) != EOF)
        if (c == ' ')
            ++blanks;
        else if (c == '\t')
            ++tabs;
        else if (c == '\n')
            ++newlines;
  
    printf("No of blanks: %d, No of tabs: %d, No of newlines: %d.\n", blanks, tabs, newlines);
  
}
