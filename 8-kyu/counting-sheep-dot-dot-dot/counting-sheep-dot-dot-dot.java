public class Counter {
    public static int countSheeps(Boolean[] arrayOfSheeps) {
      int n_ovelhas = 0;
      //Em java temos o Boolean e o boolean, no Boolean pode ter "null" também
      //Por isso temos que fazer arrayOfSheeps[i] != null
      for(int i =0; i<arrayOfSheeps.length; i++){
        if(arrayOfSheeps[i] != null && arrayOfSheeps[i] == true) n_ovelhas+= 1; 
      }
        return n_ovelhas;
    }
}