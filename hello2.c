#include <stdio.h>

int main(){

  char s[80], c;
  int i = 0;

  while ((c = getchar()) != '\n')
  {
    s[i] = c;
    i++;
  }
  printf("Hello, %s!\n", s);
}
