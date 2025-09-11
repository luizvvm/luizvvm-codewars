public class BlueAndRedMarbles {
  public static double guessBlue(int blueStart, int redStart, int bluePulled, int redPulled) {
    blueStart -= bluePulled;
    redStart -= redPulled;
    
    float total = blueStart + redStart;
    return blueStart/total;
  }
}