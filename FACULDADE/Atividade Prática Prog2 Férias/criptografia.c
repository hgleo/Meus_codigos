/*

Fazer um programa para receber uma string do usuário (máx. 50 caracteres) e fazer uma
estatística dos caracteres digitados. Por exemplo, para a string "O EXERCICIO E FACIL"”, a
estatística mostrada será 'O' = 2, ' '=3, 'E' = 3, 'X' = 1, 'R' = 1, 'C' = 3, 'I' = 3, 'F' = 1, 'A' = 1, 'L' = 1
*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[51];
    int i, j, len, count,aux;
    int frequencia[26] = {0}; // array para armazenar a frequencia de cada letra
    printf("Digite uma string: ");
    scanf("%50[^\n]",str);
    len = strlen(str);

    // loop para contar a frequencia de cada letra
    for(i=0; i<len; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            frequencia[str[i] - 'a']++;
        } else if(str[i] >= 'A' && str[i] <= 'Z') {
            frequencia[str[i] - 'A']++;
        }
        else if(str[i] == ' '){
            aux++;

        }
    }

    // loop para imprimir a frequencia de cada letra
    for(i=0; i<26; i++) {
        if(frequencia[i] != 0) {
            printf("'%c' = %d, ", i + 'a', frequencia[i]);
        }
    }
    printf("Espaços em branco: %d \n", aux);
    return 0;
}
