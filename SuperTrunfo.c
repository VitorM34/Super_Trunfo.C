#include <stdio.h> //biblioteca

int main() {
    // Variáveis para armazenar os dados da carta
    char estado;              // Letra do estado (A-H)
    int cidade;               // Número da cidade (1-4)
    unsigned long populacao;  // População da cidade
    double area;              // Área da cidade em km²
    double pib;               // PIB da cidade em milhões de reais
    int pontos_turisticos;    // Número de pontos turísticos

    // Solicita ao usuário o estado da carta
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado);  // O espaço antes do %c ignora qualquer caractere em branco

    // Solicita o número da cidade
    printf("Digite a cidade (1-4): ");
    scanf("%d", &cidade);

    // Solicita a população da cidade
    printf("População: ");
    scanf("%lu", &populacao);

    // Solicita a área da cidade
    printf("Área (km²): ");
    scanf("%lf", &area);

    // Solicita o PIB da cidade
    printf("PIB (R$ milhões): ");
    scanf("%lf", &pib);

    // Solicita o número de pontos turísticos
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Exibe os dados cadastrados para o usuário
    printf("\nDados da carta %c%02d:\n", estado, cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2lf km²\n", area);
    printf("PIB: R$ %.2lf milhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    return 0;
}

/*
Para compilar e executar o programa no terminal, siga os passos:

1. Salve o código em um arquivo chamado, por exemplo, super_trunfo.c

2. Compile o programa usando o compilador GCC com o comando:
   gcc -o super_trunfo super_trunfo.c

3. Execute o programa com o comando:
   ./super_trunfo

4. O programa irá pedir que você digite os dados das cartas uma por vez.

Um quesito que devemos observar é que este código, lê apenas uma carta.Para cadastrar várias cartas, é necessário usar laços e arrays.
*/