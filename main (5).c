/*
Autor: Caio Mario Zachesky Junior
Linguagem:C
Data: 11/12/2024
Descrição: Não escolha a bomba
Funcionalidades: main, mostra e bo
Versão: C
*/
#include <stdio.h>//biblioteca para entrada e saida
#include <stdlib.h>//biblioteca de aleatorieza numero pseudo-aleatorio
#include <time.h>//biblioteca da variavel tempo 
void mostra(int a[3][3]){//função para mostra os numeros da matriz
printf("#############################\n");
printf("#    %d   #   %d   #   %d   #\n",a[0][0], a[0][1], a[0][2]);
printf("#    %d   #   %d   #   %d   #\n",a[1][0], a[1][1], a[1][2]);
printf("#    %d   #   %d   #   %d   #\n",a[2][0], a[2][1], a[2][2]);
printf("#############################\n");
}
int bo(void){//função para quanto o usuario escolhe a bomba
printf("                          \n");
printf("           #######        \n");
printf("          ##    ø###      \n");
printf("          #7       ###    \n");
printf("       #######       ###7 \n");
printf("       #######         ###\n");
printf("     o#########ø          \n");
printf("   ###############        \n");
printf("  #################o      \n");
printf(" ###################      \n");
printf(" ###################      \n");
printf("  ##################      \n");
printf("  ##################      \n");
printf("     ############         \n");
printf("       ########           \n");
}
int main()//função principal
{   int c[9];

    int y = 0;//variavel de controle
    int escola = 0;//variavel para as escolhas do jogador
    int pontos = 0;//variavel de pontos do jogador
    int marcos[3][3];//matriz para gerar 9 numeros pseudo-aleatorio
    srand(time(NULL));//para gerar numeros 'aleatorios' precisa de um paramentro que é atualiado o tempo todo esse é o tempo
    for (int i=0;i<=2;i++){//laço de repetição para ir passado as linhas da matriz
        for (int n=0;n<=2;n++){//loço de repetição para ir passado as colunas da matriz
            marcos[i][n] = rand() %100;// atribuindo valores 'aleatorios' para a matriz 
            
            
        }
    }
   
        int linha = rand() %3;//gerando posicao da linha da bomba
        int coluna = rand() %3;//gerando posicao da coluna da bomba
        int bomba = marcos[linha][coluna];//atribuindo isso a bomba
        mostra(marcos);//mostra os numeros da matriz
        printf("Escolha um numero da matriz: ");//printf para dizer para o usuario escolhe um numeri da matriz
        scanf("%d",&escola);//pegardo o valor do usuario
    while(y!=1 ){//laco de repeticao para o jogo rolar
       for(int i = 0; i<10; i++){
            
            if(escola == bomba){// se for igual a bomba 
            bo();//mostra a bomba
            printf("Voce perdeu \n");//diz se perdeu
            printf("Fim de jogo\n");//fim de jogo
            printf("PONTOS: %d\n", pontos);//mostra pontos
            y = y + 1;// atribuindo valor 1 para a variavel de controle para parar o jogo
            break;
        }
        else if(escola == c[0]|| escola == c[1]||escola == c[2]||escola == c[3]||escola == c[4]||escola == c[5]||escola == c[6]||escola == c[7]||escola ==c[8] ){//if para que o jogador nao repita numeros
            
            printf("Nao pode este numero voce já escolheu\n");//mostra para o jogador escolheu um numero que ja foi
            mostra(marcos);//mostrar a matriz
            printf("digite outro numero:");//falar pro o jogador escoler novamente
            
                }
        else if(escola != bomba){//se nao a escola é diferente da bomba
            
           
            printf("Parabens, voce nao morreu\n");//Parabens
            pontos = pontos + 1;// variavel pontos recebe mais um
            printf("PONTOS: %d\n", pontos);//mostra pontos 
            mostra(marcos);
            printf("Escolha outro numero:");
            
               
                if(pontos == 8){//se pontos for 8 voce ganhou
                    printf("Parabens, voce é muito MESTRAO\n");//Parabens
                    printf("YOU WON");//voce ganhou
                    y = y + 1;//atribuindo valor 1 para a variavel de controle para parar o jogo
                    break;
             }
        
            
            
        }
        c[i] = escola;// atribuindo a escolha do jogador na matriz c
        scanf("%d", &escola);//escaniar a escolha
        
    }
} return 0;
}

    
