#include <stdio.h>
#include <stdlib.h>
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

    //variaveis de navegação
    int MenuJogo, ModoDeJogo;
    int AtributoDeterminado;
    int AtributoAleatorio;

    //crie um menu usando o swith que deve conter: iniciar jogo, regras e sair
    printf("Vamos jogar SuperTrunfo!\n");
    printf("1 - Iniciar\n");
    printf("2 - Regras\n");
    printf("3 - Sair\n");
    scanf(" %d", &MenuJogo);
    switch (MenuJogo)
    {
    case 1:
    printf("\nInicializando...\n");
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

    // depois que o usuario entra com os dados calcule a densidade populacional e o pib per capita
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
    
    // apos o cadastro das cartas escolha o modo de jogo que pode ser pontos, rodada determinada ou rodada aleatoria
    printf("\nEscolha o modo de jogo!\n");
    printf("1 - Vencedor por pontos!\n");
    printf("2 - Rodada determinada\n");
    printf("3 - Rodada aleatoria\n");
    printf("4 - Sair do jogo\n");
    scanf(" %d", &ModoDeJogo);

    switch (ModoDeJogo)
    {
        case 1:
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
            break;
        case 2:
            printf("Rodada Determinada\n");
            printf("Escolha o atributo da rodada:\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Número de pontos turisticos\n");
            printf("5 - Densidade Populacional\n");
            printf("6 - PIB per capita\n");
            scanf(" %d", &AtributoDeterminado);

            switch (AtributoDeterminado)
            {
            case 1:
                if (Populacao > Populacao1){
                printf ("%s Venceu em População\n", NomeDaCidade);
                } else{
                printf ("%s Venceu em População\n", NomeDaCidade1);
            }
                break;

            case 2:
                if (Area > Area1){
                printf ("%s Venceu em áreakm²\n", NomeDaCidade);
                }else{
                printf ("%s Venceu em áreakm²\n", NomeDaCidade1);
            }
                break;

            case 3:
                if (PIB > PIB1){
                printf ("%s Venceu em PIB\n", NomeDaCidade);
                }else{
                printf ("%s Venceu em PIB\n", NomeDaCidade1);
            }
                break;

            case 4:
                if (PontosTuristicos > PontosTuristicos1){
                printf ("%s Venceu em número de pontos turisticos\n", NomeDaCidade);
                Contador++;
                printf("%s: +1\n", NomeDaCidade);
                }else{
                printf ("%s Venceu em número de pontos turisticos\n", NomeDaCidade1);
                Contador1++;
                printf("%s: +1\n", NomeDaCidade1);
            }
                break;


            case 5:
                if (DensidadePopulacional < DensidadePopulacional1){
                printf ("%s Venceu em Densidade Populacional que é definido pelo menor valor.\n", NomeDaCidade);
                }else{
                printf ("%s Venceu em Densidade Populacional que é definido pelo menor valor.\n", NomeDaCidade1);
            }
                break;

            case 6:
                if (PIBperCapita > PIBperCapita1){
                printf ("%s Venceu em PIB per capita\n", NomeDaCidade);
                }else{
            printf ("%s Venceu em PIB per capita\n", NomeDaCidade1);
        }
                break;
            
            default:
                break;
            }
            break;
        case 3:
            printf("Atributo Aleatorio:\n");
            printf("Escolhendo o atributo...\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Número de pontos turisticos\n");
            printf("5 - Densidade Populacional\n");
            printf("6 - PIB per capita\n");
            AtributoAleatorio = rand() % 6 + 1;
            printf("E o numero sorteado foi: %d", AtributoAleatorio);

            switch (AtributoAleatorio)
            {
            case 1:
                if (Populacao > Populacao1){
                printf ("%s Venceu em População\n", NomeDaCidade);
                } else{
                printf ("%s Venceu em População\n", NomeDaCidade1);
            }
                break;

            case 2:
                if (Area > Area1){
                printf ("%s Venceu em áreakm²\n", NomeDaCidade);
                }else{
                printf ("%s Venceu em áreakm²\n", NomeDaCidade1);
            }
                break;

            case 3:
                if (PIB > PIB1){
                printf ("%s Venceu em PIB\n", NomeDaCidade);
                }else{
                printf ("%s Venceu em PIB\n", NomeDaCidade1);
            }
                break;

            case 4:
                if (PontosTuristicos > PontosTuristicos1){
                printf ("%s Venceu em número de pontos turisticos\n", NomeDaCidade);
                Contador++;
                printf("%s: +1\n", NomeDaCidade);
                }else{
                printf ("%s Venceu em número de pontos turisticos\n", NomeDaCidade1);
                Contador1++;
                printf("%s: +1\n", NomeDaCidade1);
            }
                break;


            case 5:
                if (DensidadePopulacional < DensidadePopulacional1){
                printf ("%s Venceu em Densidade Populacional que é definido pelo menor valor.\n", NomeDaCidade);
                }else{
                printf ("%s Venceu em Densidade Populacional que é definido pelo menor valor.\n", NomeDaCidade1);
            }
                break;

            case 6:
                if (PIBperCapita > PIBperCapita1){
                printf ("%s Venceu em PIB per capita\n", NomeDaCidade);
                }else{
            printf ("%s Venceu em PIB per capita\n", NomeDaCidade1);
        }
                break;
            
            default:
                break;
            }
            break;
        case 4:
            printf("até logo, não esqueça de voltar!");
        default:
            break;
    }




    break;
    case 2:
        printf("\nREGRAS\n");
        printf("O jogo Super Trunfo é um jogo de cartas onde os jogadores comparam diferentes características das cartas para tentar ganhar as cartas dos adversários.\n");
        printf("Neste jogo cada jogador entra com os atributos (População, PIB, Área...)\n");
        printf("Ápos os atributos serem inseridos, escolha o modo de jogo que pode ser:\n");
        printf("1 - Por pontos: neste modo cada atributo é comparado separadamente e quem tiver o maior numero vence(menos em densidade demografica que é o menor valor).\n");
        printf("2 - Atributo Determinado: os jogadores escolhem qual atributo devem comparar.\n");
        printf("3 - Atributo aleatorio: O atributo de comparação é definido aleatoriamente\n");
        break;

    case 3:
        printf("Obrigado por jogar supertrunfo, até logo.");
    default:
        printf("\nPor favor insira um numero válido(1-3)\n");
        break;
    }

    return 0;
}

