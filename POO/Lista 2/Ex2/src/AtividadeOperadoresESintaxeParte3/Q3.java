package AtividadeOperadoresESintaxeParte3;

public class Q3 {
    public static void main (String[] args){
        for(int i = 1; i <=10; i++){
            int num = i;

            for(int j = (num-1); j>=1; j--){
                num *= j;
            }
            System.out.println("Fatorial de "+ i+" = "+num);
        }
    }
}
