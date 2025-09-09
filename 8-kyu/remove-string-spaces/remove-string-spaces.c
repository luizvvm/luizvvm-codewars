#include <stdlib.h>
​
// 
​
char *no_space(const char *str_in) {
  int k = 0;
  int i = 0;
  
  char *vetor;
  vetor = (char *)malloc(sizeof(char));
  
  while(str_in[k]!='\0'){
  if(str_in[k] != ' '){
    char *temp = (char *) realloc(vetor, (i+2) * sizeof(char));
    vetor = temp;
    *(vetor + i) = str_in[k];
    i++;
  }
    k++;
  }
  vetor[i] = '\0';
  return vetor;
​
}