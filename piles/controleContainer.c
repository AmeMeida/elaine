/* Documentação
Nome: Pedro Augusto Lopes Ramos de Oliveira
Turma: 1ºDSD
Data: 25/10/2021
Professor(a): Elaine Brito
Matéria: Lógica de programação

Objetivo do programa: Trata-se de um sistema de pilhas para controle de estoques, onde um valor só pode ser tirado ou removido de cima. 
A quantidade de pilhas e o tamanho de cada pilha pode ser alterado nas constantes e deverá funcionar corretamente. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Constantes
#define PILESIZE 4 // Define o tamanho das pilhas
#define PILEAMOUNT 2 // Define a quantidade de pilhas

// Definições de tipo
typedef enum {false, true} bool; // Define uma variável booleana, que usa 0 como false e 1 como true, além de criar os tipos. 
typedef struct pile {   // Estrutura que forma as pilhas, onde a pilha em si é um array definido em PILESIZE. 
    int containerPile[PILESIZE], top;
} PILE; 

// Protótipos das funções
bool isEmpty (PILE porto);
bool isFull (PILE porto);
bool isPresent (int containerCode, int *selectedPile, PILE porto[PILEAMOUNT]);
void lowerPile (PILE porto[PILEAMOUNT], int *selectedPile);
void push (int containerCode, PILE *porto, int selectedPile);
void showPile (PILE porto);
int pop (int containerCode, int stopper, PILE *porto, int selectedPile);

int main (void) {
    PILE porto[PILEAMOUNT];     
    int containerCode, selectedPile;
    char option;

    // O for irá inicializar todas as variáveis top de todas as pilhas como -1.
    for (int count = 0; count < PILEAMOUNT; count++) {
        porto[count].top=-1;
    }

    // Cria um menu de opções, e manter ele em loop para ir executando cada ação e função enquanto não houver o comando de saída 'q'
    while (option!='q') {
        printf ("\n\n\n\nInforme a ação que deseja executar: \n\n\t-> Inserir novo container [i]\n\n\t-> Remover o último container [r]\n\n\t-> Verificar os containers [s]\n\n\t-> Sair [q]\n"); 
        printf ("\nOpção selecionada:  "); 
        option = tolower(getchar());

        switch (option) {
            // Caso o usuário selecione "insert"
            case 'i': 
                printf ("\nInforme o código do container a ser inserido:  ");
                scanf ("%d", &containerCode); 
                lowerPile(porto, &selectedPile);
                push(containerCode, &porto[selectedPile], selectedPile); 
                break;

            // Caso o usuário selecione "remove"
            case 'r':
                printf("\nInforme o código do container a ser removido:  ");
                scanf ("%d", &containerCode); 
                /* Depois de o código ser lido, a função de remover será chamada.
                A função isPresent é usada para garantir que o valor inserido esteja 
                dentro do tanto de pilhas especificado na constante. */
                if (isPresent(containerCode, &selectedPile, porto)) {
                    printf ("\n-> Código do container removido:  %d", pop(containerCode, isPresent(containerCode, &selectedPile, porto), &porto[selectedPile], selectedPile)); 
                } else {
                    printf ("\t-> Impossível retirar!");
                }
                break;

            // Caso o usuário selecione "show"
            case 's':  
                /* A estrutura de repetição garante que a pilha escolhida para ser mostrada esteja dentro do intervalo de pilhas.
                O próprio scanf é atribuido a variável global de controle de pilhas e usado pela função. */
                do {
                printf ("\nInforme a pilha que você deseja analisar:  ");
                scanf ("%d", &selectedPile);
                selectedPile--;
                } while (selectedPile < 0 || selectedPile >= PILEAMOUNT);
                
                printf ("-> Conteúdo da pilha %d:", selectedPile+1);
                showPile(porto[selectedPile]);
                break;

            // Caso o usuário selecione "quit" 
            case 'q':
                printf ("-> Adios\n\n"); 
                break;

            // Caso o usuário insira um valor diferente do especificado no menu
            default: 
                printf ("\nInsira uma opção válida.");
                break;
        }
        setbuf (stdin, NULL);
    }
    return 0;
}

// Verifica se a pilha está cheia, retornando true ou false. 
bool isFull (PILE porto) {
    return (porto.top==PILESIZE-1);
}

// Verifica se a pilha está vazia, retornando true ou false. 
bool isEmpty (PILE porto) {
    return (porto.top==-1);
}

// Verifica se o valor inserido pelo usuário para remover um container está presente nas pilhas, e, se sim, em qual.
bool isPresent (int containerCode, int *pile, PILE porto[PILEAMOUNT]) {
    for (int count = 0; count < PILEAMOUNT; count++) {
        if (isEmpty(porto[count])) {
            continue;
        } else if (porto[count].containerPile[porto[count].top]==containerCode) {
            *pile=count;
            return true;
        } 
    }
    // Se o código chegou aqui, nenhuma das pilhas tinha o valor, então a função retorna um false, *is not Present*. 
    return false;
}

// Descobre qual das pilhas está mais vazia. 
void lowerPile (PILE porto[PILEAMOUNT], int *selectedPile) {
    int smallestPile, smallestPileSize=PILESIZE+1;
    for (int count = 0; count < PILEAMOUNT; count++) {
        if (porto[count].top < smallestPileSize) {
            smallestPileSize=porto[count].top; 
            smallestPile=count;
        }
    }
    *selectedPile = smallestPile; 
}

// Insere um valor dentro da pilha especificada.
void push (int containerCode, PILE *porto, int selectedPile) {
    if (isFull(*porto)) {
            printf ("\t-> Impossível empilhar!"); 
    } else {
        porto->top++;
        porto->containerPile[porto->top] = containerCode; 
        printf ("-> O código de container %d foi inserido com sucesso na posição %d, pilha %d.\n", containerCode, porto->top+1, selectedPile+1);
    }
}

// Remove e retorna um valor da pilha especificada, se for igual ao inserido.
int pop (int containerCode, int stopper, PILE *porto, int selectedPile) {
    int topValue;
    if (stopper) {
        topValue=porto->containerPile[porto->top];
        porto->containerPile[porto->top]=0;
        printf ("\n-> O container %d da pilha %d foi retirado com sucesso.", porto->top+1, selectedPile+1);
        porto->top--;
        return topValue; 
    } 
}

// Mostra toda a pilha na tela.
void showPile (PILE porto) {
    if (porto.top == -1) {
        printf ("\nA pilha está vazia.");
    } else {
        for (int count = 0; count<=porto.top; count++)  {
            printf ("\n%d. %d", count+1, porto.containerPile[count]); 
        }
    }
}