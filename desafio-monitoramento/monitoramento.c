#include <stdio.h>

int main() {
    float limite, temperatura;
    float soma = 0;
    float media, maior, menor;

    int quantidade = 0;
    int acimaLimite = 0;
    int consecutivas = 0;

    do {
        printf("Digite o limite de temperatura: ");
        scanf("%f", &limite);

        if (limite < 0) {
            printf("Valor invalido! O limite deve ser maior ou igual a 0.\n");
        }

    } while (limite < 0);

    while (consecutivas < 3) {

        printf("Digite a temperatura: ");
        scanf("%f", &temperatura);


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

            printf("Temperatura acima do limite!\n");
        } else {consecutivas = 0;
        }
    }
    media = soma / quantidade;

    printf("Limite: %.2f\n", limite);
    printf("Quantidade de temperaturas: %d\n", quantidade);
    printf("Media: %.2f\n", media);
    printf("Maior temperatura: %.2f\n", maior);
    printf("Menor temperatura: %.2f\n", menor);
    printf("Temperaturas acima do limite: %d\n", acimaLimite);

    printf("Foram registradas 3 temperaturas consecutivas acima do limite.");
    printf("Monitoramento encerrado!");

    return 0;
}
