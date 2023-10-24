#include <stdio.h>
#include <stdlib.h>

void PesquisaLinear(int vetor[], int tam, int chave){

    for(int i = 0; i < tam; i++){
        if(vetor[i] == chave){
            printf("\n\nValor encontrado!! Na posicao [%d]\n\n", i);
        }
        else{
            if(i == tam)
                printf("\n\nValor nao encontrado!!");
        }
    }

}


int main()
{
    int vetor[5];
    int chave;

    for(int i = 0; i < 5; i++){
        printf("Insira valores: ");
        fflush(stdin);
        scanf("%d", &vetor[i]);
    }

    printf("\n\nInsira a chave: ");
    fflush(stdin);
    scanf("%d", &chave);

    PesquisaLinear(vetor, 5, chave);

    return 0;
}
