/*
Aluno: Anderson Souza Lourenço
Matrícula: 20212045050347
https://github.com/andersonlourenc/Faculdade/blob/b082eb6e866264a52cc17160e626055f98e73df0/Lab.%20de%20Programa%C3%A7%C3%A3o/Mario%20More/mariomore.c
*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

bool apenasDigitos(string text);
char girar(char p, int k);

int main(int argc, string argv[])
{
    int k, length;
    string plaintext;
    if (argc != 2 || !only_digits(argv[1])) {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    k = atoi(argv[1]);
    plaintext = get_string("plaintext: ");
    length = strlen(plaintext);
    char ciphertext[length + 1];
    for (int i = 0; i< length; i++)
    {
        ciphertext[i] = rotate(plaintext[i], k);
    }
    ciphertext[length] = '\0';
    printf("ciphertext: %s\n", ciphertext);
    return 0;
}

bool apenasDigitos(string text)
{
    int length;

    length = strlen(text);

    for (int i = 0; i < length; i++){
        if (!isdigit(text[i])) {
            return false;
        }
    }
    return true;
}
char girar(char p, int k)
{
    char pi, c, ci;
    if (isupper(p)) {
        pi = p - 65;
        ci = (pi + k)%26;
        c = ci + 65;
    }
    else if (islower(p)) {
        pi = p - 97;
        ci = (pi + k)%26;
        c = ci + 97;
    }
    else {
        return p;
    }
    return c;

}
