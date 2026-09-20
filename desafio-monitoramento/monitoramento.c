#include <stdio.h>

int main() {
    float limite, temperatura;
    float soma = 0;              (Aqui são as variáveis declaradas e utilizadas nas operações)
    float media, maior, menor;

    int quantidade, i;        (Variáveis que serão limitadas pelo usuário.)
    int acilimite = 0;

    do {printf("Digite o limite de temperatura: ");   (Primeira pergunta.)
        scanf("%f", &limite);

        if (limite < 0) {
            printf("Valor invalido! Digite um valor maior ou igual a 0.\n");   (Caso a pessoa coloque uma letra ou qualquer string que não corresponde com decimal.)
        }

    } while (limite < 0);

    printf("Digite quantas temperaturas serão inseridas. ");    (Quantidades de temperaturas que o usuário vai colocar, podendo ser 2, 3 ou quantas forem tragas.)
    scanf("%d", &quantidade);

    for (i = 0; i < quantidade; i++) {

        printf("Digite a temperatura %d: ", i + 1);
        scanf("%f", &temperatura);

        if (i == 0) {
            maior = temperatura;
            menor = temperatura;
        }

        soma = soma + temperatura;

        if (temperatura > maior) {   (Verificação da maior temperatura)
            maior = temperatura;
        }

        if (temperatura < menor) {    (Verificação da menor temperatura)
            menor = temperatura;
        }

        if (temperatura > limite) {   (Comparação com o limite de temperatura declarado)
            acimaLimite++;
        }
    }

    media = soma / quantidade;

    printf("Limite de temperatura: %.2f\n", limite);            (Esse é o relatório que é feito depois das perguntas e operação realizada.)
    printf("Quantidade de temperaturas: %d\n", quantidade);
    printf("Media: %.2f\n", media);
    printf("Maior temperatura: %.2f\n", maior);
    printf("Menor temperatura: %.2f\n", menor);
    printf("Temperaturas acima do limite: %d\n", acimlimite);

    return 0;
}
