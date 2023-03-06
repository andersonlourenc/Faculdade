package AtividadeOperadoresESintaxeParte3;

public class Cont_de_exercise {
    public static void main(String[] args){
        int x = 13, y = 0;
        while(y != 1){
            if(x%2 == 0){
                y = x/2;
            } else {
                y = 3 * x + 1;
            }
            System.out.print(y+", ");
            x = y;
        }
    }
}


