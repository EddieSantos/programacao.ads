#include <stdio.h>

int main() {

    // Declarando as variáveis da Carta 1
    int carta = 1; // Número de carta variavel que sera incrementada postriormente como contagem de cartas

    char codigo[3] = "01";

    char estado[2] = "A";

    char cidade[] = "Contagem";

    int populacao = 12000000;

    float area = 1521.11;

    float pib = 699000000000;

    int turiticos = 12;

    printf("Bem vindo ao Super Trunfo\n \n"); // Mensagem de boas vindas
    printf("Jogador 1, cadastre sua carta\n \n"); // Mensagem para o jogador 1 cadastrar a carta

    printf("Digite o codigo da carta: ");
    scanf("%s", &codigo);

    printf("Digite o estado: ");
    scanf("%s", &estado);

    printf("Digite a cidade: ");
    scanf("%s", &cidade);

    printf("Digite a populacao: ");
    scanf("%d", &populacao);

    printf("Digite a Area: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &turiticos);

    printf("Carta cadastrada com sucesso!\n \n"); // Mensagem de cadastro com sucesso

    // Exibindo os dados da carta do jogador 1
    printf("Dados da Carta Jogador 1\n \n");
    printf("Codigo da Carta: %s%s\n", estado, codigo); 
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: %.2f Bilhões de reais\n", pib);
    printf("Nº de Pontos Turisticos: %d\n \n", turiticos);

    printf("Jogador 2, sua vez de cadastrar a sua carta\n \n"); // Mensagem para o jogador 2 cadastrar a sua carta

    printf("Digite o codigo da carta: ");
    scanf("%s", &codigo);

    printf("Digite o estado: ");
    scanf("%s", &estado);

    printf("Digite a cidade: ");
    scanf("%s", &cidade);

    printf("Digite a populacao: ");
    scanf("%d", &populacao);

    printf("Digite a Area: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &turiticos);

    printf("Carta cadastrada com sucesso\n \n"); // Mensagem de cadastro com sucesso

    // Exibindo os dados da carta do jogador 2
    printf("Dados da Carta Jogador 2\n \n");
    printf("Codigo da Carta: %s%s\n", estado, codigo);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: %.2f Bilhões de reais\n", pib);
    printf("Nº de Pontos Turisticos: %d\n", turiticos);

    return 0;
}