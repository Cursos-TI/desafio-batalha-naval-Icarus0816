#include <stdio.h>

int main(){

char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'D', 'F', 'G', 'H', 'J'}; //declara o array que representa o 'x' = colunas
int linha[10] = {1, 2, 3,4,5,6,7,8,9,10}; //declara o array que representa o 'y' = linhas
int tabuleiro[10][10] ={ //tabuleiro preenchido manualmente

    {0, 0, 0 , 0, 0, 0, 0, 0, 0, 0},
    {0, 3, 0 , 0, 0, 0, 0, 0, 0, 0},
    {0, 3, 0 , 0, 0, 0, 0, 0, 0, 0},
    {0, 3, 0 , 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0 , 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0 , 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0 , 0, 3, 3, 3, 0, 0, 0},
    {0, 0, 0 , 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0 , 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0 , 0, 0, 0, 0, 0, 0, 0}

};

printf("BATALHA NAVAL\n");
printf(" ");

for(int j = 0 ;j <= 10; j++){ //usando um loop para mostrar o array coluna.
    printf("%2c", coluna[j]);
}

for (int i = 0; i < 10; i++) //loop aninhado para mostrar a matris e sempre que completar 1 linha adicionar uma variavel da array 'linha'
{
    printf("\n%d|", linha[i]); 
    for (int k = 0; k < 10; k++)
    {
        printf("%2d", tabuleiro[i][k]);
    }
}
return 0;














}