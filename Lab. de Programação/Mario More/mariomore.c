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