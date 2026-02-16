 #include <stdio.h>

int main() {

    // Seção 1: Definição das variáveis
    char A, B;                        // Estado (uma letra)
    char A01[10], B02[10];            // Código da carta
    char cidade1[50], cidade2[50];    // Nome da cidade

    int ponto1, ponto2;               // Pontos turísticos
    int populacao1, populacao2;       // População
   
    float area1, area2;               // Área em km²
    float pib1, pib2;                 // PIB

    // Seção 2: Coletando os dados da primeira carta
    printf("Digite o estado da carta A: \n");
    scanf(" %c", &A);

    printf("Digite o código da carta A: \n");
    scanf(" %9s", A01);

    printf("Digite a cidade da carta A: \n");
    scanf(" %49s", cidade1);

    printf("Digite a quantidade de pontos turísticos da carta A: \n");
    scanf(" %d", &ponto1);

    printf("Digite a população da cidade da carta A: \n");
    scanf(" %d", &populacao1);

    printf("Digite a área em km² da cidade da carta A: \n");
    scanf(" %f", &area1);

    printf("Digite o PIB da cidade da carta A: \n");
    scanf(" %f", &pib1);

    // Coletando os dados da segunda carta
    printf("Digite o estado da carta B: \n");
    scanf(" %c", &B);

    printf("Digite o código da carta B: \n");
    scanf(" %9s", B02);

    printf("Digite a cidade da carta B: \n");
    scanf(" %49s", cidade2);

    printf("Digite a quantidade de pontos turísticos da carta B: \n");
    scanf(" %d", &ponto2);

    printf("Digite a população da cidade da carta B: \n");
    scanf(" %d", &populacao2);

    printf("Digite a área em km² da cidade da carta B: \n");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade da carta B: \n");
    scanf(" %f", &pib2);

    // Seção 3: Imprimir dados das cartas

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", A);
    printf("Código: %s\n", A01);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", ponto1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", B);
    printf("Código: %s\n", B02);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", ponto2);

    return 0;
}


    //explicação de como eu fiz o codigo, eu criei as variaveis para armazenar os dados das cartas;
    //depois usei o printf para pedir os dados e o scanf para ler os dados e armazenar nas variaveis;
    //depois usei o printf para imprimir os dados das cartas, e no final eu retornei 0 para indicar que o programa terminou com sucesso.;
    //coloquei espaçamentos nos especificadores pois o codigo mesmo colocando o \n não estava saltando linhas,
    // pesquisei e isso resolveu o problema. 
