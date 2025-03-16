#include <stdio.h>

// Função recursiva para movimentação
void moverRecursivo(int casas, char *direcao) {
    if (casas <= 0) return;  // Caso base: para quando as casas acabarem
    printf("%s\n", direcao);
    moverRecursivo(casas - 1, direcao);  // Chamada recursiva diminuindo uma casa
}

int main() {
    int opcao, direcao, casas;

    do {
        printf("##########          Bem-Vindo ao jogo de Xadrez.          ##########\n");
        printf("Escolha uma peça para jogar:\n");
        printf("1- Torre\n2- Bispo\n3- Rainha\n4- Cavalo\n0- Sair\n");
        scanf("%i", &opcao);

        switch (opcao) {
            case 1:
                printf("Você escolheu a Torre.\n");
                printf("Escolha a direção de movimento:\n1- Esquerda\n2- Direita\n3- Frente\n4- Trás\n");
                scanf("%d", &direcao);
                printf("Escolha quantas casas deseja andar:\n");
                scanf("%d", &casas);

                switch (direcao) {
                    case 1: moverRecursivo(casas, "Esquerda"); break;
                    case 2: moverRecursivo(casas, "Direita"); break;
                    case 3: moverRecursivo(casas, "Frente"); break;
                    case 4: moverRecursivo(casas, "Atrás"); break;
                    default: printf("Opção inválida.\n");
                }
                break;

            case 2:
                printf("Você escolheu o Bispo.\n");
                printf("Escolha a direção de movimento:\n1- Esquerda Acima\n2- Direita Acima\n3- Esquerda Abaixo\n4- Direita Abaixo\n");
                scanf("%d", &direcao);
                printf("Escolha quantas casas deseja andar:\n");
                scanf("%d", &casas);

                switch (direcao) {
                    case 1: moverRecursivo(casas, "Esquerda, Acima"); break;
                    case 2: moverRecursivo(casas, "Direita, Acima"); break;
                    case 3: moverRecursivo(casas, "Esquerda, Abaixo"); break;
                    case 4: moverRecursivo(casas, "Direita, Abaixo"); break;
                    default: printf("Opção inválida.\n");
                }
                break;

            case 3:
                printf("Você escolheu a Rainha.\n");
                printf("Escolha a direção de movimento:\n1- Esquerda\n2- Direita\n3- Frente\n4- Trás\n5- Esquerda Acima\n6- Direita Acima\n7- Esquerda Abaixo\n8- Direita Abaixo\n");
                scanf("%d", &direcao);
                printf("Escolha quantas casas deseja andar:\n");
                scanf("%d", &casas);

                switch (direcao) {
                    case 1: moverRecursivo(casas, "Esquerda"); break;
                    case 2: moverRecursivo(casas, "Direita"); break;
                    case 3: moverRecursivo(casas, "Frente"); break;
                    case 4: moverRecursivo(casas, "Atrás"); break;
                    case 5: moverRecursivo(casas, "Esquerda, Acima"); break;
                    case 6: moverRecursivo(casas, "Direita, Acima"); break;
                    case 7: moverRecursivo(casas, "Esquerda, Abaixo"); break;
                    case 8: moverRecursivo(casas, "Direita, Abaixo"); break;
                    default: printf("Opção inválida.\n");
                }
                break;

                case 4:
                        printf("Você escolheu o Cavalo.\n");
                        printf("Escolha a direção de movimento:\n");
                        printf("1- Esquerda, para cima.\n");
                        printf("2- Esquerda, para baixo.\n");
                        printf("3- Para cima, esquerda.\n");
                        printf("4- Para cima, direita.\n");
                        printf("5- Direita, para cima.\n");
                        printf("6- Direita, para baixo.\n");
                        printf("7- Para baixo, esquerda.\n");
                        printf("8- Para baixo, direita.\n");
                        scanf("%d",& direcao);

                                switch (direcao)
                                {
                                case 1:
                                    printf(" Esquerda\n Esquerda\n Acima\n");
                                    break;
                                case 2:
                                    printf(" Esquerda\n Esquerda\n Abaixo\n");
                                    break;
                                case 3:
                                    printf(" Acima\n Acima \n Esquerda\n");
                                    break;
                                case 4:
                                    printf(" Acima\n Acima \n Direita\n");
                                case 5:
                                    printf(" Direita\n Direita\n Acima\n");
                                    break;
                                case 6:
                                    printf(" Direita\n Direita\n Abaixo\n");
                                    break;
                                case 7:
                                    printf(" Abaixo\n Abaixo\n Esquerda\n");
                                    break;
                                case 8:
                                    printf(" Abaixo\n Abaixo\n Direita\n");

                                
                                default:
                                printf("Opção inválida, retornando ao menu inicial.....\n");
                                    break;
                                }
                        break;

            case 0:
                printf("Saindo do jogo...\n");
                break;

            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 0);

    return 0;
}
