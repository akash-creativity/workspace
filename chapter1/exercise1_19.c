#include <stdio.h>

#define MAXLINE 1000 

int get_line(char s[], int lim);
void copy(char to[], char from[]);
void revers(char in_str[]);


int main(void)
{
    int len;            
    int max;         
    char line[MAXLINE]; 
    char longest[MAXLINE]; 

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0){
        revers(line);
        printf("%s\n", line);
    }
    return 0;
}


int get_line(char s[], int lim)
{
    int c, i;

    for (i = 0; i<lim-1 && (c = getchar()) != EOF && c != '\n'; ++i) 
            s[i] = c;
    if (c == '\n') {
            s[i] = c;
            ++i;
    }   
    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
  
void revers(char in_str[])
{
    int i, length;
    char tmp;
  
    i = 0;
    while (in_str[i] != '\0')
        ++i;  
  
    length = i-1;
   
    for(i=0;i<length/2;i++){
      tmp = in_str[length-i];
      in_str[length - i] = in_str [i];
      in_str [i] = tmp;
    }
    printf("lenght %d\n", i);
      
}
