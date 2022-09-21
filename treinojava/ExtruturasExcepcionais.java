package treinojava;

import java.util.InputMismatchException;
import java.util.Locale;
import java.util.Scanner;

public class ExtruturasExcepcionais{

    /**
     * @param args
     */
    public static void main (String[] args) {
        try{
        Scanner scanner = new Scanner(System.in).useLocale(Locale.US);
        
        System.out.println("Digite seu nome:");
        String nome = scanner.next();

        System.out.println("Digite seu sobrenome:");
        String sobrenome = scanner.next();

        System.out.println("Digite sua idade: ");
        int idade = scanner.nextInt();

        System.out.println("Digite sua altura: ");
        double altura = scanner.nextDouble();

        // Imprimindo os dados obtidos pelo User.

        System.out.println("Olá, me chamo " + nome.toUpperCase() + " " + sobrenome.toUpperCase());
        System.out.println("Tenho " + idade + " anos \n");
        System.out.println("Minha altura é: " + altura);
        scanner.close();
        }
        catch(InputMismatchException e ){
        System.err.println("Os campos de idade e/ou altura precisam ser numéricos");
        }
    }
}
