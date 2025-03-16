#include<stdio.h>
    int main()
    {
        int opcao, direcao,casas;

        do
        { 
            printf("##########          Bem-Vindo ao jogo de Xadrez.          ##########\n");
            printf("         Escolha uma peça para jogar:          \n");
            printf("1- Torre\n");
            printf("2- Bispo\n");
            printf("3- Cavalo\n");
            printf("4- Rainha\n");
            printf("0- Sair\n");
            scanf("%i", &opcao);
                    switch (opcao)
                    {
                    case 1:
                        printf("Você escolheu a Torre.\n");
                        printf("Escolha a direção de movimento:\n");
                        printf("1- Esquerda.\n");
                        printf("2- Direita.\n");
                        printf("3- Frente.\n");
                        printf("4- Trás.\n");
                        scanf("%d",& direcao);

                                switch (direcao)
                                {
                                case 1:
                                    printf("Escolha quantas casas deseja andar:\n");
                                    scanf("%d", &casas);
                                        for (int i = 0; i <casas; i++)
                                        {
                                            printf("Esquerda.\n");
                                        }
                                        
                                    break;
                                    case 2:
                                    printf("Escolha quantas casas deseja andar:\n");
                                    scanf("%d", &casas);
                                        for (int i = 0; i <casas; i++)
                                        {
                                            printf("Direita.\n");
                                        }
                                        
                                    break;
                                    case 3:
                                    printf("Escolha quantas casas deseja andar:\n");
                                    scanf("%d", &casas);
                                        for (int i = 0; i <casas; i++)
                                        {
                                            printf("Frente.\n");
                                        }
                                        
                                    break;
                                    case 4:
                                    printf("Escolha quantas casas deseja andar:\n");
                                    scanf("%d", &casas);
                                        for (int i = 0; i <casas; i++)
                                        {
                                            printf("Atrás.\n");
                                        }
                                        
                                    break;
                                
                                default:
                                printf("Opção inválida, retornando ao menu inicial....\n");
                                }
                        
                        break;
                    case 2:
                        printf("Você escolheu o Bispo.\n");
                        printf("Escolha a direção de movimento:\n");
                        printf("1- Esquerda Acima.\n");
                        printf("2- Direita Acima.\n");
                        printf("3- Esquerda Abaixo.\n");
                        printf("4- Direita Abaixo.\n");
                        scanf("%d",& direcao);
                                
                                switch (direcao)
                                {
                                case 1:
                                    printf("Escolha quantas casas deseja andar:\n");
                                    scanf("%d", &casas);
                                        for (int j = 0; j < casas; j++)
                                        {
                                            printf("Esquerda, Acima.\n");
                                        }
                                        
                                    break;
                                    case 2:
                                    printf("Escolha quantas casas deseja andar:\n");
                                    scanf("%d", &casas);
                                        for (int j = 0; j < casas; j++)
                                        {
                                            printf("Direita, Acima.\n");
                                        }
                                        
                                    break;
                                    case 3:
                                    printf("Escolha quantas casas deseja andar:\n");
                                    scanf("%d", &casas);
                                        for (int j = 0; j < casas; j++)
                                        {
                                            printf("Esquerda, Abaixo.\n");
                                        }
                                        
                                    break;
                                    case 4:
                                    printf("Escolha quantas casas deseja andar:\n");
                                    scanf("%d", &casas);
                                        for (int j = 0; j < casas; j++)
                                        {
                                            printf("Direita, Abaixo.\n");
                                        }
                                        
                                    break;
                                
                                default:
                                    printf("Opção inválida, retornando ao menu principal.....\n");
                                    break;
                                }

                        break;
                    case 3:
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
                    case 4:
                        printf("Você escolheu a Rainha.\n");  
                        printf("Escolha a direção de movimento:\n");
                        printf("1- Esquerda.\n");
                        printf("2- Direita.\n");
                        printf("3- Frente.\n");
                        printf("4- Trás.\n");
                        printf("5- Esquerda Acima.\n");
                        printf("6- Direita Acima.\n");
                        printf("7- Esquerda Abaixo.\n");
                        printf("8- Direita Abaixo.\n");
                        scanf("%d",& direcao);
                                
                                switch (direcao)
                                {
                                    case 1:
                                    printf("Escolha quantas casas deseja andar:\n");
                                    scanf("%d", &casas);
                                        for (int i = 0; i <casas; i++)
                                        {
                                            printf("Esquerda.\n");
                                        }
                                        
                                    break;
                                    case 2:
                                    printf("Escolha quantas casas deseja andar:\n");
                                    scanf("%d", &casas);
                                        for (int i = 0; i <casas; i++)
                                        {
                                            printf("Direita.\n");
                                        }
                                        
                                    break;
                                    case 3:
                                    printf("Escolha quantas casas deseja andar:\n");
                                    scanf("%d", &casas);
                                        for (int i = 0; i <casas; i++)
                                        {
                                            printf("Frente.\n");
                                        }
                                        
                                    break;
                                    case 4:
                                    printf("Escolha quantas casas deseja andar:\n");
                                    scanf("%d", &casas);
                                        for (int i = 0; i <casas; i++)
                                        {
                                            printf("Atrás.\n");
                                        }
                                        
                                    break;
                                case 5:
                                    printf("Escolha quantas casas deseja andar:\n");
                                    scanf("%d", &casas);
                                        for (int k = 0; k < casas; k++)
                                        {
                                            printf("Esquerda, Acima.\n");
                                        }
                                        
                                    break;
                                    case 6:
                                    printf("Escolha quantas casas deseja andar:\n");
                                    scanf("%d", &casas);
                                        for (int k = 0; k < casas; k++)
                                        {
                                            printf("Direita, Acima.\n");
                                        }
                                        
                                    break;
                                    case 7:
                                    printf("Escolha quantas casas deseja andar:\n");
                                    scanf("%d", &casas);
                                        for (int k = 0; k < casas; k++)
                                        {
                                            printf("Esquerda, Abaixo.\n");
                                        }
                                        
                                    break;
                                    case 8:
                                    printf("Escolha quantas casas deseja andar:\n");
                                    scanf("%d", &casas);
                                        for (int k = 0; k < casas; k++)
                                        {
                                            printf("Direita, Abaixo.\n");
                                        }
                                        
                                    break;
                                
                                default:
                                    printf("Opção inválida, retornando ao menu principal.....\n");
                                    break;
                                }

                        break; 

                        break; 
                    default:
                        printf("Opção inválida.\n");
                        break;
                    }
        } while (opcao !=0);

            printf("Saindo do jogo.......\n");


        return 0;
    }
    