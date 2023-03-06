package AtividadeOperadoresESintaxeParte3;

public class Q2 {
    public static void main(String[] args) {

        int n = 4; // número de linhas que queremos imprimir

        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= i; j++){
                System.out.print((i*j) + " ");
            }

            System.out.println("");
        }
    }
}
