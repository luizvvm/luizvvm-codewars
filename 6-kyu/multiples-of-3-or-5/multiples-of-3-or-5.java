public class Solution {
​
  public int solution(int number) {
    int sum = 0;
    number --;
    if(number <= 0) return 0;
    while(number > 0){
      if(number % 3 == 0 || number % 5 == 0) sum += number;
      number --;
    }
    return sum;
  }
}