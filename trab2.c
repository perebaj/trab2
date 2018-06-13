//Bibliotecas


#include <stdio.h>
#include <stdlib.h>// rand, srand
#include <time.h> //time
#include <string.h> //strlen

//Variaveis Globais


#define MAX 100

//Protótipos


void gerar_matriz_aleatoria(int _linha, int _coluna, char _matriz[][MAX]);
void dimensao(int *_linha, int *_coluna);
int aleatorio(int min, int max);
void sorteio_tamanho(int *_linha, int *_coluna);
void matriz_zerada(char _matriz2[][MAX], int _linha, int _coluna);
void quant_palavras(int *_quantidade_palavras);
void digita_palavra(char _palavras[][MAX], int _quantidade_palavras);
void verif_tamanho(char _palavras[][MAX], int _quantidade_palavras, int _tamanho_palavras[]);
//Programa Principal


int main(){
    srand(time(NULL));
    int linha, coluna;
    char matriz[MAX][MAX];
    char matriz_zero[MAX][MAX];
    char palavras[MAX][MAX]; //matriz de palavras 
    int tamanho_palavras[MAX];
    int quantidade_palavras;
    int linha2, coluna2;// tamanho matriz zero
    int i,j;
    //dimensao(&linha, &coluna);
    //gerar_matriz_aleatoria(linha, coluna, matriz);
    sorteio_tamanho(&linha2, &coluna2);
    matriz_zerada(matriz_zero, linha2, coluna2);
    quant_palavras(&quantidade_palavras);
    digita_palavra(palavras, quantidade_palavras);
   

    //verificação
    for (i = 0; i < quantidade_palavras; i++){
        printf("%s\n", palavras[i]);
    }
    verif_tamanho(palavras, quantidade_palavras, tamanho_palavras);
    //verificação
    for(i = 0; i < quantidade_palavras; i++){ 
        printf("%d\n", tamanho_palavras[i]);
    }
        

    return 0;
}


//Obejetivo
//Parametros
//retorno
int aleatorio(int min, int max){
    //srand( time (NULL) );
    return min + (rand() % (max - min + 1));
}
//Obejetivo
//Parametros
//retorno
void dimensao(int *_linha, int *_coluna){
    printf("Digite o número de linhas:");
    scanf("%d", _linha);
    printf("\n");
    printf("Digite o número de colunas:");
    scanf("%d", _coluna);
    printf("\n");
}
//Obejetivo
//Parametros
//retorno
void gerar_matriz_aleatoria(int _linha, int _coluna, char _matriz[][MAX]){
    int i, j;
    for (i = 0; i < _linha; i++){
        for (j = 0; j < _coluna; j++){
            _matriz[i][j] = 'A' + aleatorio(0, 25);
            printf("%3c", _matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void sorteio_tamanho(int *_linha, int *_coluna){
     *_linha = aleatorio(10,20); //linha aleatoria
     *_coluna = aleatorio(10,20); // coluna aleatoria
}
void matriz_zerada(char _matriz2[][MAX], int _linha, int _coluna){
    int i,j; //contadores
    for (i = 0; i < _linha; i++){
        for (j = 0; j < _coluna; j++){
            _matriz2[i][j] = 0;
            printf("%d ", _matriz2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void quant_palavras(int *_quantidade_palavras){
    printf("Digite a quantidade de palavras que deseja inserir na matriz\n");
    scanf("%d", _quantidade_palavras);
}
void digita_palavra(char _palavras[][MAX], int _quantidade_palavras){
    int i,j; // contadora
    printf("Digite as palavras\n");
    for (i = 0; i < _quantidade_palavras; i++){
        printf("Digite a #%d palavra\n", i+1);
        scanf("%s", &_palavras[i]);
        j=0;
        while(_palavras[i][j] != '\0'){
            if(_palavras[i][j]>= 97){
                _palavras[i][j] -=32;
                j++;
            }
        }
    }
}
void verif_tamanho(char _palavras[][MAX], int _quantidade_palavras, int _tamanho_palavras[]){
    int i;
    for(i = 0; i < _quantidade_palavras; i++){
        _tamanho_palavras[i] = strlen(_palavras[i]); 
    }
}

//Obejetivo
//Parametros
//retorno
void sorteio_orientacao(int _linha, int _coluna){
    int posicao_inicial;
    int posicao_final;
    int orientacao;// horientação vertical ou horizontal
    orientacao = aleatorio(0,1);// 0 == linha// 1 == coluna
    if (orientacao == 0){
       posicao_inicial = aleatorio(0, _coluna);

       /*posicao innicial-_coluna
       se isso ^ for maior ou igual, ta ok senha sorteia dnv
       */

    }
}
