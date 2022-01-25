#include <stdio.h>
#include <stdlib.h>

char gerarNumero();
char numValidador(char identificador[10]);

int main(){
    char iso[3], conteiner[11];
    int i, j;

    printf("ISO: ");
    scanf("%s", &iso);

    for(i=0;i<3;i++){
        conteiner[i] = iso[i];
    }

    conteiner[i] = 'U';

    for(i=i+1;i<10;i++){
        conteiner[i] = gerarNumero();
    }

    conteiner[10] = numValidador(conteiner);
    conteiner[11] = '\0';

    printf("%s\t\t", iso);
    printf("%s\n", conteiner);

}

char gerarNumero(){
    int num = rand() % 10;;
    char numC = num+'0';

    return numC;
}

char numValidador(char identificador[10]){
    int num = 1;
    char numC = num+'0';
    switch()
    return numC;
}
