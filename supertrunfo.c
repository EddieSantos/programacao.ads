#include <stdio.h>

int main() {

    // Declarando as variáveis da Carta 1 e 2
    int carta1, populacao1, turiticos1,
        carta2, populacao2, turiticos2
        ;

    char codigo1[4], codigo2[4];

    char estado1, estado2;

    char cidade1[50], cidade2[50];

    float area1, area2, pib1, pib2;

    printf("Bem vindo ao Super Trunfo\n \n"); // Mensagem de boas vindas
    printf("Jogador, cadastre sua carta 1\n \n"); // Mensagem para o jogador cadastrar a sua primeira carta

    // Recebendo os dados da carta 1
    printf("Digite o numero da carta: ");
    scanf("%d", &carta1);

    printf("Digite o codigo (01-08) da carta: ");
    scanf("%s", &codigo1);

    printf("Digite o estado (A-H): ");
    scanf("%c", &estado1); //nesse caso usa o %c para ler um caractere e não %s uma string

    printf("Digite a cidade: ");
    scanf("%s", &cidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a Area: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &turiticos1);

    printf("Carta 1 cadastrada com sucesso!\n \n"); // Mensagem de cadastro com sucesso

    // Exibindo os dados da carta 1
    printf("Dados da Carta %d\n", carta1);
    printf("Codigo da Carta: %c%s\n", estado1, codigo1); // nesse retora %c%s para concatenar um caractere com uma string
    printf("Estado: %c\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Nº de Pontos Turisticos: %d\n \n", turiticos1);

    printf("Jogador, cadastre a sua carta 2\n \n"); // Mensagem para o jogador cadastrar a sua carta 2

    // Recebendo os dados da carta 2
    printf("Digite o numero da carta: ");
    scanf("%d", &carta2);

    printf("Digite o codigo (01-08) da carta: ");
    scanf("%s", &codigo2);

    printf("Digite o estado (A-H): ");
    scanf("%c", &estado2); //nesse caso usa o %c para ler um caractere e não %s uma string

    printf("Digite a cidade: ");
    scanf("%s", &cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &turiticos2);

    printf("Carta 2 cadastrada com sucesso\n \n"); // Mensagem de cadastro com sucesso

    // Exibindo os dados da carta 2
    printf("Dados da Carta %d\n", carta2);
    printf("Codigo da Carta: %c%s\n", estado2, codigo2); // nesse retora %c%s para concatenar um caractere com uma string
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Nº de Pontos Turisticos: %d\n", turiticos2);

    return 0;
}