/*
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
*/


/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char texto[100];
    scanf("%s", texto);
    //strcpy("%c", texto);
    
    printf("%s", texto);

}*/

/*
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    char v[n] = {0};
    scanf(" %[^\n]", v);
    for(int i = n-1; i >= 0; i--){
        printf("%c", v[i]);
    }
}*/


#include <stdio.h>
#define LIMITE 50

int main(){
    char vetor[LIMITE+1] = {};
    scanf(" %[^\n]", vetor);
    for(int i = LIMITE; i >= 0; i--){
        printf("%c", vetor[i]);
    }
}
