#include <stdio.h>

int main() {
    float limite, temperatura;
    float soma = 0, media;
    float maior, menor;
    int quantidade = 0;
    int acimaLimite = 0;
    int consecutivas = 0;

    do {
        printf("Digite o limite de temperatura: ");

        if (scanf("%f", &limite) != 1) {
            printf("Entrada invalida! Digite um numero.\n");

            while (getchar() != '\n');
            limite = -1;
        }

        if (limite < 0) {
            printf("O limite deve ser maior ou igual a zero.\n");
        }

    } while (limite < 0);

    printf("Monitoramento iniciado!\n");

    while (consecutivas < 3) {

        printf("Digite a temperatura: ");

        if (scanf("%f", &temperatura) != 1) {
            printf("Temperatura invalida! Digite um numero.\n");

            while (getchar() != '\n');
            continue;
        }

        if (quantidade == 0) {
            maior = temperatura;
            menor = temperatura;
        }

        soma = soma + temperatura;
        quantidade++;


        if (temperatura > maior) {
            maior = temperatura;
        }

        if (temperatura < menor) {
            menor = temperatura;
        }

        if (temperatura > limite) {
            acimaLimite++;
            consecutivas++;

            printf("Atenção! A temperatura está acima do limite!\n");
        } else {
            consecutivas = 0;
        }


        printf("Temperaturas consecutivas acima do limite: %d\n", consecutivas);
    }

    media = soma / quantidade;

    printf("Limite de temperatura: %.2f\n", limite);
    printf("Quantidade de temperaturas: %d\n", quantidade);
    printf("Media das temperaturas: %.2f\n", media);
    printf("Maior temperatura: %.2f\n", maior);
    printf("Menor temperatura: %.2f\n", menor);
    printf("Total acima do limite: %d\n", acimaLimite);

    printf("\nMonitoramento encerrado!\n");

    return 0;
}
