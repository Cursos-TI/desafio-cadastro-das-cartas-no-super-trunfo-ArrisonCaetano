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
    printf("O PIB PER CAPITA é de : %f\n", card01_PIBcapita);
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


    // Escolha do Primeito Atributo

    int op,op2;
    printf("Escolha o primeiro atributo para comparar as cartas:\n");
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
    printf("\n\n"); 



    float card01sum,card02sum;



    //Primeira Comparação
    switch (op)
    {
    case 1:
        
        card01sum += (card01_population > card02_population) ? (printf("Carta 1 venceu na comparação de população! (Valor: %d)\n", card01_population), card01_population) : 0;
        card02sum += (card02_population > card01_population) ? (printf("Carta 2 venceu na comparação de população! (Valor: %d)\n", card02_population), card02_population) : 0;
        printf("\n\n"); 
        if (card01_population == card02_population) {

            printf("Empate na comparação de população!\n");
        }

        break;
    case 2:
        
        
        card01sum += (card01_area > card02_area) ? (printf("Carta 1 venceu na comparação de area! (Valor: %.2f)\n", card01_area), card01_area) : 0;
        card02sum += (card02_area > card01_area) ? (printf("Carta 2 venceu na comparação de area! (Valor: %.2f)\n", card02_area), card02_area) : 0;
        printf("\n\n"); 
        if (card01_area == card02_area) {
            
            printf("Empate na comparação de area!\n");
        }

        
        break;   
    case 3:
        
       

        card01sum += (card01_PIB > card02_PIB) ? (printf("Carta 1 venceu na comparação de PIB! (Valor: %.2f)\n", card01_PIB), card01_PIB) : 0;
        card02sum += (card02_PIB > card01_PIB) ? (printf("Carta 2 venceu na comparação de PIB! (Valor: %.2f)\n", card02_PIB), card02_PIB) : 0;
        printf("\n\n"); 
        if (card01_PIB == card02_PIB) {
            
            printf("Empate na comparação de PIB!\n");
        }


        
        break;
    case 4:
        

        card01sum += (card01_density < card02_density) ? (printf("Carta 1 venceu na comparação de DENSIDADE! (Valor: %f)\n", card01_density), card01_density) : 0;
        card02sum += (card02_density < card01_density) ? (printf("Carta 2 venceu na comparação de DENSIDADE! (Valor: %f)\n", card02_density), card02_density) : 0;
        printf("\n\n"); 
        if (card01_density == card02_density) {
            
            printf("Empate na comparação de DENSIDADE!\n");
        }

        
        break;
    case 5:
        
       

        card01sum += (card01_PIBcapita > card02_PIBcapita) ? (printf("Carta 1 venceu na comparação de PIB PER CAPITA! (Valor: %f)\n", card01_PIBcapita), card01_PIBcapita) : 0;
        card02sum += (card02_PIBcapita > card01_PIBcapita) ? (printf("Carta 2 venceu na comparação de PIB PER CAPITA! (Valor: %f)\n", card02_PIBcapita), card02_PIBcapita) : 0;
        printf("\n\n"); 
        if (card01_PIBcapita == card02_PIBcapita) {
            
            printf("Empate na comparação de PIB PER CAPITA!\n");
        }

        break;
    
    case 6:
        
       

        card01sum += (card01_Tpoints > card02_Tpoints) ? (printf("Carta 1 venceu na comparação de Pontos Turisticos! (Valor: %d)\n", card01_Tpoints), card01_Tpoints) : 0;
        card02sum += (card02_Tpoints > card01_Tpoints) ? (printf("Carta 2 venceu na comparação de Pontos Turisticos! (Valor: %.d)\n", card02_Tpoints), card02_Tpoints) : 0;
        printf("\n\n"); 
        if (card01_Tpoints == card02_Tpoints) {
            
            printf("Empate na comparação de Pontos Turisticos!\n");
        }

        
        break; 
    default:
        printf("Opção Invalida");
        break;
    }










   

    if( op == 1){

        printf("Escolha o segundo atributo para comparar as cartas (não pode ser o mesmo que o primeiro):\n");
        printf("\n\n"); 
    
        printf("2. Comparar Área\n");
        printf("3. Comparar PIB\n");
        printf("4. Comparar Densidade Populacional\n");
        printf("5. Comparar PIB per Capita\n");
        printf("6. Comparar número de pontos turisticos\n");
        printf("\n\n");
        printf("Digite o número da opção desejada: ");
        printf("\n\n"); 
        scanf("%d", &op2); 
        printf("\n\n"); 

    }else if (op == 2)
    {
        printf("Escolha o segundo atributo para comparar as cartas (não pode ser o mesmo que o primeiro):\n");
        printf("\n\n"); 
        printf("1. Comparar População\n");
        printf("3. Comparar PIB\n");
        printf("4. Comparar Densidade Populacional\n");
        printf("5. Comparar PIB per Capita\n");
        printf("6. Comparar número de pontos turisticos\n");
        printf("\n\n");
        printf("Digite o número da opção desejada: ");
        printf("\n\n"); 
        scanf("%d", &op2);
        printf("\n\n"); 

    }else if(op == 3)
    {
        printf("Escolha o segundo atributo para comparar as cartas (não pode ser o mesmo que o primeiro):\n");
        printf("\n\n"); 
        printf("1. Comparar População\n");
        printf("2. Comparar Área\n");
        printf("4. Comparar Densidade Populacional\n");
        printf("5. Comparar PIB per Capita\n");
        printf("6. Comparar número de pontos turisticos\n");
        printf("\n\n");
        printf("Digite o número da opção desejada: ");
        printf("\n\n"); 
        scanf("%d", &op2);
        printf("\n\n"); 

    }else if(op == 4)
    {
        printf("Escolha o segundo atributo para comparar as cartas (não pode ser o mesmo que o primeiro):\n");
        printf("\n\n"); 
        printf("1. Comparar População\n");
        printf("2. Comparar Área\n");
        printf("3. Comparar PIB\n");
        printf("5. Comparar PIB per Capita\n");
        printf("6. Comparar número de pontos turisticos\n");
        printf("\n\n");
        printf("Digite o número da opção desejada: ");
        printf("\n\n"); 
        scanf("%d", &op2);
        printf("\n\n"); 

    }else if(op == 5)
    {
        printf("Escolha o segundo atributo para comparar as cartas (não pode ser o mesmo que o primeiro):\n");
        printf("\n\n"); 
        printf("1. Comparar População\n");
        printf("2. Comparar Área\n");
        printf("3. Comparar PIB\n");
        printf("4. Comparar Densidade Populacional\n");
        printf("6. Comparar número de pontos turisticos\n");
        printf("\n\n");
        printf("Digite o número da opção desejada: ");
        printf("\n\n"); 
        scanf("%d", &op2);

    }else if(op == 6)
    {
        printf("Escolha o segundo atributo para comparar as cartas (não pode ser o mesmo que o primeiro):\n");
        printf("\n\n"); 
        printf("1. Comparar População\n");
        printf("2. Comparar Área\n");
        printf("3. Comparar PIB\n");
        printf("4. Comparar Densidade Populacional\n");
        printf("5. Comparar PIB per Capita\n");
        printf("\n\n");
        printf("Digite o número da opção desejada: ");
        printf("\n\n"); 
        scanf("%d", &op2);
        printf("\n\n"); 

    }
    
    
   


    ///////////////////////////////     Segunda Comparação ///////////////////////////////////////

    switch (op2)
    {
    case 1:
        
        card01sum += (card01_population > card02_population) ? (printf("Carta 1 venceu na comparação de população! (Valor: %d)\n", card01_population), card01_population) : 0;
        card02sum += (card02_population > card01_population) ? (printf("Carta 2 venceu na comparação de população! (Valor: %d)\n", card02_population), card02_population) : 0;
        printf("\n\n"); 
        if (card01_population == card02_population) {

            printf("Empate na comparação de população!\n");
        }

        break;
    case 2:
        
        
        card01sum += (card01_area > card02_area) ? (printf("Carta 1 venceu na comparação de area! (Valor: %.2f)\n", card01_area), card01_area) : 0;
        card02sum += (card02_area > card01_area) ? (printf("Carta 2 venceu na comparação de area! (Valor: %.2f)\n", card02_area), card02_area) : 0;
        printf("\n\n"); 
        if (card01_area == card02_area) {
            
            printf("Empate na comparação de area!\n");
        }

        
        break;   
    case 3:
        
       

        card01sum += (card01_PIB > card02_PIB) ? (printf("Carta 1 venceu na comparação de PIB! (Valor: %.2f)\n", card01_PIB), card01_PIB) : 0;
        card02sum += (card02_PIB > card01_PIB) ? (printf("Carta 2 venceu na comparação de PIB! (Valor: %.2f)\n", card02_PIB), card02_PIB) : 0;
        printf("\n\n"); 
        if (card01_PIB == card02_PIB) {
            
            printf("Empate na comparação de PIB!\n");
        }

        
        break;
    case 4:
        

        card01sum += (card01_density < card02_density) ? (printf("Carta 1 venceu na comparação de DENSIDADE! (Valor: %.2f)\n", card01_density), card01_density) : 0;
        card02sum += (card02_density < card01_density) ? (printf("Carta 2 venceu na comparação de DENSIDADE! (Valor: %.2f)\n", card02_density), card02_density) : 0;
        printf("\n\n"); 
        if (card01_density == card02_density) {
            
            printf("Empate na comparação de DENSIDADE!\n");
        }

        
        break;
    case 5:
        
       

        card01sum += (card01_PIBcapita > card02_PIBcapita) ? (printf("Carta 1 venceu na comparação de PIB PER CAPITA! (Valor: %.2f)\n", card01_PIBcapita), card01_PIBcapita) : 0;
        card02sum += (card02_PIBcapita > card01_PIBcapita) ? (printf("Carta 2 venceu na comparação de PIB PER CAPITA! (Valor: %.2f)\n", card02_PIBcapita), card02_PIBcapita) : 0;
        printf("\n\n"); 
        if (card01_PIBcapita == card02_PIBcapita) {
            
            printf("Empate na comparação de PIB PER CAPITA!\n");
        }

        break;
    
    case 6:
          
        card01sum += (card01_Tpoints > card02_Tpoints) ? (printf("Carta 1 venceu na comparação de Pontos Turisticos! (Valor: %d)\n", card01_Tpoints), card01_Tpoints) : 0;
        card02sum += (card02_Tpoints > card01_Tpoints) ? (printf("Carta 2 venceu na comparação de Pontos Turisticos! (Valor: %d)\n", card02_Tpoints), card02_Tpoints) : 0;
        printf("\n\n"); 
        if (card01_Tpoints == card02_Tpoints) {
            
            printf("Empate na comparação de Pontos Turisticos!\n");
        }

        
        break; 
    default:
        printf("Opção Invalida");
        break;
    }

    printf("\n=================================================================================\n");
    printf("\n"); 
    printf("O valor total de pontos da soma dos atributos da primeira carta é :%f\n",card01sum);
    printf("\n"); 
    printf("O valor total de pontos da soma dos atributos da segunda carta é :%f\n",card02sum);
    printf("\n"); 
    printf("\n=================================================================================\n");
    printf("\n"); 
    printf("\n"); 

    if(card01sum > card02sum) {
        printf("\033[1;32mA Carta 01 é a vencedora!\033[0m\n");  // Verde para vitória
    } else if(card02sum > card01sum) {
        printf("\033[1;31mA Carta 02 é a vencedora!\033[0m\n");  // Vermelho para vitória
    } else {
        printf("\033[1;33mAs cartas são empatadas!\033[0m\n");  // Amarelo para empate
    }

    return 0;

}