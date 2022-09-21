package treinojava;

public class exdefor {
    public static void main(String[] args){
        String Alunos[] = { "Hugo","Gabriela", "Matheus"};
           /* for (int i = 0; i < alunos.length; i++) {   
                System.out.println("O aluno no índicie x= " + i + " é " + alunos[i]); */
                for (String Aluno : Alunos) {
                    System.out.println("Nome do Aluno: " + Aluno);
        }    
    }
}
