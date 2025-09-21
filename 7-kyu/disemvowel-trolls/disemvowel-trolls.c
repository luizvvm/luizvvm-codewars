#include <stdlib.h>
#include <string.h>
​
char *disemvowel(const char *str)
{
  int tam = strlen(str);
  char *string2 = (char *) malloc(sizeof(char));
​
  int i = 0;
  int j = 0;
  while(i < tam){
  if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' &&
     str[i] != 'o'  && str[i] != 'u' && str[i] != 'A' &&
     str[i] != 'E'  && str[i] != 'I' &&
     str[i] != 'O' && str[i] != 'U'){
    
    string2 = (char *) realloc(string2, (j + 1) * sizeof(char));
    string2[j] = str[i];
    j ++;
  }
    i++;
    }
    string2[j] = '\0';
  return string2;
}