#include <stdio.h>

int main() {
    float limite, temperatura;
    float soma = 0;
    float media, maior, menor;

    int quantidade, i;
    int acimaLimite = 0;

    do {printf("Digite o limite de temperatura: ");
        scanf("%f", &limite);

        if (limite < 0) {
            printf("Valor invalido! Digite um valor maior ou igual a 0.\n");
        }

    } while (limite < 0);

    printf("Digite quantas temperaturas serão inseridas. ");
    scanf("%d", &quantidade);

    for (i = 0; i < quantidade; i++) {

        printf("Digite a temperatura %d: ", i + 1);
        scanf("%f", &temperatura);

        if (i == 0) {
            maior = temperatura;
            menor = temperatura;
        }

        soma = soma + temperatura;

        if (temperatura > maior) {
            maior = temperatura;
        }

        if (temperatura < menor) {
            menor = temperatura;
        }

        if (temperatura > limite) {
            acimaLimite++;
        }
    }

    media = soma / quantidade;

    printf("Limite de temperatura: %.2f\n", limite);
    printf("Quantidade de temperaturas: %d\n", quantidade);
    printf("Media: %.2f\n", media);
    printf("Maior temperatura: %.2f\n", maior);
    printf("Menor temperatura: %.2f\n", menor);
    printf("Temperaturas acima do limite: %d\n", acimlimite);

    return 0;
}
