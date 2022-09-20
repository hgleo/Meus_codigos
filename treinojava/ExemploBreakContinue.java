package treinojava;

public class ExemploBreakContinue {
    public static void main(String[] args){
        for (int numero = 0; numero < 10; numero++){
            if (numero == 2) continue;
            System.out.println(numero);
        }   
    }
}