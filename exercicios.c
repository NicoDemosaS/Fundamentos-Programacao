#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

int main()
{
    //COORD c;
    //c.X = 35;
    //c.Y = 15;
    //SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
    /* Aula de Fundamentos da Programação
                UTFPR Medianeira          */
    //setlocale(LC_ALL,"Portuguese");
    //Exercicio UM!

    //int valor1;
    //int sucessor;

    //printf("Digite um numero:");
    //scanf("%d", &valor1);

    //printf("%d, %d, %d", valor1, valor1+1, valor1-1);


    //Exercicio DOIS!

    //int codigo;
    //char descricao[150];
    //float preco;

    //printf("Codigo do Produto:");
    //scanf("%d", &codigo);
    //setbuf(stdin, NULL);

    //printf("Descricao do Produto:");
    //gets(descricao);
    //setbuf(stdin, NULL);

    //printf("Valor do Produto:");
    //scanf("%f", &preco);
    //setbuf(stdin, NULL);

    //printf("Codigo: %d, Descricao: %s, Preco: %.2f", codigo, descricao, preco);


    //Exercicio TRES!
    /*
    int a, b, aux;
    printf("Digite o valor a:");
    scanf("%d", &a);
    printf("Digite o valor b:");
    scanf("%d", &b);

    aux = b;
    b = a;
    a = aux;


    printf("A: %d, B: %d", a, b);
    */

    //Exercicio Quatro
    
    float comprimento, largura, altura, volume;
    printf("Comprimento: ");
    scanf("%f", &comprimento);
    printf("Largura: ");
    scanf("%f", &largura);
    printf("Altura: ");
    scanf("%f", &altura);

    volume = comprimento * largura * altura;
    printf("A caixa com \nComprimento: %.2f \nLargura: %.2f \nAltura: %.2f \nVolume Total: %.2f", comprimento, largura, altura, volume);


    return 0;
}
