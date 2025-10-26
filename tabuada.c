#include <stdio.h>

int main () {

    for(int i = 1; i <= 10; i++){ //Estrutura do loop externo
        
        for(int j = 1; j <= 10; j++){ //Estrutura do loop interno

            printf("%d x %d = %d\n", i, j, i * j);

        }

        printf("--- Fim da tabuada do %d ---\n\n", i);
    }

    return 0;
}
