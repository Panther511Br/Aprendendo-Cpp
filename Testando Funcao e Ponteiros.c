#include <stdio.h>

//void faz com que a funcao retorne nada.
void calculadora(int a, int b, int *soma, int *mult){
    *soma = a + b;
    *mult = a * b;

//os ints dentro dos parenteses sao as entradas que a funcao vai armazenar.
};

int main()
{ int soma , multiplicacao;
    int x = 2;
    int y = 3;
    calculadora(x, y, &soma, &multiplicacao);

    printf("SOMA: %d ", soma);
    printf("MULTIPLICACAO: %d", multiplicacao);

    return 0;


}
