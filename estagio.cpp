//SEQUÊNCIA DE FIBONACCI
#include <stdio.h>

int main(){
    int numero, soma = 1, anterior = 1, proximo = 1;
    scanf("%d", &numero);
for(int i = 0; i <= numero; i++){
    if(i >= 0){
        if(soma == numero || numero == 0){
            printf("O número %d corresponde a sequência.", numero);
            return 0;
        }
        soma = anterior + proximo;
        anterior = proximo;
        proximo = soma;
        }

    }
    printf("O número %d não corresponde a sequência ",numero);
    return 0;
}

