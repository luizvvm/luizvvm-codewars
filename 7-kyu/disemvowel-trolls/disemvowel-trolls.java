public class Troll {
    public static String disemvowel(String str) {
        if (str == null || str.isEmpty()) {
            return str;
        }
​
        StringBuilder resultado = new StringBuilder();
        String vogais = "aeiouAEIOU";
​
        for (char c : str.toCharArray()) {
            if (vogais.indexOf(c) == -1) {
                resultado.append(c);
            }
        }
​
        return resultado.toString();
    }
}