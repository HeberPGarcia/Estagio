//INVERSOR DE STRING
#include <stdio.h>
#define LIMITE 50

int main(){
    char vetor[LIMITE+1] = {};
    scanf(" %[^\n]", vetor);
    for(int i = LIMITE; i >= 0; i--){
        printf("%c", vetor[i]);
    }
}
