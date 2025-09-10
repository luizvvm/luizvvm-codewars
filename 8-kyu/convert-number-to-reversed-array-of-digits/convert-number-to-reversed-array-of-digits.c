#include <stddef.h>
#include <inttypes.h>
​
void digitize (uint64_t n, uint8_t digits[], size_t *length_out)
{
    digits[0] = 6; // write your answer to the pre-allocated digits array
    *length_out = 1; // report the number of digits
  
  int i = 0;
  while(1){
    if(n/10 < 1) break;
    digits[i] = n%10;
    n = n/10;
    i++;
    *length_out += 1;
  }
  digits[i] = n;
}