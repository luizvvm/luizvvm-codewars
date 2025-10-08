public class Kata{
  public static boolean validateHello(String greetings){
    greetings = greetings.toLowerCase();
    String[] cumprimentos = {"hello", "ciao", "salut", "hallo", "hola", "ahoj", "czesc"};
    for (int i =0; i < 7; i++){
        if(greetings.contains(cumprimentos[i])) return true;
        }
    return false;
  }
  
}