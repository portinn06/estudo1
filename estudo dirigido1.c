#include <stdio.h>

int main() {
    int climaBom, tempoLivre, dinheiroSuficiente, sentindoBem;
    
   
    printf("O clima esta bom para o passeio? (1 para Sim, 0 para Nao): ");
    scanf("%d", &climaBom);


    printf("Voce tem tempo livre para o passeio? (1 para Sim, 0 para Nao): ");
    scanf("%d", &tempoLivre);

 
    printf("Voce tem dinheiro suficiente para o passeio? (1 para Sim, 0 para Nao): ");
    scanf("%d", &dinheiroSuficiente);


    printf("Voce esta se sentindo bem para o passeio? (1 para Sim, 0 para Nao): ");
    scanf("%d", &sentindoBem);

  
    if (climaBom && tempoLivre && dinheiroSuficiente && sentindoBem) {
        printf("Voce vai fazer o passeio!\n");
    }
   
    else if (!climaBom || !tempoLivre || !dinheiroSuficiente || !sentindoBem) {
        printf("Voce nao vai fazer o passeio.\n");
    }

    return 0;
}

