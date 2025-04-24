#include <stdio.h>
#include <stdlib.h>

void exibir_menu() {
    printf("===============================\n");
    printf("   Calculadora Simples\n");
    printf("===============================\n");
    printf("Selecione uma operação:\n");
    printf("1. Adição\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("5. Sair\n");
    printf("Opção: ");
}

int obter_opcao() {
    int opcao;
    while (1) {
        if (scanf("%d", &opcao) != 1) {  // Verifica se a entrada é um número inteiro
            printf("Entrada inválida! Por favor, insira um número entre 1 e 5.\n");
            while (getchar() != '\n');  // Limpa o buffer do teclado
            printf("Opção: ");
        } else if (opcao < 1 || opcao > 5) {
            printf("Opção inválida! Por favor, insira um número entre 1 e 5.\n");
            printf("Opção: ");
        } else {
            break;
        }
    }
    return opcao;
}

int main() {
    int opcao;
    float num1, num2, resultado;

    while (1) {
        exibir_menu();  // Exibe o menu inicial
        opcao = obter_opcao();  // Lê e valida a opção do usuário

        if (opcao == 5) {
            printf("Obrigado por usar a calculadora! Até a próxima.\n");
            break;  // Encerra o programa
        }

        // Solicita os números para a operação
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);

        switch (opcao) {
            case 1:  // Adição
                resultado = num1 + num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 2:  // Subtração
                resultado = num1 - num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 3:  // Multiplicação
                resultado = num1 * num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 4:  // Divisão
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado: %.2f\n", resultado);
                } else {
                    printf("Erro: Divisão por zero!\n");
                }
                break;
        }
    }

    return 0;
}
