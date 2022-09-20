package treinojava;

public class ExemploWhile {

    public static void main(String[] args){
        double mesada = 50.0;
        while (mesada > 0) {
            double valorDoce = 25;
            if(valorDoce > mesada) {
                mesada = mesada - valorDoce;
            }
            System.out.println("Apos a compra: " + valorDoce);
            mesada = mesada - valorDoce;
        }
    System.out.println("Mesada: " + mesada);
    }
}
