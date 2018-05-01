#include <stdio.h>

#define MAXLINE 1000 
#define TABLENGTH 4
  
int get_line(char s[], int lim);
void copy(char to[], char from[]);
void detab(char s1[], char s2[]);


int main(void)
{
    int len;            
    int max;         
    char line_in[MAXLINE]; 
    char line_out[MAXLINE]; 

    max = 0;
    while ((len = get_line(line_in, MAXLINE)) > 0){
      detab(line_in, line_out);
      printf("%s \n", line_out);
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

void detab(char s1[], char s2[])
{
    unsigned int k, t; 
    char p,c, space;

    k = 0;
    t = 0;
  
    while ((c = s1[k++]) != '\0')
    {
        if (c == '\t') 
        {
            for (p = 0; p < TABLENGTH; p++)
                s2[t++] = ' ';
        } else 
        {
            s2[t++] = c;
        }
    }
    s2[t] = '\0';
}