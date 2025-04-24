#include <stdio.h>

void exibir_menu() {
    printf("=====================================\n");
    printf("     CALCULADORA SIMPLES            \n");
    printf("=====================================\n");
    printf("Escolha uma operação: \n");
    printf("1. Soma\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("5. Sair\n");
    printf("=====================================\n");
}

int main() {
    int opcao;
    float num1, num2, resultado;

    do {
        exibir_menu();
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao < 1 || opcao > 5) {
            printf("Opção inválida! Tente novamente.\n");
            continue; 
        }

        if (opcao == 5) {
            printf("Saindo... Até logo!\n");
            break;  
        }

        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);

        switch(opcao) {
            case 1:
                resultado = num1 + num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado: %.2f\n", resultado);
                } else {
                    printf("Erro: Divisão por zero!\n");
                }
                break;
        }

    } while (opcao != 5);

    return 0;
}
