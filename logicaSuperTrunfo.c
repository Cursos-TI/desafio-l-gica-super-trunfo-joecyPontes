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
    int Contador, contadordouble;

    char Carta1[50];
    char CodigoDaCarta1[3];
    char NomeDaCidade1[50];
    unsigned int Populacao1;
    float Area1;
    float PIB1;
    int PontosTuristicos1;
    float DensidadePopulacional1, PIBperCapita1;
    int Contador1, contadordouble1;

    //variaveis de navegação
    int MenuJogo, ModoDeJogo;
    int AtributoDeterminado;
    int AtributoAleatorio;
    int doubleJogador, doubleJogador1;

    //Menu inicial do jogo
    printf("Vamos jogar SuperTrunfo!\n");
    printf("1 - Iniciar\n");
    printf("2 - Regras\n");
    printf("3 - Sair\n");
    scanf(" %d", &MenuJogo);
    switch (MenuJogo)
    {
    case 1:
    printf("\nInicializando...\n");
    // cadastro de cartas
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
    // calculando densidade e pib per capita
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
    
    // Menu do modo de jogo
    printf("\nEscolha o modo de jogo!\n");
    printf("1 - Vencedor por pontos!\n");
    printf("2 - Rodada determinada\n");
    printf("3 - Rodada aleatoria\n");
    printf("4 - Modo Double\n");
    printf("5 - Sair do jogo\n");
    scanf(" %d", &ModoDeJogo);

    switch (ModoDeJogo)
    {
        case 1:
        // Modo de jogo: vencedor por pontos
        // difinir contador para as cartas em 0 e somar 1 a cada vitoria
        Contador = 0;
        Contador1 = 0;
        // comparando atributos
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
        // pontuação final
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
            contadordouble = 0;
            contadordouble1 = 0;
            printf("Modo Double!\n");
            printf("jogador da carta: %s. Escolha um atributo.\n", Carta);
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Número de pontos turisticos\n");
            printf("5 - Densidade Populacional\n");
            printf("6 - PIB per capita\n");
            scanf(" %d", &doubleJogador);
            printf(" %d\n", doubleJogador);
            switch (doubleJogador)
            {
            case 1:
                printf("População\n");

                printf("Comparando...\n");
                
                if (Populacao > Populacao1) {
                    printf("Vencedor foi: %s.\n", NomeDaCidade);
                    contadordouble++;
                }else{
                    printf("Vencedor foi: %s\n", NomeDaCidade1);
                    contadordouble1++;
                }
                printf("%s : %d.\n%s : %d.\n",NomeDaCidade, contadordouble,NomeDaCidade1, contadordouble1);
                
                printf("Modo Double!\n");
                printf("jogador da carta: %s. Escolhar um atributo.\n", Carta1);
                printf("1 - Área\n");
                printf("2 - PIB\n");
                printf("3 - Número de pontos turisticos\n");
                printf("4 - Densidade Populacional\n");
                printf("5 - PIB per capita\n");
                scanf(" %d", &doubleJogador1);
                switch (doubleJogador1)
                {
                case 1:
                    printf("Área\n");

                    if (Area > Area1) {
                        printf("Vencedor foi: %s.\n", NomeDaCidade);
                        contadordouble++;
                     }else{
                        printf("Vencedor foi: %s\n", NomeDaCidade1);
                         contadordouble1++;
                    }
                    printf("%s : %d.\n%s : %d.\n",NomeDaCidade, contadordouble,NomeDaCidade1, contadordouble1);
                    
                    if (contadordouble == contadordouble1 ){
                        printf("Empate!\n", NomeDaCidade);
                        printf("Em caso de empate os atributos são somados e o maior valor vence a rodada.\n");
                        (Populacao+Area >Populacao1+Area1) ? printf("%.2f ### %s\n", Populacao+Area, NomeDaCidade) : printf("%.2f ### %s\n", Populacao1+Area1, NomeDaCidade1);
                    }else{
                        (contadordouble == 2 ) ? printf("Vencedor: %s\n", NomeDaCidade) : printf("Vencedor: %s\n", NomeDaCidade1);
                    }

                    break;


                case 2:
                   printf("PIB\n");

                    if (PIB > PIB1) {
                        printf("Vencedor foi: %s.\n", NomeDaCidade);
                        contadordouble++;
                     }else{
                        printf("Vencedor foi: %s\n", NomeDaCidade1);
                         contadordouble1++;
                    }
                    printf("%s : %d.\n%s : %d.\n",NomeDaCidade, contadordouble,NomeDaCidade1, contadordouble1);
                    
                    if (contadordouble == contadordouble1 ){
                        printf("Empate!\n", NomeDaCidade);
                        printf("Em caso de empate os atributos são somados e o maior valor vence a rodada.\n");
                        (Populacao+PIB >Populacao1+PIB1) ? printf("%.2f ### %s\n", Populacao+PIB, NomeDaCidade) : printf("%.2f ### %s\n", Populacao1+PIB1, NomeDaCidade1);
                    }else{
                        (contadordouble == 2 ) ? printf("Vencedor: %s\n", NomeDaCidade) : printf("Vencedor: %s\n", NomeDaCidade1);
                    }

                    break;
                case 3:
                    printf("Número de pontos turisticos\n");
                    
                    if (PontosTuristicos > PontosTuristicos1) {
                        printf("Vencedor foi: %s.\n", NomeDaCidade);
                        contadordouble++;
                     }else{
                        printf("Vencedor foi: %s\n", NomeDaCidade1);
                         contadordouble1++;
                    }
                    printf("%s : %d.\n%s : %d.\n",NomeDaCidade, contadordouble,NomeDaCidade1, contadordouble1);
                    
                    if (contadordouble == contadordouble1 ){
                        printf("Empate!\n", NomeDaCidade);
                        printf("Em caso de empate os atributos são somados e o maior valor vence a rodada.\n");
                        (Populacao+PontosTuristicos >Populacao1+PontosTuristicos1) ? printf("%.2f ### %s\n", Populacao+PontosTuristicos, NomeDaCidade) : printf("%.2f ### %s\n", Populacao1+PontosTuristicos1, NomeDaCidade1);
                    }else{
                        (contadordouble == 2 ) ? printf("Vencedor: %s\n", NomeDaCidade) : printf("Vencedor: %s\n", NomeDaCidade1);
                    }

                    break;
                case 4:
                    printf("Densidade Populacional\n");
                    if (DensidadePopulacional < DensidadePopulacional1) {
                        printf("Vencedor foi: %s.\n", NomeDaCidade);
                        contadordouble++;
                     }else{
                        printf("Vencedor foi: %s\n", NomeDaCidade1);
                         contadordouble1++;
                    }
                    printf("%s : %d.\n%s : %d.\n",NomeDaCidade, contadordouble,NomeDaCidade1, contadordouble1);
                    
                    if (contadordouble == contadordouble1 ){
                        printf("Empate!\n", NomeDaCidade);
                        printf("Em caso de empate os atributos são somados e o maior valor vence a rodada.\n");
                        (Populacao+DensidadePopulacional >Populacao1+DensidadePopulacional1) ? printf("%.2f ### %s\n", Populacao+DensidadePopulacional, NomeDaCidade) : printf("%.2f ### %s\n", Populacao1+DensidadePopulacional1, NomeDaCidade1);
                    }else{
                        (contadordouble == 2 ) ? printf("Vencedor: %s\n", NomeDaCidade) : printf("Vencedor: %s\n", NomeDaCidade1);
                    }

                    break;
                case 5:
                    printf("PIB per capita\n");
                    if (PIBperCapita > PIBperCapita1) {
                        printf("Vencedor foi: %s.\n", NomeDaCidade);
                        contadordouble++;
                     }else{
                        printf("Vencedor foi: %s\n", NomeDaCidade1);
                         contadordouble1++;
                    }
                    printf("%s : %d.\n%s : %d.\n",NomeDaCidade, contadordouble,NomeDaCidade1, contadordouble1);
                    
                    if (contadordouble == contadordouble1 ){
                        printf("Empate!\n", NomeDaCidade);
                        printf("Em caso de empate os atributos são somados e o maior valor vence a rodada.\n");
                        (Populacao+PIBperCapita >Populacao1+PIBperCapita1) ? printf("%.2f ### %s\n", Populacao+PIBperCapita, NomeDaCidade) : printf("%.2f ### %s\n", Populacao1+PIBperCapita1, NomeDaCidade1);
                    }else{
                        (contadordouble == 2 ) ? printf("Vencedor: %s\n", NomeDaCidade) : printf("Vencedor: %s\n", NomeDaCidade1);
                    }

                    break;
                default:
                    printf("Opção inválida!");
                    break;
                }
                break;
            case 2:
                printf("Área\n");

                printf("Comparando...\n");
                if (Area > Area1) {
                    printf("Vencedor foi: %s.\n", NomeDaCidade);
                    contadordouble++;
                }else{
                    printf("Vencedor foi: %s\n", NomeDaCidade1);
                    contadordouble1++;
                }
                printf("%s : %d.\n%s : %d.\n",NomeDaCidade, contadordouble,NomeDaCidade1, contadordouble1);
                
                printf("Modo Double!\n");
                printf("jogador da carta: %s. Escolhar um atributo.\n", Carta1);
                printf("1 - População.\n");
                printf("2 - PIB\n");
                printf("3 - Número de pontos turisticos\n");
                printf("4 - Densidade Populacional\n");
                printf("5 - PIB per capita\n");
                scanf(" %d", &doubleJogador1);
                switch (doubleJogador1)
                {
                case 1:
                    printf("População.\n");
                    if (Populacao > Populacao1) {
                        printf("Vencedor foi: %s.\n", NomeDaCidade);
                        contadordouble++;
                     }else{
                        printf("Vencedor foi: %s\n", NomeDaCidade1);
                         contadordouble1++;
                    }
                    printf("%s : %d.\n%s : %d.\n",NomeDaCidade, contadordouble,NomeDaCidade1, contadordouble1);
                    
                    if (contadordouble == contadordouble1 ){
                        printf("Empate!\n", NomeDaCidade);
                        printf("Em caso de empate os atributos são somados e o maior valor vence a rodada.\n");
                        (Area+Populacao >Area1+Populacao1) ? printf("%.2f ### %s\n", Area+Populacao, NomeDaCidade) : printf("%.2f ### %s\n", Area1+Populacao1, NomeDaCidade1);
                    }else{
                        (contadordouble == 2 ) ? printf("Vencedor: %s\n", NomeDaCidade) : printf("Vencedor: %s\n", NomeDaCidade1);
                    }
                    break;
                case 2:
                    printf("PIB\n");
                    if (PIB > PIB1) {
                        printf("Vencedor foi: %s.\n", NomeDaCidade);
                        contadordouble++;
                     }else{
                        printf("Vencedor foi: %s\n", NomeDaCidade1);
                         contadordouble1++;
                    }
                    printf("%s : %d.\n%s : %d.\n",NomeDaCidade, contadordouble,NomeDaCidade1, contadordouble1);
                    
                    if (contadordouble == contadordouble1 ){
                        printf("Empate!\n", NomeDaCidade);
                        printf("Em caso de empate os atributos são somados e o maior valor vence a rodada.\n");
                        (Area+PIB >Area1+PIB1) ? printf("%.2f ### %s\n", Area+PIB, NomeDaCidade) : printf("%.2f ### %s\n", Area1+PIB1, NomeDaCidade1);
                    }else{
                        (contadordouble == 2 ) ? printf("Vencedor: %s\n", NomeDaCidade) : printf("Vencedor: %s\n", NomeDaCidade1);
                    }
                    break;
                case 3:
                    printf("Número de pontos turisticos\n");
                    if (PontosTuristicos > PontosTuristicos1) {
                        printf("Vencedor foi: %s.\n", NomeDaCidade);
                        contadordouble++;
                     }else{
                        printf("Vencedor foi: %s\n", NomeDaCidade1);
                         contadordouble1++;
                    }
                    printf("%s : %d.\n%s : %d.\n",NomeDaCidade, contadordouble,NomeDaCidade1, contadordouble1);
                    
                    if (contadordouble == contadordouble1 ){
                        printf("Empate!\n", NomeDaCidade);
                        printf("Em caso de empate os atributos são somados e o maior valor vence a rodada.\n");
                        (Area+PontosTuristicos >Area1+PontosTuristicos1) ? printf("%.2f ### %s\n", Area+PontosTuristicos, NomeDaCidade) : printf("%.2f ### %s\n", Area1+PontosTuristicos1, NomeDaCidade1);
                    }else{
                        (contadordouble == 2 ) ? printf("Vencedor: %s\n", NomeDaCidade) : printf("Vencedor: %s\n", NomeDaCidade1);
                    }
                    break;
                case 4:
                    printf("Densidade Populacional\n");
                    if (DensidadePopulacional < DensidadePopulacional1) {
                        printf("Vencedor foi: %s.\n", NomeDaCidade);
                        contadordouble++;
                     }else{
                        printf("Vencedor foi: %s\n", NomeDaCidade1);
                         contadordouble1++;
                    }
                    printf("%s : %d.\n%s : %d.\n",NomeDaCidade, contadordouble,NomeDaCidade1, contadordouble1);
                    
                    if (contadordouble == contadordouble1 ){
                        printf("Empate!\n", NomeDaCidade);
                        printf("Em caso de empate os atributos são somados e o maior valor vence a rodada.\n");
                        (Area+DensidadePopulacional >Area1+DensidadePopulacional1) ? printf("%.2f ### %s\n", Area+DensidadePopulacional, NomeDaCidade) : printf("%.2f ### %s\n", Area1+DensidadePopulacional1, NomeDaCidade1);
                    }else{
                        (contadordouble == 2 ) ? printf("Vencedor: %s\n", NomeDaCidade) : printf("Vencedor: %s\n", NomeDaCidade1);
                    }
                    break;
                case 5:
                    printf("PIB per capita\n");
                    if (PIBperCapita > PIBperCapita1) {
                        printf("Vencedor foi: %s.\n", NomeDaCidade);
                        contadordouble++;
                     }else{
                        printf("Vencedor foi: %s\n", NomeDaCidade1);
                         contadordouble1++;
                    }
                    printf("%s : %d.\n%s : %d.\n",NomeDaCidade, contadordouble,NomeDaCidade1, contadordouble1);
                    
                    if (contadordouble == contadordouble1 ){
                        printf("Empate!\n", NomeDaCidade);
                        printf("Em caso de empate os atributos são somados e o maior valor vence a rodada.\n");
                        (Area+PIBperCapita >Area1+PIBperCapita1) ? printf("%.2f ### %s\n", Area+PIBperCapita, NomeDaCidade) : printf("%.2f ### %s\n", Area1+PIBperCapita1, NomeDaCidade1);
                    }else{
                        (contadordouble == 2 ) ? printf("Vencedor: %s\n", NomeDaCidade) : printf("Vencedor: %s\n", NomeDaCidade1);
                    }
                    break;

                default:
                    printf("Opção inválida!");
                    break;

                }
                break;
            case 3:
                printf("PIB\n");
                printf("Comparando...\n");
                if (PIB > PIB1) {
                    printf("Vencedor foi: %s.\n", NomeDaCidade);
                    contadordouble++;
                }else{
                    printf("Vencedor foi: %s\n", NomeDaCidade1);
                    contadordouble1++;
                }
                printf("%s : %d.\n%s : %d.\n",NomeDaCidade, contadordouble,NomeDaCidade1, contadordouble1);
                
                printf("Modo Double!\n");
                printf("jogador da carta: %s. Escolhar um atributo.\n", Carta1);
                printf("1 - População.\n");
                printf("2 - Área\n");
                printf("3 - Número de pontos turisticos\n");
                printf("4 - Densidade Populacional\n");
                printf("5 - PIB per capita\n");
                scanf(" %d", &doubleJogador1);
                switch (doubleJogador1)
                {
                case 1:
                    printf("População.\n");
                    if (Populacao > Populacao1) {
                        printf("Vencedor foi: %s.\n", NomeDaCidade);
                        contadordouble++;
                     }else{
                        printf("Vencedor foi: %s\n", NomeDaCidade1);
                         contadordouble1++;
                    }
                    printf("%s : %d.\n%s : %d.\n",NomeDaCidade, contadordouble,NomeDaCidade1, contadordouble1);
                    
                    if (contadordouble == contadordouble1 ){
                        printf("Empate!\n", NomeDaCidade);
                        printf("Em caso de empate os atributos são somados e o maior valor vence a rodada.\n");
                        (PIB+Populacao >PIB1+Populacao1) ? printf("%.2f ### %s\n", PIB+Populacao, NomeDaCidade) : printf("%.2f ### %s\n", PIB1+Populacao1, NomeDaCidade1);
                    }else{
                        (contadordouble == 2 ) ? printf("Vencedor: %s\n", NomeDaCidade) : printf("Vencedor: %s\n", NomeDaCidade1);
                    }
                    break;
                case 2:
                    printf("Área\n");
                    if (Area > Area1) {
                        printf("Vencedor foi: %s.\n", NomeDaCidade);
                        contadordouble++;
                     }else{
                        printf("Vencedor foi: %s\n", NomeDaCidade1);
                         contadordouble1++;
                    }
                    printf("%s : %d.\n%s : %d.\n",NomeDaCidade, contadordouble,NomeDaCidade1, contadordouble1);
                    
                    if (contadordouble == contadordouble1 ){
                        printf("Empate!\n", NomeDaCidade);
                        printf("Em caso de empate os atributos são somados e o maior valor vence a rodada.\n");
                        (PIB+Area >PIB1+Area1) ? printf("%.2f ### %s\n", PIB+Area, NomeDaCidade) : printf("%.2f ### %s\n", PIB1+Area1, NomeDaCidade1);
                    }else{
                        (contadordouble == 2 ) ? printf("Vencedor: %s\n", NomeDaCidade) : printf("Vencedor: %s\n", NomeDaCidade1);
                    }
                    break;
                case 3:
                    printf("PIB\n");
                    if (PIB > PIB1) {
                        printf("Vencedor foi: %s.\n", NomeDaCidade);
                        contadordouble++;
                     }else{
                        printf("Vencedor foi: %s\n", NomeDaCidade1);
                         contadordouble1++;
                    }
                    printf("%s : %d.\n%s : %d.\n",NomeDaCidade, contadordouble,NomeDaCidade1, contadordouble1);
                    
                    if (contadordouble == contadordouble1 ){
                        printf("Empate!\n", NomeDaCidade);
                        printf("Em caso de empate os atributos são somados e o maior valor vence a rodada.\n");
                        (PIB+PontosTuristicos >PIB1+PontosTuristicos1) ? printf("%.2f ### %s\n", PIB+PontosTuristicos, NomeDaCidade) : printf("%.2f ### %s\n", PIB1+PontosTuristicos1, NomeDaCidade1);
                    }else{
                        (contadordouble == 2 ) ? printf("Vencedor: %s\n", NomeDaCidade) : printf("Vencedor: %s\n", NomeDaCidade1);
                    }

                    break;

                case 4:
                    printf("Densidade Populacional\n");
                    if (DensidadePopulacional < DensidadePopulacional1) {
                        printf("Vencedor foi: %s.\n", NomeDaCidade);
                        contadordouble++;
                     }else{
                        printf("Vencedor foi: %s\n", NomeDaCidade1);
                         contadordouble1++;
                    }
                    printf("%s : %d.\n%s : %d.\n",NomeDaCidade, contadordouble,NomeDaCidade1, contadordouble1);
                    
                    if (contadordouble == contadordouble1 ){
                        printf("Empate!\n", NomeDaCidade);
                        printf("Em caso de empate os atributos são somados e o maior valor vence a rodada.\n");
                        (PIB+DensidadePopulacional >PIB1+DensidadePopulacional1) ? printf("%.2f ### %s\n", PIB+DensidadePopulacional, NomeDaCidade) : printf("%.2f ### %s\n", PIB1+DensidadePopulacional1, NomeDaCidade1);
                    }else{
                        (contadordouble == 2 ) ? printf("Vencedor: %s\n", NomeDaCidade) : printf("Vencedor: %s\n", NomeDaCidade1);
                    }
                    break;

                case 5:
                    printf("PIB per capita\n");
                    if (PIBperCapita > PIBperCapita1) {
                        printf("Vencedor foi: %s.\n", NomeDaCidade);
                        contadordouble++;
                     }else{
                        printf("Vencedor foi: %s\n", NomeDaCidade1);
                         contadordouble1++;
                    }
                    printf("%s : %d.\n%s : %d.\n",NomeDaCidade, contadordouble,NomeDaCidade1, contadordouble1);
                    
                    if (contadordouble == contadordouble1 ){
                        printf("Empate!\n", NomeDaCidade);
                        printf("Em caso de empate os atributos são somados e o maior valor vence a rodada.\n");
                        (PIB+PIBperCapita >PIB1+PIBperCapita1) ? printf("%.2f ### %s\n", PIB+PIBperCapita, NomeDaCidade) : printf("%.2f ### %s\n", PIB1+PIBperCapita1, NomeDaCidade1);
                    }else{
                        (contadordouble == 2 ) ? printf("Vencedor: %s\n", NomeDaCidade) : printf("Vencedor: %s\n", NomeDaCidade1);
                    }
                    break;

                default:
                    printf("Opção inválida!");
                    break;

                }
            case 4:
                printf("Número de pontos turisticos\n");
                printf("Comparando...\n");
                if (PontosTuristicos > PontosTuristicos1) {
                    printf("Vencedor foi: %s.\n", NomeDaCidade);
                    contadordouble++;
                }else{
                    printf("Vencedor foi: %s\n", NomeDaCidade1);
                    contadordouble1++;
                }
                printf("%s : %d.\n%s : %d.\n",NomeDaCidade, contadordouble,NomeDaCidade1, contadordouble1);
                
                printf("Modo Double!\n");
                printf("jogador da carta: %s. Escolhar um atributo.\n", Carta1);
                printf("1 - População.\n");
                printf("2 - Área\n");
                printf("3 - PIB\n");
                printf("4 - Densidade Populacional\n");
                printf("5 - PIB per capita\n");
                scanf(" %d", &doubleJogador1);
                switch (doubleJogador1)
                {
                case 1:
                    printf("População.\n");
                    if (Populacao > Populacao1) {
                        printf("Vencedor foi: %s.\n", NomeDaCidade);
                        contadordouble++;
                     }else{
                        printf("Vencedor foi: %s\n", NomeDaCidade1);
                         contadordouble1++;
                    }
                    printf("%s : %d.\n%s : %d.\n",NomeDaCidade, contadordouble,NomeDaCidade1, contadordouble1);
                    
                    if (contadordouble == contadordouble1 ){
                        printf("Empate!\n", NomeDaCidade);
                        printf("Em caso de empate os atributos são somados e o maior valor vence a rodada.\n");
                        (PontosTuristicos+Populacao >PontosTuristicos1+Populacao1) ? printf("%.2f ### %s\n", PontosTuristicos+Populacao, NomeDaCidade) : printf("%.2f ### %s\n", PontosTuristicos1+Populacao1, NomeDaCidade1);
                    }else{
                        (contadordouble == 2 ) ? printf("Vencedor: %s\n", NomeDaCidade) : printf("Vencedor: %s\n", NomeDaCidade1);
                    }
                    break;
                case 2:
                    printf("Área\n");
                    if (Area > Area1) {
                        printf("Vencedor foi: %s.\n", NomeDaCidade);
                        contadordouble++;
                     }else{
                        printf("Vencedor foi: %s\n", NomeDaCidade1);
                         contadordouble1++;
                    }
                    printf("%s : %d.\n%s : %d.\n",NomeDaCidade, contadordouble,NomeDaCidade1, contadordouble1);
                    
                    if (contadordouble == contadordouble1 ){
                        printf("Empate!\n", NomeDaCidade);
                        printf("Em caso de empate os atributos são somados e o maior valor vence a rodada.\n");
                        (PontosTuristicos+Area >PontosTuristicos1+Area1) ? printf("%.2f ### %s\n", PontosTuristicos+Area, NomeDaCidade) : printf("%.2f ### %s\n", PontosTuristicos1+Area1, NomeDaCidade1);
                    }else{
                        (contadordouble == 2 ) ? printf("Vencedor: %s\n", NomeDaCidade) : printf("Vencedor: %s\n", NomeDaCidade1);
                    }
                    break;
                case 3:
                    printf("PIB\n");
                    if (PIB > PIB1) {
                        printf("Vencedor foi: %s.\n", NomeDaCidade);
                        contadordouble++;
                     }else{
                        printf("Vencedor foi: %s\n", NomeDaCidade1);
                         contadordouble1++;
                    }
                    printf("%s : %d.\n%s : %d.\n",NomeDaCidade, contadordouble,NomeDaCidade1, contadordouble1);
                    
                    if (contadordouble == contadordouble1 ){
                        printf("Empate!\n", NomeDaCidade);
                        printf("Em caso de empate os atributos são somados e o maior valor vence a rodada.\n");
                        (PIB+PontosTuristicos >PIB1+PontosTuristicos1) ? printf("%.2f ### %s\n", PIB+PontosTuristicos, NomeDaCidade) : printf("%.2f ### %s\n", PIB1+PontosTuristicos1, NomeDaCidade1);
                    }else{
                        (contadordouble == 2 ) ? printf("Vencedor: %s\n", NomeDaCidade) : printf("Vencedor: %s\n", NomeDaCidade1);
                    }

                    break;

                case 4:
                    printf("Densidade Populacional\n");
                    if (DensidadePopulacional < DensidadePopulacional1) {
                        printf("Vencedor foi: %s.\n", NomeDaCidade);
                        contadordouble++;
                     }else{
                        printf("Vencedor foi: %s\n", NomeDaCidade1);
                         contadordouble1++;
                    }
                    printf("%s : %d.\n%s : %d.\n",NomeDaCidade, contadordouble,NomeDaCidade1, contadordouble1);
                    
                    if (contadordouble == contadordouble1 ){
                        printf("Empate!\n", NomeDaCidade);
                        printf("Em caso de empate os atributos são somados e o maior valor vence a rodada.\n");
                        (PontosTuristicos+DensidadePopulacional >PontosTuristicos+DensidadePopulacional1) ? printf("%.2f ### %s\n", PontosTuristicos+DensidadePopulacional, NomeDaCidade) : printf("%.2f ### %s\n", PontosTuristicos1+DensidadePopulacional1, NomeDaCidade1);
                    }else{
                        (contadordouble == 2 ) ? printf("Vencedor: %s\n", NomeDaCidade) : printf("Vencedor: %s\n", NomeDaCidade1);
                    }
                    break;

                case 5:
                    printf("PIB per capita\n");
                    if (PIBperCapita > PIBperCapita1) {
                        printf("Vencedor foi: %s.\n", NomeDaCidade);
                        contadordouble++;
                     }else{
                        printf("Vencedor foi: %s\n", NomeDaCidade1);
                         contadordouble1++;
                    }
                    printf("%s : %d.\n%s : %d.\n",NomeDaCidade, contadordouble,NomeDaCidade1, contadordouble1);
                    
                    if (contadordouble == contadordouble1 ){
                        printf("Empate!\n", NomeDaCidade);
                        printf("Em caso de empate os atributos são somados e o maior valor vence a rodada.\n");
                        (PontosTuristicos+PIBperCapita >PontosTuristicos+PIBperCapita1) ? printf("%.2f ### %s\n", PontosTuristicos+PIBperCapita, NomeDaCidade) : printf("%.2f ### %s\n", PontosTuristicos1+PIBperCapita1, NomeDaCidade1);
                    }else{
                        (contadordouble == 2 ) ? printf("Vencedor: %s\n", NomeDaCidade) : printf("Vencedor: %s\n", NomeDaCidade1);
                    }
                    break;

                default:
                    printf("Opção inválida!");
                    break;

                }
            case 5:
                printf("Densidade Populacional\n");
                printf("Comparando...\n");
                if (DensidadePopulacional > DensidadePopulacional1) {
                    printf("Vencedor foi: %s.\n", NomeDaCidade);
                    contadordouble++;
                }else{
                    printf("Vencedor foi: %s\n", NomeDaCidade1);
                    contadordouble1++;
                }
                printf("%s : %d.\n%s : %d.\n",NomeDaCidade, contadordouble,NomeDaCidade1, contadordouble1);
                
                printf("Modo Double!\n");
                printf("jogador da carta: %s. Escolhar um atributo.\n", Carta1);
                printf("1 - População.\n");
                printf("2 - Área\n");
                printf("3 - PIB\n");
                printf("4 - Pontos turisticos\n");
                printf("5 - PIB per capita\n");
                scanf(" %d", &doubleJogador1);
                switch (doubleJogador1)
                {
                case 1:
                    printf("População.\n");
                    if (Populacao > Populacao1) {
                        printf("Vencedor foi: %s.\n", NomeDaCidade);
                        contadordouble++;
                     }else{
                        printf("Vencedor foi: %s\n", NomeDaCidade1);
                         contadordouble1++;
                    }
                    printf("%s : %d.\n%s : %d.\n",NomeDaCidade, contadordouble,NomeDaCidade1, contadordouble1);
                    
                    if (contadordouble == contadordouble1 ){
                        printf("Empate!\n", NomeDaCidade);
                        printf("Em caso de empate os atributos são somados e o maior valor vence a rodada.\n");
                        (DensidadePopulacional+Populacao >DensidadePopulacional1+Populacao1) ? printf("%.2f ### %s\n", DensidadePopulacional+Populacao, NomeDaCidade) : printf("%.2f ### %s\n", DensidadePopulacional1+Populacao1, NomeDaCidade1);
                    }else{
                        (contadordouble == 2 ) ? printf("Vencedor: %s\n", NomeDaCidade) : printf("Vencedor: %s\n", NomeDaCidade1);
                    }
                    break;
                case 2:
                    printf("Área\n");
                    if (Area > Area1) {
                        printf("Vencedor foi: %s.\n", NomeDaCidade);
                        contadordouble++;
                     }else{
                        printf("Vencedor foi: %s\n", NomeDaCidade1);
                         contadordouble1++;
                    }
                    printf("%s : %d.\n%s : %d.\n",NomeDaCidade, contadordouble,NomeDaCidade1, contadordouble1);
                    
                    if (contadordouble == contadordouble1 ){
                        printf("Empate!\n", NomeDaCidade);
                        printf("Em caso de empate os atributos são somados e o maior valor vence a rodada.\n");
                        (DensidadePopulacional+Area >DensidadePopulacional1+Area1) ? printf("%.2f ### %s\n", DensidadePopulacional+Area, NomeDaCidade) : printf("%.2f ### %s\n", DensidadePopulacional1+Area1, NomeDaCidade1);
                    }else{
                        (contadordouble == 2 ) ? printf("Vencedor: %s\n", NomeDaCidade) : printf("Vencedor: %s\n", NomeDaCidade1);
                    }
                    break;
                case 3:
                    printf("PIB\n");
                    if (PIB > PIB1) {
                        printf("Vencedor foi: %s.\n", NomeDaCidade);
                        contadordouble++;
                     }else{
                        printf("Vencedor foi: %s\n", NomeDaCidade1);
                         contadordouble1++;
                    }
                    printf("%s : %d.\n%s : %d.\n",NomeDaCidade, contadordouble,NomeDaCidade1, contadordouble1);
                    
                    if (contadordouble == contadordouble1 ){
                        printf("Empate!\n", NomeDaCidade);
                        printf("Em caso de empate os atributos são somados e o maior valor vence a rodada.\n");
                        (DensidadePopulacional+PontosTuristicos >DensidadePopulacional1+PontosTuristicos1) ? printf("%.2f ### %s\n", DensidadePopulacional+PontosTuristicos, NomeDaCidade) : printf("%.2f ### %s\n", DensidadePopulacional1+PontosTuristicos1, NomeDaCidade1);
                    }else{
                        (contadordouble == 2 ) ? printf("Vencedor: %s\n", NomeDaCidade) : printf("Vencedor: %s\n", NomeDaCidade1);
                    }

                    break;

                case 4:
                    printf("Pontos Turisticos\n");
                    if (PontosTuristicos1 > PontosTuristicos1) {
                        printf("Vencedor foi: %s.\n", NomeDaCidade);
                        contadordouble++;
                     }else{
                        printf("Vencedor foi: %s\n", NomeDaCidade1);
                         contadordouble1++;
                    }
                    printf("%s : %d.\n%s : %d.\n",NomeDaCidade, contadordouble,NomeDaCidade1, contadordouble1);
                    
                    if (contadordouble == contadordouble1 ){
                        printf("Empate!\n", NomeDaCidade);
                        printf("Em caso de empate os atributos são somados e o maior valor vence a rodada.\n");
                        (PontosTuristicos+DensidadePopulacional >PontosTuristicos+DensidadePopulacional1) ? printf("%.2f ### %s\n", PontosTuristicos+DensidadePopulacional, NomeDaCidade) : printf("%.2f ### %s\n", PontosTuristicos1+DensidadePopulacional1, NomeDaCidade1);
                    }else{
                        (contadordouble == 2 ) ? printf("Vencedor: %s\n", NomeDaCidade) : printf("Vencedor: %s\n", NomeDaCidade1);
                    }
                    break;

                case 5:
                    printf("PIB per capita\n");
                    if (PIBperCapita > PIBperCapita1) {
                        printf("Vencedor foi: %s.\n", NomeDaCidade);
                        contadordouble++;
                     }else{
                        printf("Vencedor foi: %s\n", NomeDaCidade1);
                         contadordouble1++;
                    }
                    printf("%s : %d.\n%s : %d.\n",NomeDaCidade, contadordouble,NomeDaCidade1, contadordouble1);
                    
                    if (contadordouble == contadordouble1 ){
                        printf("Empate!\n", NomeDaCidade);
                        printf("Em caso de empate os atributos são somados e o maior valor vence a rodada.\n");
                        (DensidadePopulacional+PIBperCapita >DensidadePopulacional1+PIBperCapita1) ? printf("%.2f ### %s\n", DensidadePopulacional+PIBperCapita, NomeDaCidade) : printf("%.2f ### %s\n", DensidadePopulacional1+PIBperCapita1, NomeDaCidade1);
                    }else{
                        (contadordouble == 2 ) ? printf("Vencedor: %s\n", NomeDaCidade) : printf("Vencedor: %s\n", NomeDaCidade1);
                    }
                    break;

                default:
                    printf("Opção inválida!");
                    break;

                }

            case 6:
                printf("PIB per capita\n");

                printf("Comparando...\n");
                if (PIBperCapita > PIBperCapita1) {
                    printf("Vencedor foi: %s.\n", NomeDaCidade);
                    contadordouble++;
                }else{
                    printf("Vencedor foi: %s\n", NomeDaCidade1);
                    contadordouble1++;
                }
                printf("%s : %d.\n%s : %d.\n",NomeDaCidade, contadordouble,NomeDaCidade1, contadordouble1);
                
                printf("Modo Double!\n");
                printf("jogador da carta: %s. Escolhar um atributo.\n", Carta1);
                printf("1 - População.\n");
                printf("2 - Área\n");
                printf("3 - PIB\n");
                printf("4 - Pontos turisticos\n");
                printf("5 - Densidade Populacional\n");
                scanf(" %d", &doubleJogador1);
                switch (doubleJogador1)
                {
                case 1:
                    printf("População.\n");
                    if (Populacao > Populacao1) {
                        printf("Vencedor foi: %s.\n", NomeDaCidade);
                        contadordouble++;
                     }else{
                        printf("Vencedor foi: %s\n", NomeDaCidade1);
                         contadordouble1++;
                    }
                    printf("%s : %d.\n%s : %d.\n",NomeDaCidade, contadordouble,NomeDaCidade1, contadordouble1);
                    
                    if (contadordouble == contadordouble1 ){
                        printf("Empate!\n", NomeDaCidade);
                        printf("Em caso de empate os atributos são somados e o maior valor vence a rodada.\n");
                        (PIBperCapita+Populacao >PIBperCapita1+Populacao1) ? printf("%.2f ### %s\n", PIBperCapita+Populacao, NomeDaCidade) : printf("%.2f ### %s\n", PIBperCapita1+Populacao1, NomeDaCidade1);
                    }else{
                        (contadordouble == 2 ) ? printf("Vencedor: %s\n", NomeDaCidade) : printf("Vencedor: %s\n", NomeDaCidade1);
                    }
                    break;
                case 2:
                    printf("Área\n");
                    if (Area > Area1) {
                        printf("Vencedor foi: %s.\n", NomeDaCidade);
                        contadordouble++;
                     }else{
                        printf("Vencedor foi: %s\n", NomeDaCidade1);
                         contadordouble1++;
                    }
                    printf("%s : %d.\n%s : %d.\n",NomeDaCidade, contadordouble,NomeDaCidade1, contadordouble1);
                    
                    if (contadordouble == contadordouble1 ){
                        printf("Empate!\n", NomeDaCidade);
                        printf("Em caso de empate os atributos são somados e o maior valor vence a rodada.\n");
                        (PIBperCapita+Area >PIBperCapita1+Area1) ? printf("%.2f ### %s\n", PIBperCapita+Area, NomeDaCidade) : printf("%.2f ### %s\n", PIBperCapita1+Area1, NomeDaCidade1);
                    }else{
                        (contadordouble == 2 ) ? printf("Vencedor: %s\n", NomeDaCidade) : printf("Vencedor: %s\n", NomeDaCidade1);
                    }
                    break;
                case 3:
                    printf("PIB\n");
                    if (PIB > PIB1) {
                        printf("Vencedor foi: %s.\n", NomeDaCidade);
                        contadordouble++;
                     }else{
                        printf("Vencedor foi: %s\n", NomeDaCidade1);
                         contadordouble1++;
                    }
                    printf("%s : %d.\n%s : %d.\n",NomeDaCidade, contadordouble,NomeDaCidade1, contadordouble1);
                    
                    if (contadordouble == contadordouble1 ){
                        printf("Empate!\n", NomeDaCidade);
                        printf("Em caso de empate os atributos são somados e o maior valor vence a rodada.\n");
                        (PIBperCapita+PontosTuristicos >PIBperCapita1+PontosTuristicos1) ? printf("%.2f ### %s\n", PIBperCapita+PontosTuristicos, NomeDaCidade) : printf("%.2f ### %s\n", PIBperCapita1+PontosTuristicos1, NomeDaCidade1);
                    }else{
                        (contadordouble == 2 ) ? printf("Vencedor: %s\n", NomeDaCidade) : printf("Vencedor: %s\n", NomeDaCidade1);
                    }

                    break;

                case 4:
                    printf("Pontos Turisticos\n");
                    if (PontosTuristicos1 > PontosTuristicos1) {
                        printf("Vencedor foi: %s.\n", NomeDaCidade);
                        contadordouble++;
                     }else{
                        printf("Vencedor foi: %s\n", NomeDaCidade1);
                         contadordouble1++;
                    }
                    printf("%s : %d.\n%s : %d.\n",NomeDaCidade, contadordouble,NomeDaCidade1, contadordouble1);
                    
                    if (contadordouble == contadordouble1 ){
                        printf("Empate!\n", NomeDaCidade);
                        printf("Em caso de empate os atributos são somados e o maior valor vence a rodada.\n");
                        (PIBperCapita+DensidadePopulacional >PIBperCapita1+DensidadePopulacional1) ? printf("%.2f ### %s\n", PIBperCapita+DensidadePopulacional, NomeDaCidade) : printf("%.2f ### %s\n", PIBperCapita1+DensidadePopulacional1, NomeDaCidade1);
                    }else{
                        (contadordouble == 2 ) ? printf("Vencedor: %s\n", NomeDaCidade) : printf("Vencedor: %s\n", NomeDaCidade1);
                    }
                    break;

                case 5:
                    printf("Densidade Populacional\n");
                    if (DensidadePopulacional < DensidadePopulacional1) {
                        printf("Vencedor foi: %s.\n", NomeDaCidade);
                        contadordouble++;
                     }else{
                        printf("Vencedor foi: %s\n", NomeDaCidade1);
                         contadordouble1++;
                    }
                    printf("%s : %d.\n%s : %d.\n",NomeDaCidade, contadordouble,NomeDaCidade1, contadordouble1);
                    
                    if (contadordouble == contadordouble1 ){
                        printf("Empate!\n", NomeDaCidade);
                        printf("Em caso de empate os atributos são somados e o maior valor vence a rodada.\n");
                        (DensidadePopulacional+PIBperCapita >DensidadePopulacional1+PIBperCapita1) ? printf("%.2f ### %s\n", DensidadePopulacional+PIBperCapita, NomeDaCidade) : printf("%.2f ### %s\n", DensidadePopulacional1+PIBperCapita1, NomeDaCidade1);
                    }else{
                        (contadordouble == 2 ) ? printf("Vencedor: %s\n", NomeDaCidade) : printf("Vencedor: %s\n", NomeDaCidade1);
                    }
                    break;

                default:
                    printf("Opção inválida!");
                    break;

                }
            
            default:
                printf("Opção inválida!");
                break;
            }
            break;
            case 5:
                printf("até logo, não esqueça de voltar!");
                break;

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
        printf("4 - Modo Double: cada jogador escolhe um atributo para comparação e cada comparação soma um ponto, o jogador que fizer 2 pontos vence.");
        break;

    case 3:
        printf("Obrigado por jogar supertrunfo, até logo.");
    default:
        printf("\nPor favor insira um numero válido(1-3)\n");
        break;
    }

    return 0;
}
