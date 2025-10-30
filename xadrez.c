#include <stdio.h>

//Torre: move-se horizontalmente ou verticalmente
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}
//Rainha: move-se em todas as direções (exemplo: horizontal esquerda)
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}
//Bispo: move-se na diagonal (Cima Direita) com loops aninhados +  recursão
void moverBispo(int casas) {
    if (casas <= 0) return;

//Loop externo: movimento vertical (Cima)
for (int v = 0; v < 1; v++) {

//Loop interno: movimento horinzontal (Direita)
    for (int h = 0; h < 1; h++) {
        printf("Cima Direita\n");
    }
}
     moverBispo(casas - 1);
}

//Função principal
int main () {
    //Quantidade de casas para cada peça
    int casasTorre = 5;
    int casasBispos = 5;
    int casasRainha = 8;
//Movimento da Torre
printf ("Movimento da Torre:\n");
moverTorre(casasTorre);
printf("\n");
//Movimento do Bispo
printf ("Movimento da Bispo:\n");
moverBispo(casasBispos);
printf("\n");
//Movimento da Rainha
printf ("Movimento da Rainha:\n");
moverRainha(casasRainha);
printf("\n");
/*
Movimento do Cavalo (Loops Complexos)
Cavalo move-se em "L": duas casas para cima, uma para a direita
*/
printf("Movimento do Cavalo\n");

int linhas = 2; //duas casas para cima
int colunas = 1; //uma casa para a direita
int i,j;

//Loop externo: vertical(para cima)
for (size_t i = 0; i < linhas; i++) {
    if (i == 1) 
    {
    printf("Cima\n"); continue;
    }
    printf("Cima\n");
}

//Loop interno: horizontal (para direita)
j = 0;
while (j < colunas)
{
    printf("Direita\n");
    j++;
    if (j > colunas) break;
}

return 0;

}    