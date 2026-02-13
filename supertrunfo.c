    #include <stdio.h>

int main() {
// Seção 1: Definição das variáveis
    char A[20], B[20];                      // Variáveis para armazenar o estado  da carta
    char A01[10], B02[10];          // Variáveis para armazenar o código da carta
    char cidade1[50], cidade2[50]; // Variáveis para armazenar o nome da cidade da  carta

    long long ponto1, ponto2;            // Variáveis para armazenar os pontos turísticos  da carta
    long long populacao1, populacao2;     // Variáveis para armazenar a população  da carta
   
    double area1, area2;             // Variáveis para armazenar a área em kms da carta
    double pib1, pib2;               // Variáveis para armazenar o PIB  da carta

    // Seção 2: Coletando os dados da primeira carta
    printf("Digite o estado da carta A: \n");
    scanf(" %19s", A);               // Lê o estado da carta A
    printf("Digite o código da carta A: \n");
    scanf(" %9s", A01);               // Lê o código da carta A (ex: A01)

    printf("Digite a cidade da carta A: \n");
    scanf(" %49s", cidade1);           // Lê o nome da cidade da carta A
    printf("Digite a quantidade de pontos turísticos da carta A: \n");
    scanf(" %lld", &ponto1);           // Lê o número de pontos turísticos da carta A

    printf("Digite a quantidade de pessoas da cidade da carta A: \n");
    scanf(" %lld", &populacao1);       // Lê a população da cidade da carta A
    printf("Digite a área em km da cidade da carta A: \n");
    scanf(" %lf", &area1);            // Lê a área da cidade da carta A

    printf("Digite o PIB da cidade da carta A: \n");
    scanf(" %lf", &pib1);             // Lê o PIB da cidade da carta A

    //Coletando os dados da segunda carta
    printf("Digite o estado da carta B: \n");
    scanf(" %19s", B);               // Lê o estado da carta B
    printf("Digite o código da carta B: \n");
    scanf(" %9s", B02);               // Lê o código da carta B (ex: B02)

    printf("Digite a cidade da carta B: \n");
    scanf(" %49s", cidade2);           // Lê o nome da cidade da carta B
    printf("Digite a quantidade de pontos turísticos da carta B: \n");
    scanf(" %lld", &ponto2);           // Lê o número de pontos turísticos da carta B

    printf("Digite a quantidade de pessoas da cidade da carta B: \n");
    scanf(" %lld", &populacao2);      // Lê a população da cidade da carta B
    printf("Digite a área em km da cidade da carta B: \n");
    scanf(" %lf", &area2);           // Lê a área em kms da cidade da carta B

    printf("Digite o PIB da cidade da carta B: \n");
    scanf(" %lf", &pib2);            // Lê o PIB da cidade da carta B

    //seção 3: imprimir dados das cartas

    printf("Carta 1: \n");
    printf("Estado: %s\n", A);
    printf("Código da carta: %s\n", A01);
    printf("Cidade: %s\n", cidade1);
    printf("Pontos turísticos: %lld\n", ponto1);
    printf("População: %lld\n", populacao1);
    printf("Área em km: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    
    printf("Carta 2: \n");
    printf("Estado: %s\n", B);
    printf("Código da carta: %s\n", B02);
    printf("Cidade: %s\n", cidade2);
    printf("Pontos turísticos: %lld\n", ponto2);
    printf("População: %lld\n", populacao2);
    printf("Área em km: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);

    return 0;
}

    //explicação de como eu fiz o codigo, eu criei as variaveis para armazenar os dados das cartas;
    //depois usei o printf para pedir os dados e o scanf para ler os dados e armazenar nas variaveis;
    //depois usei o printf para imprimir os dados das cartas, e no final eu retornei 0 para indicar que o programa terminou com sucesso.;
    //coloquei espaçamentos nos especificadores pois o codigo mesmo colocando o \n não estava saltando linhas,
    // pesquisei e isso resolveu o problema. 
