#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.
/*  ]
Carta (string)
 
Código da carta (string)
 
Nome da cidade (string)
 
População (int)
 
Área (float)
 
PIB (float)
 
Número de pontos turísticos (int)
 
Calcular Densidade Populacional e PIB per capita: O programa deve calcular e exibir:
 
Densidade Populacional: População / Área
 
PIB per capita: PIB / População
*/
int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char Carta[50];
    char CodigoDaCarta[3];
    char NomeDaCidade[50];
    unsigned int Populacao;
    float Area;
    float PIB;
    int PontosTuristicos;
    float DensidadePopulacional, PIBperCapita;
    int Contador;

    char Carta1[50];
    char CodigoDaCarta1[3];
    char NomeDaCidade1[50];
    unsigned int Populacao1;
    float Area1;
    float PIB1;
    int PontosTuristicos1;
    float DensidadePopulacional1, PIBperCapita1;
    int Contador1;

    // Cadastro das Cartas:
    printf("Cadastro da primeira carta:\n");

    printf("Digite a primeira letra do Carta (A-H):\n");
    scanf(" %s",&Carta);

    printf("Digite o código da Carta (letrado do Carta + número de 01 a 04):\n");
    scanf(" %s", &CodigoDaCarta);

    printf("Digite o nome da cidade:\n");
    scanf(" %s", NomeDaCidade);

    printf("População:\n");
    scanf(" %u", &Populacao);

    printf("Área(km²):\n");
    scanf(" %f", &Area);

    printf("PIB:\n");
    scanf(" %f", &PIB);

    printf("Número de pontos turisticos:\n");
    scanf("%d", &PontosTuristicos);

    printf("Primeira Carta Registrada Com Sucesso!\n");

    printf("Carta: %c\n", Carta);
    printf("Código: %s\n", CodigoDaCarta);
    printf("Cidade: %s\n", NomeDaCidade);
    printf("População: %d\n", Populacao);
    printf("Área: %.2f\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("Número de pontos Turisticos: %d\n", PontosTuristicos);
    DensidadePopulacional = (float)Populacao / Area;
    printf("Densidade Populacional: %.2f\n", DensidadePopulacional);
    PIBperCapita = PIB / Populacao;
    printf("PIB per capita: %.2f\n", PIBperCapita);


    printf("Cadastro da segunda carta:\n");

    printf("Digite a primeira letra do Carta (A-H):\n");
    scanf(" %s",&Carta1);

    printf("Digite o código da Carta (letrado do Carta + número de 01 a 04):\n");
    scanf(" %s", &CodigoDaCarta1);

    printf("Digite o nome da cidade:\n");
    scanf(" %s", NomeDaCidade1);

    printf("População:\n");
    scanf(" %u", &Populacao1);

    printf("Área(km²):\n");
    scanf(" %f", &Area1);

    printf("PIB:\n");
    scanf(" %f", &PIB1);

    printf("Número de pontos turisticos:\n");
    scanf("%d", &PontosTuristicos1);

    printf("Segunda Carta Registrada Com Sucesso!\n");

    printf("Carta: %c\n", Carta1);
    printf("Código: %s\n", CodigoDaCarta1);
    printf("Cidade: %s\n", NomeDaCidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f\n", Area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Número de pontos Turisticos: %d\n", PontosTuristicos1);
    DensidadePopulacional1 = (float)Populacao1 / Area1;
    printf("Densidade Populacional: %.2f\n", DensidadePopulacional1);
    PIBperCapita1 = PIB1 / Populacao1;
    printf("PIB per capita: %.2f\n", PIBperCapita1);


 // difinir contador para as cartas em 0 e somar 1 a cada vitoria
    Contador = 0;
    Contador1 = 0;
    if (Populacao > Populacao1){
        printf ("%s Venceu em População\n", NomeDaCidade);
        Contador++;
        printf("%s: +1\n", NomeDaCidade);
    } else{
        printf ("%s Venceu em População\n", NomeDaCidade1);
        Contador1++;
        printf("%s: +1\n", NomeDaCidade1);
    }

    if (Area > Area1){
        printf ("%s Venceu em áreakm²\n", NomeDaCidade);
        Contador++;
        printf("%s: +1\n", NomeDaCidade);
    }else{
        printf ("%s Venceu em áreakm²\n", NomeDaCidade1);
        Contador1++;
        printf("%s: +1\n", NomeDaCidade1);
    }

    if (PIB > PIB1){
        printf ("%s Venceu em PIB\n", NomeDaCidade);
        Contador++;
        printf("%s: +1\n", NomeDaCidade);
    }else{
        printf ("%s Venceu em PIB\n", NomeDaCidade1);
        Contador1++;
        printf("%s: +1\n", NomeDaCidade1);
    }

    if (PontosTuristicos > PontosTuristicos1){
        printf ("%s Venceu em número de pontos turisticos\n", NomeDaCidade);
        Contador++;
        printf("%s: +1\n", NomeDaCidade);
    }else{
        printf ("%s Venceu em número de pontos turisticos\n", NomeDaCidade1);
        Contador1++;
        printf("%s: +1\n", NomeDaCidade1);
    }
    
    if (DensidadePopulacional < DensidadePopulacional1){
        printf ("%s Venceu em Densidade Populacional que é definido pelo menor valor.\n", NomeDaCidade);
        Contador++;
        printf("%s: +1\n", NomeDaCidade);
    }else{
        printf ("%s Venceu em Densidade Populacional que é definido pelo menor valor.\n", NomeDaCidade1);
        Contador1++;
        printf("%s: +1\n", NomeDaCidade1);
    }

    if (PIBperCapita > PIBperCapita1){
        printf ("%s Venceu em PIB per capita\n", NomeDaCidade);
        Contador++;
        printf("%s: +1\n", NomeDaCidade);
    }else{
        printf ("%s Venceu em PIB per capita\n", NomeDaCidade1);
        Contador1++;
        printf("%s: +1\n", NomeDaCidade1);
    }
    // mostrar a pontuação usando a pontuação e depois mostrar o vencedor
    printf("\nPontuação %s: %d\n", NomeDaCidade, Contador);
    printf("\nPontuação %s: %d\n", NomeDaCidade1, Contador1);

    if (Contador > Contador1){
        printf("%s Venceu marcando %d pontos", NomeDaCidade,Contador);
    } else{
        printf("%s Venceu marcando %d pontos",NomeDaCidade1, Contador1);
    }
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    return 0;
}
