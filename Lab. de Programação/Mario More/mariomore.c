/*
Aluno: Anderson Souza Lourenço
Matrícula: 20212045050347
https://github.com/andersonlourenc/Faculdade/blob/b082eb6e866264a52cc17160e626055f98e73df0/Lab.%20de%20Programa%C3%A7%C3%A3o/Mario%20More/mariomore.c
*/

#include <stdio.h>
#include <cs50.h>

int main () {
    
    int altura;
    do {
    altura = get_int ("Entre com a altura: ");
    }
    while (altura < 1 || altura > 8);
    
    for (int linha = 0; linha < altura; linha++) {
        for (int space = 0; space < altura - linha - 1; space++) {
            printf(" ");
        }
        for(int coluna =0; coluna <= linha; coluna++) {
        printf("#");
        }
        printf("  ");
        for (int coluna = 0; coluna <= linha; coluna++) {
            printf("#");
        }
        printf("\n");
    }
}