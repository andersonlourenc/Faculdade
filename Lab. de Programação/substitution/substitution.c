/*
Aluno: Anderson Souza Lourenço
Matrícula: 20212045050347
https://github.com/andersonlourenc/Faculdade/blob/b082eb6e866264a52cc17160e626055f98e73df0/Lab.%20de%20Programa%C3%A7%C3%A3o/Mario%20More/mariomore.c
*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool check_char(string key);

int main(int argc, string argv[])
{
    int tamanho, index;
    string plaintext;
    if (argc != 2) {
        printf("Uso: ./chave de substituição\n");
        return 1;
    }
    if (!check_char(argv[1])) {
        printf("A chave deve conter 26 caracteres exclusivos.\n");
        return 1;
    }
    plaintext = get_string("texto: ");
    tamanho = strlen(plaintext);
    string key = argv[1];
    char ciphertext[tamanho + 1];
    for (int i = 0; i< tamanho; i++) {
        if (islower(plaintext[i])) {
            index = plaintext[i] -97;
            ciphertext[i] = key[index];
                if (isupper(ciphertext[i])) {
                    ciphertext[i] += 32;
                }
        }
        else if (isupper(plaintext[i])) {
            index = plaintext[i] - 65;
            ciphertext[i] = key[index];
                if (islower(ciphertext[i])) {
                    ciphertext[i] -=32;
                }
        }
        else {
            ciphertext[i] = plaintext[i];
        }
    }
    ciphertext[tamanho] = '\0';
    printf("cifrado: %s\n", ciphertext);
}

bool check_char(string key)
{
    int tamanho;

    tamanho = strlen(key);

    if (tamanho != 26) {
        return false;
    }
    for (int i = 0; i < tamanho; i++) {
        key[i] = toupper(key[i]);
    }
    for (int i = 0; i < tamanho; i++) {
        if (!isalpha(key[i])) {
            return false;
        }
        for (int j = i+1; j< tamanho; j++) {
            if (key[i] == key[j]) {
                return false;
            }
        }
    }
    return true;
}
