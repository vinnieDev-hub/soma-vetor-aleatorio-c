#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int valor[5], i, soma = 0;
    
    // Inicializa o gerador de números aleatórios com o tempo atual para garantir aleatoriedade
    srand(time(NULL));
    
    for(i = 0; i < 5; i++) {
        // Gera um número aleatório entre 1 e 100 (você pode ajustar o intervalo se quiser)
        valor[i] = rand() % 100 + 1;
        soma += valor[i];
        // Opcional: imprimir o valor gerado para verificar
        printf("Valor %d gerado: %d\n", i+1, valor[i]);
    }
    printf("A soma vale: %d\n", soma);
    return 0;
}
