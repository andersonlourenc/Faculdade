#include<stdio.h>

int main (void)
{
  int numlin, numcol,linha, coluna, contador = 1;
  
  printf("Digite a quantidade de linhas da matriz: ");
  scanf("%d", &numlin);
  printf("Digite a quantidade de colunas da matriz: ");
  scanf("%d", &numcol);

  float matriz[numlin][numcol];
  float matriz2[numlin][numcol];
  float matriz3[numlin][numcol];
  float t = 0.0;
  
  printf ("\nDigite os valores para os elementos da primeira matriz: \n\n");
  
  for (linha=0; linha<numlin; linha++)
    for (coluna=0; coluna<numcol; coluna++)
    {
      printf ("\nElemento[%d][%d] = ", linha, coluna);
      scanf ("%f", &matriz[linha][coluna]);
    }

  printf ("\nDigite os valores para os elementos da segunda matriz: \n\n");

  for (linha=0; linha<numlin; linha++)
    for (coluna=0; coluna<numcol; coluna++)
    {
      printf ("\nElemento[%d][%d] = ", linha, coluna);
      scanf ("%f", &matriz2[linha][coluna]);
    }

  printf("\nmatriz 1:\n\n");

  for (linha=0; linha<numlin; linha++)
  {
    for (coluna=0; coluna<numcol; coluna++)
    {
      printf ("%0.1f", matriz[linha][coluna]);
      printf(" ");    
    }
    printf("\n");
  }

  printf("\nmatriz 2:\n\n");

  for (linha=0; linha<numlin; linha++)
  {
    for (coluna=0; coluna<numcol; coluna++)
    {
      printf ("%0.1f", matriz2[linha][coluna]);
      printf(" ");
    }
    printf("\n");
  }

  printf("\nusando (1-t*A+t*B): \n\n");
    while (t<1.1) 
    {
        printf("matriz %d com t=%0.1f:\n",contador,t);
        for (linha=0; linha<numlin; linha++)
        {
            for (coluna=0; coluna<numcol; coluna++)
            {
                matriz3[linha][coluna] = ((1-t)*matriz[linha][coluna]+t*matriz2[linha][coluna]);
                printf ("%0.1f", matriz3[linha][coluna]);
                printf(" ");
            }
            printf("\n");
        }
        printf("\n");
        t=t+0.1;
        contador++;
    }
    return(0);
}