#include <stdio.h>
​
int solution(int number) {
  int sum = 0;
  number -= 1;
  if(number <= 0) return 0;
  
  while(number > 0){
  if((number % 3) == 0 || ((number % 5) == 0)){
    sum += number;
  }
    number -=1;
  }
    return sum;
}