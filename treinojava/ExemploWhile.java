package treinojava;

public class ExemploWhile {
    
    public static void main(String[] args){
        double cash = 3000.0;
        double aux = cash;
        while (cash > 3000.0) { 

            Double valueCandy = 1500.0;
                if(valueCandy > cash) {
                    System.out.println("Não pode comprar. ");
                }
                else{
                    aux = cash - valueCandy;
                }   
        }
        System.out.println("Mesada: " + cash);
        System.out.println("Após comprar : " + aux);
    }
}
