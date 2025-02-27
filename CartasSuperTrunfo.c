#include <stdio.h>
 
int main() {
    
    //variaveis da carta 01
    char card01_state[20];
    char card01_cod[20];
    char card01_city[20];
    int card01_population;
    float card01_area;
    float card01_PIB;
    int card01_Tpoints;

    float card01_density;
    float card01_PIBcapita;
    
     //variaveis da carta 02
     char card02_state[20];
     char card02_cod[20];
     char card02_city[20];
     int card02_population;
     float card02_area;
     float card02_PIB;
     int card02_Tpoints;
     
    float card02_density;
    float card02_PIBcapita;

    
     //cadastrando a carta 01
     printf("Cadastre a primeira carta(carta 01)\n");
     printf("digite o estado :\n");
     scanf("%s", &card01_state);

     printf("digite o codigo da carta 01 :\n");
     scanf("%s", card01_cod);

     printf("digite a cidade da carta  01:\n");
     scanf("%s", card01_city);

     printf("digite a população da carta 01 :\n");
     scanf("%d", &card01_population);

     printf("digite a area da carta 01 :\n");
     scanf("%f", &card01_area);
     
     printf("digite o PIB da carta 01 :\n");
     scanf("%f", &card01_PIB);

     printf("digite a quantidade de pontos turisticos 01 :\n");
     scanf("%d", &card01_Tpoints);


    // calculando a densidade populacional  e o PIB PERCAPITA
    card01_density = card01_population/card01_area; 
    card01_PIBcapita = card01_PIB/card01_population;

     //cadastrando a carta 02
     printf("Cadastre da segunda carta(carta 02)\n");
     printf("digite o estado :\n");
     scanf("%s", card02_state);

     printf("digite o codigo da carta 02 :\n");
     scanf("%s", card02_cod);

     printf("digite a cidade da carta  02:\n");
     scanf("%s", card02_city);

     printf("digite a população da carta 02 :\n");
     scanf("%d", &card02_population);

     printf("digite a area da carta 02 :\n");
     scanf("%f", &card02_area);
     
     printf("digite o PIB da carta 02 :\n");
     scanf("%f", &card02_PIB);

     printf("digite a quantidade de pontos turisticos 02 :\n");
     scanf("%d", &card02_Tpoints);

    // calculando a densidade populacional  e o PIB PERCAPITA
     card02_density = card02_population/card02_area; 
     card02_PIBcapita = card02_PIB/card02_population;
    
     
    // Imprimindo os dados cadastrados da carta 01

    printf("\n====================================\n");
    printf("      Dados da primeira Carta 01\n");
    printf("====================================\n\n");

    printf("Estado: %s\n" ,card01_state );
    printf("Código: %s\n" ,card01_cod );
    printf("Nome da Cidade: %s\n" ,card01_city );
    printf("População: %d\n" ,card01_population );
    printf("Área: %f\n" ,card01_area );
    printf("PIB: %f\n" ,card01_PIB );
    printf("Número de Pontos Turísticos: %d\n" ,card01_Tpoints );
    printf("A densidade populacional da carta 01 é de : %f\n", card01_density);
    printf("A densidade populacional da carta 01 é de : %f\n", card01_PIBcapita);
    printf("\n\n"); 

    // Imprimindo os dados cadastrados da carta 02

    printf("\n====================================\n");
    printf("      Dados da segunda Carta 02\n");
    printf("====================================\n\n");

    printf("Estado: %s\n" ,card02_state );
    printf("Código: %s\n" ,card02_cod );
    printf("Nome da Cidade: %s\n" ,card02_city );
    printf("População: %d\n" ,card02_population );
    printf("Área: %f\n" ,card02_area );
    printf("PIB: %f\n" ,card02_PIB );
    printf("Número de Pontos Turísticos: %d\n" ,card02_Tpoints );
    printf("A densidade populacional da carta 02 é de : %f\n", card02_density);
    printf("O PIB PER CAPITA é de : %f\n", card02_PIBcapita);

    printf("\n\n"); 


    // fazendo a menu de escolha de comparação

    int op;
    printf("Escolha uma opção para comparar as cartas:\n");
    printf("\n\n"); 
    printf("1. Comparar População\n");
    printf("2. Comparar Área\n");
    printf("3. Comparar PIB\n");
    printf("4. Comparar Densidade Populacional\n");
    printf("5. Comparar PIB per Capita\n");
    printf("6. Comparar número de pontos turisticos\n");
    printf("\n\n");
    printf("Digite o número da opção desejada: ");
    printf("\n\n"); 
    scanf("%d", &op); 

    // fazendo a lógica do switch

    switch (op) {
        case 1:
            if (card01_population > card02_population) {
                printf("A Carta 1 (%d) venceu na comparação de população!\n", card01_city);
            } else if (card02_population > card01_population) {
                printf("A Carta 2 (%d) venceu na comparação de população!\n", card02_city);
            } else {
                printf("As duas cartas têm a mesma população!\n");
            }
            break;

        case 2:
            if (card01_area > card02_area) {
                printf("A Carta 1 (%f) venceu na comparação de área!\n", card01_city);
            } else if (card02_area > card01_area) {
                printf("A Carta 2 (%f) venceu na comparação de área!\n", card02_city);
            } else {
                printf("As duas cartas têm a mesma área!\n");
            }
            break;

        case 3:
            if (card01_PIB > card02_PIB) {
                printf("A Carta 1 (%f) venceu na comparação de PIB!\n", card01_city);
            } else if (card02_PIB > card01_PIB) {
                printf("A Carta 2 (%f) venceu na comparação de PIB!\n", card02_city);
            } else {
                printf("As duas cartas têm o mesmo PIB!\n");
            }
            break;

        case 4:
            if (card01_density < card02_density) {
                printf("A Carta 1 (%f) venceu na comparação de densidade populacional!\n", card01_city);
            } else if (card02_density > card01_density) {
                printf("A Carta 2 (%f) venceu na comparação de densidade populacional!\n", card02_city);
            } else {
                printf("As duas cartas têm a mesma densidade populacional!\n");
            }
            break;

        case 5:
            if (card01_PIBcapita > card02_PIBcapita) {
                printf("A Carta 1 (%f) venceu na comparação de PIB per Capita!\n", card01_city);
            } else if (card02_PIBcapita > card01_PIBcapita) {
                printf("A Carta 2 (%f) venceu na comparação de PIB per Capita!\n", card02_city);
            } else {
                printf("As duas cartas têm o mesmo PIB per Capita!\n");
            }
            break;

            
        case 6:
            if (card01_Tpoints > card02_Tpoints) {
                printf("A Carta 1 (%d) venceu na comparação de Pontos Turisticos!\n", card01_Tpoints);
            } else if (card02_Tpoints > card01_PIBcapita) {
                printf("A Carta 2 (%d) venceu na comparação de Pontos Turisticos!\n", card02_Tpoints);
            } else {
                printf("As duas cartas tem a mesma quantidade de pontos Turisticos!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
    



}