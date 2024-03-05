#include <stdio.h>
#include <string.h>

void inverter(char vet[]){
    int i, end, tam = strlen(vet);
    char aux;
    end = tam - 1;
    for(i = 0; i < tam/2; i++){
        aux = vet[i];
        vet[i] = vet[end];
        vet[end] = aux;
        end--;
    }
    printf("%s",vet);
}


int main(){

    char palavra[]="palavra";

    inverter(palavra);

    return 0;
}
