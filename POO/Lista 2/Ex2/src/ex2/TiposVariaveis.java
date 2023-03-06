package ex2;

public class TiposVariaveis {
    public static int varClasse = 10;
    public int varObjeto = 10;

    public TiposVariaveis() {
    }

    public static void main(String[] args) {
        int VarLocal = 10;
        TiposVariaveis tv1 = new TiposVariaveis();
        TiposVariaveis tv2 = new TiposVariaveis();
        ++varClasse;
        System.out.println(varClasse);
        ++tv1.varObjeto;
        System.out.println(tv2.varObjeto);
    }
}
