public class Kata {
  public static int[] digitize(long n) {
    int i = 1;
    int j = 0;
    long ntemp = n;
​
    //caso especial
    if (n == 0) return new int[]{0};
    
    //pegando o tamanho do número (quantidade de dígitos)
    while(true){
      ntemp /= 10;
      if(ntemp >= 10) i++;
      if(ntemp < 10) break;
    }
    i ++;
    
    int[] array = new int[i];
    
    //pegando cada dígito do número e colocando no array
    while(true){
      if(n < 10) break;
      array[j] = (int) (n%10);
      n = n/10;
      j++;
    }
    array[j] = (int) n;
      return array;
  }
}