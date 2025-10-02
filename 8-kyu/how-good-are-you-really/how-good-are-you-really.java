import java.util.Arrays;
​
public class Kata {
  public static boolean betterThanAverage(int[] classPoints, int yourPoints) {
    float media = Arrays.stream(classPoints).sum();
    return yourPoints > media/classPoints.length ? true : false;
  }
}