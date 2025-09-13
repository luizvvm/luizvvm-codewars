#include <stdbool.h>
#include <stddef.h>
​
size_t count_sheep(const bool sheep[/* count */], size_t count)
{
  int n_ovelhas = 0;
  for(int i =0; i < count; i++){
    if(sheep[i] == 1) n_ovelhas++;
  }
  return n_ovelhas;
}