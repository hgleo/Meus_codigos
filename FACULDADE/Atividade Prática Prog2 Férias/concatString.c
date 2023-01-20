
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char string1[20] = "Hello";
    char string2[20] = "World";
    char string3[40];
    strcpy(string3, string1);
    strcat(string3, " ");
    strcat(string3, string2);
    printf("%s", string3);
    return 0;
}
/*
#include <stdio.h>

void concatenate(char string1[], char string2[], char result[]) {
    int i, j;
    for (i = 0; string1[i] != '\0'; i++) {
        result[i] = string1[i];
    }
    for (j = 0; string2[j] != '\0'; j++) {
        result[i + j] = string2[j];
    }
    result[i + j] = '\0';
}

int main() {
    char string1[20] = "Hello";
    char string2[20] = "World";
    char result[40];
    concatenate(string1, string2, result);
    printf("%s", result);
    return 0;
}

*/
