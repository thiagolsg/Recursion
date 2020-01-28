#include <stdio.h>
#define MAX 300

int verificapar(char palavra[], int i) {
    if (palavra[i+2] == '\0') return 0;
    if (palavra[i] == palavra[i+2]){
        return   1+verificapar(palavra, i+1 );
    }
    else{
        verificapar(palavra,i+1);
    }
    
}

int main() {
    char palavra[MAX];
    char letra;
    scanf("%s", palavra);
    printf("%d\n", verificapar(palavra, 0));
}