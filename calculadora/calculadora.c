#include <stdio.h>

int main() {
    int opcao, N1, N2, resultado;
    char repetir = 's';

    while (repetir == 's' || repetir == 'S') {
        printf("=================\nCalculadora Simples\n==================\n");
        printf("Selecione uma operação:\n1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair\nOpção: ");
        scanf("%d", &opcao);

        if (opcao == 5) {
            printf("Obrigado por usar a calculadora! Até a próxima!\n");
            break;
        }

        if (opcao < 1 || opcao > 5) {
            printf("Opção inválida! Insira novamente.\n");
            continue;
        }

        printf("Digite o primeiro número: ");
        scanf("%d", &N1);
        printf("Digite o segundo número: ");
        scanf("%d", &N2);

        switch (opcao) {
            case 1:
                resultado = N1 + N2;
                printf("Resultado: %d + %d = %d\n", N1, N2, resultado);
                break;
            case 2:
                resultado = N1 - N2;
                printf("Resultado: %d - %d = %d\n", N1, N2, resultado);
                break;
            case 3:
                resultado = N1 * N2;
                printf("Resultado: %d * %d = %d\n", N1, N2, resultado);
                break;
            case 4:
                if (N2 != 0) {
                    resultado = N1 / N2;
                    printf("Resultado: %d / %d = %d\n", N1, N2, resultado);
                } else {
                    printf("Erro: Divisão por zero não é permitida.\n");
                }
                break;
        }

        while (getchar() != '\n');

        do {
            printf("Deseja realizar outra operação? (s/n): ");
            scanf("%c", &repetir);
            while (getchar() != '\n'); // Limpa novamente
            if (repetir != 's' && repetir != 'n') {
                printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
            }
        } while (repetir != 's' && repetir != 'n');
    }

    return 0;
}
