#include <stdbool.h>
​
bool solution(const char *string, const char *ending)
{
  int i = 0;
  int k = 0;
  
  //caso especial
  if(ending[k] == '\0') return true;
  
  while(1){
    if(string[i] == '\0'){
    if(ending[k] == '\0'){
    return true;
    }
    else{
      return false;
      }
    }
      
    if(string[i] == ending[k]){
      if(ending[k] != '\0') k++;
    }
    else{
    i = i - k;
    k = 0;
    }
    i++;
    
  }
    return false;
}