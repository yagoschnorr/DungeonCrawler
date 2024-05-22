#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#define ALTURA 40
#define LARGURA 40

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int menu = 0;
	int escolha_jogo = 0;
	int mortes = 0; //as variaveis que sao gerais precisam ficar fora dos whiles
	int fase = 1;
	int vitoria = 0;
	
	printf("<(Papai, eu quero sorvete!!!)\t\t\n");
  	printf("              0                 \n");
  	printf("  o          /|\\               \n");
  	printf("  |          / \\               \n");
  	Sleep(3000); 
  	system("cls");

  	printf("                <(Acalme-se meu filho, estamos chegando)\t\t\n");
  	printf("              0                 \n");
  	printf("  o          /|\\              \n");
  	printf("  |          / \\               \n");
  	Sleep(3000);
  	system("cls");

  	printf("                                  <(Finalmente te encontrei, Casseb!)\t\t\n");
  	printf("              0                {}\n");
  	printf("  o          /|\\               /|\\\n");
  	printf("  |          / \\               / \\\n");
  	Sleep(3000); 
  	system("cls");

  	printf("                                  <(Voce ira pagar!)\t\t\n");
  	printf("              0                {}\n");
  	printf("  o          /|\\         *   <_/|\\\n");
  	printf("  |          / \\               / \\\n");
  	Sleep(3000); 
  	system("cls");

  	printf("       \n"  );
  	printf("              0                {}\n");
  	printf("  o          /|\\ *           <_/|\\\n");
  	printf("  |          / \\               / \\\n");
  	Sleep(3000); 
  	system("cls");

  	printf("<(Pai, naoooo!)\t\t\n"  );
  	printf("              0                   {}\n");
  	printf("  o          /|*\\                /|\\\n");
  	printf("  |          / \\                 / \\\n");
  	Sleep(3000); 
  	system("cls");

  	printf("<(Levanta, papai! Vamos )\t\t\n"  );
  	printf("   o     0  \n");
  	printf("   |   --|--\n");
  	printf("        / \\\n");
  	Sleep(3000); 
  	system("cls");

  	printf("          <(Gi...Gi)\t\t\n"  );
  	printf("   o     0  \n");
  	printf("   |   --|--\n");
 	printf("        / \\\n");
  	Sleep(3000); 
  	system("cls");

  	printf("          <(Girottinho...)\t\t\n"  );
  	printf("   o     0  \n");
  	printf("   |   --|--\n");
  	printf("        / \\\n");
  	Sleep(3000); 
	system("cls");

  	printf("          <(Meu filho, faltou-me lhe ensinar tantas coisas)\t\t\n"  );
  	printf("   o     0  \n");
  	printf("   |   --|--\n");
  	printf("        / \\\n");
  	Sleep(3000); 
  	system("cls");

  	printf("          <(Mas me prometa)\t\t\n"  );
  	printf("   o     0  \n");
  	printf("   |   --|--\n");
  	printf("        / \\\n");
  	Sleep(3000); 
  	system("cls");

  	printf("          <(Quando voce tiver 18 anos)\t\t\n"  );
  	printf("   o     0  \n");
  	printf("   |   --|--\n");
  	printf("        / \\\n");
  	Sleep(3000); 
  	system("cls");

  	printf("          <(Voce vai em minha casa))\t\t\n"  );
  	printf("   o     0  \n");
  	printf("   |   --|--\n");
  	printf("        / \\\n");
  	Sleep(3000); 
  	system("cls");

  	printf("          <(E...E...E...))\t\t\n"  );
  	printf("   o     0  \n");
  	printf("   |   --|--\n");
  	printf("        / \\\n");
  	Sleep(3000); 
  	system("cls");

  	printf("          <(  ))\t\t\n"  );
  	printf("   o     0  \n");
  	printf("   |   --|--\n");
  	printf("        / \\\n");
  	Sleep(3000); 
	system("cls");
	
	printf("<(PAIIIIII)\t\t\n"  );
	printf("   o    (*)  \n");
	printf("   |   --|--\n");
	printf("        / \\\n");
	Sleep(3000); 
	system("cls");
	
	printf("              -----------------------------\n");
	printf("              | / --------------------- \\ |\n");
	printf("              | |                       | |\n");
	printf("              | |        Dungeon        | |\n");
	printf("              | |        Crawler!       | |\n");
	printf("              | |                       | |\n");
	printf("              | |                       | |\n");
	printf("              | \\_______________________/ |\n");
	printf("              |___________________________|\n");
	printf("           ,---______     []     _______/------,\n");
	printf("          /         /______________/          /|\n");
	printf("         /__________________________________ / | ___\n");
	printf("        |                                   |  |    )\n");
	printf("        |  _ _ _                 [-------]  |  |   (\n");
	printf("        |  o o o                 [-------]  | /    _)_\n");
	printf("        |__________________________________ |/     /  /\n");
	printf("    /-------------------------------------/|      ( )/\n");
	printf("  /-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/ /\n");
	printf("/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/ /\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
	Sleep(2000);
	system("cls");
	
	while(menu == 0){
		mortes = 0;
		printf("              -----------------------------\n");
	    printf("              | / --------------------- \\ |\n");
	    printf("              | |                       | |\n");
	    printf("              | |     [1] - Jogar!      | |\n");
	    printf("              | |     [2] - Tutorial!   | |\n");
	    printf("              | |     [3] - Sair!       | |\n");
	    printf("              | |                       | |\n");
	    printf("              | \\_______________________/ |\n");
	    printf("              |___________________________|\n");
	    printf("           ,---______     []     _______/------,\n");
	    printf("          /         /______________/          /|\n");
	    printf("         /__________________________________ / | ___\n");
	    printf("        |                                   |  |    )\n");
	    printf("        |  _ _ _                 [-------]  |  |   (\n");
	    printf("        |  o o o                 [-------]  | /    _)_\n");
	    printf("        |__________________________________ |/     /  /\n");
	    printf("    /-------------------------------------/|      ( )/\n");
	    printf("  /-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/ /\n");
	    printf("/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/ /\n");
	    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
	    printf("Escolha: ");
	    scanf("%d", &escolha_jogo);
	
	    system("cls");
	
	    while(escolha_jogo == 1 && mortes != 3 && vitoria != 1){
	      	
	      	int i,j;
			char interacao;
			int jogadori, jogadorj;
			int permissao = 0;
			char mapa1[10][10] = {
					"*****D****",
					"*        *",
					"* ****** *",
					"*    *   *",
					"**** * * *",
					"*    * * *",
					"* **** * *",
					"*   &* ***",
					"*    *  @*",
					"**********"
			};
			jogadori = 7;
			jogadorj = 4;
				
			while(fase == 1){
				
				i = jogadori;
				j = jogadorj;
				
				system("cls");
				
				for(i=0; i < 10; i++){
					printf("\n");
					for(j=0; j < 10; j++){
						printf("%c ", mapa1[i][j]);
					}
				}
				
				interacao = getch();
				
				if(interacao == 'w' || interacao == 'W'){
					if(mapa1[jogadori-1][jogadorj] == ' ' || mapa1[jogadori-1][jogadorj] == '=' || mapa1[jogadori-1][jogadorj] == '@'){
						mapa1[jogadori][jogadorj] = ' ';
						mapa1[jogadori-1][jogadorj] = '&';
						jogadori--;
					}
				}
				else if(interacao == 'a' || interacao == 'A'){
					if(mapa1[jogadori][jogadorj-1] == ' ' || mapa1[jogadori][jogadorj-1] == '@'){
						mapa1[jogadori][jogadorj] = ' ';
						mapa1[jogadori][jogadorj-1] = '&';
						jogadorj--;
					}
				}
				else if(interacao == 's' || interacao == 'S'){
					if(mapa1[jogadori+1][jogadorj] == ' ' || mapa1[jogadori+1][jogadorj] == '@'){
						mapa1[jogadori][jogadorj] = ' ';
						mapa1[jogadori+1][jogadorj] = '&';
						jogadori++;
					}
				}
				else if(interacao == 'd' || interacao == 'D'){
					if(mapa1[jogadori][jogadorj+1] == ' ' || mapa1[jogadori][jogadorj+1] == '@'){
						mapa1[jogadori][jogadorj] = ' ';
						mapa1[jogadori][jogadorj+1] = '&';
						jogadorj++;
					}
				}
				else if(interacao == 'i' || interacao == 'I'){
					if(jogadori == 1 && jogadorj == 5 && permissao != 0){
						mapa1[0][5] = '=';
					}
				}
				
				if(jogadori == 8 && jogadorj == 8){
					permissao++;
				}
				
				if(permissao != 0 && jogadori == 0 && jogadorj == 5){
					mapa1[jogadori][jogadorj] = '&';
					system("cls");
					for(i=0; i < 10; i++){
						printf("\n");
						for(j=0; j < 10; j++){
							printf("%c ", mapa1[i][j]);
						}
					}
					fase = 2;
				}
			}
			
			//FASE 22222222222222222222222222222222222222222222
			
			srand(time(NULL));
			int botao1 = 0;
			int botao2 = 0;
			int botao3 = 0;
			int monstroi, monstroj;
			int movimonstro;
			int monstroi2, monstroj2;
			int movimonstro2;
			int chave1 = 0;
			int chave2 = 0;
			int igualpermissao = 0;
			int espinho;
			char mapa2[20][20] = {
				"***D****************",
				"*     *      *   *O*",
				"*  X  *      *   *#*",
				"*     *      *     *",
				"*     *      *     *",
				"****#**      *** ***",
				"*      #           *",
				"*       #          *",
				"*        ###       *",
				"*@       #O#       *",
				"*        ###       *",
				"*           #      *",
				"*            #     *",
				"*             #    *",
				"*******       #    *",
				"*O    *       #    *",
				"*   X D       #    *",
				"*     *       #    *",
				"*@    *       #   &*",
				"********************"
			};
			jogadori = 18;
			jogadorj = 18;
			monstroi = 2;
			monstroj = 3;
			monstroi2 = 16;
			monstroj2 = 4;
				
			while(fase == 2){
				
				i = jogadori;
				j = jogadorj;
				i = monstroi;
				j = monstroj;
				i = monstroi2;
				j = monstroj2;
				
				//CONDICAO PARA O BOTAO E O IGUAL NUNCA SUMIREM
				if(jogadori == 15 && jogadorj == 1){
					mapa2[jogadori][jogadorj] = '&';
				}
				else if(monstroi2 == 15 && monstroj2 == 1){
					mapa2[monstroi2][monstroj2] = 'X';
				}
				else{
					mapa2[15][1] = 'O';
				}
				if(jogadori == 9 && jogadorj == 10){
					mapa2[jogadori][jogadorj] = '&';
				}
				else{
					mapa2[9][10] = 'O';
				}
				if(jogadori == 1 && jogadorj == 18){
					mapa2[1][18] = '&';
				}
				else{
					mapa2[1][18] = 'O';
				}
						
				if(igualpermissao != 0){
					if(jogadorj != 6){
						mapa2[16][6] = '=';
					}
				}
				
				////////////////////////////////////////////////
				system("cls");
				//printf("\n\nmortes: %d", mortes);
				for(i=0; i<20; i++){
					printf("\n");
					for(j=0; j<20; j++){
						printf("%c ", mapa2[i][j]);
					}
				}
				//printf("\n\njogadori: %d\t jogadorj: %d", jogadori, jogadorj);
					
				interacao = getch();
					
				//MOVIMENTACAO E COLISAO COM A PAREDE DO JOGADOR
				if(interacao == 'w' || interacao == 'W'){
					if(mapa2[jogadori-1][jogadorj] == '#'){ //CONDICAO PARA MORTE NOS ESPINHOS
						//printf("\n\nVOCE PERDEU UMA VIDA PARA O ESPINHO");
						fase = 4;
						mortes++;
					}
					else if(mapa2[jogadori-1][jogadorj] == ' ' || mapa2[jogadori-1][jogadorj] == 'O' || mapa2[jogadori-1][jogadorj] == '=' || mapa2[jogadori-1][jogadorj] == 'X' || mapa2[jogadori-1][jogadorj] == '@'){
						mapa2[jogadori][jogadorj] = ' ';
						mapa2[jogadori-1][jogadorj] = '&';
						jogadori--;
					}
				}
				else if(interacao == 'a' || interacao == 'A'){
					if(mapa2[jogadori][jogadorj-1] == '#'){ //CONDICAO PARA MORTE NOS ESPINHOS
						//printf("\n\nVOCE PERDEU UMA VIDA PARA O ESPINHO");
						fase = 4;
						mortes++;
					}
					else if(mapa2[jogadori][jogadorj-1] == ' ' || mapa2[jogadori][jogadorj-1] == 'O' || mapa2[jogadori][jogadorj-1] == 'X' || mapa2[jogadori][jogadorj-1] == '=' || mapa2[jogadori][jogadorj-1] == '@'){
						mapa2[jogadori][jogadorj] = ' ';
						mapa2[jogadori][jogadorj-1] = '&';
						jogadorj--;
					}
				}
				else if(interacao == 's' || interacao == 'S'){
					if(mapa2[jogadori+1][jogadorj] == '#'){ //CONDICAO PARA MORTE NOS ESPINHOS
						//printf("\n\nVOCE PERDEU UMA VIDA PARA O ESPINHO");
						fase = 4;
						mortes++;
					}
					else if(mapa2[jogadori+1][jogadorj] == ' ' || mapa2[jogadori+1][jogadorj] == 'O' || mapa2[jogadori+1][jogadorj] == 'X' || mapa2[jogadori+1][jogadorj] == '=' || mapa2[jogadori+1][jogadorj] == '@'){
						mapa2[jogadori][jogadorj] = ' ';
						mapa2[jogadori+1][jogadorj] = '&';
						jogadori++;
					}
				}
				else if(interacao == 'd' || interacao == 'D'){
					if(mapa2[jogadori][jogadorj+1] == '#'){ //CONDICAO PARA MORTE NOS ESPINHOS
						//printf("\n\nVOCE PERDEU UMA VIDA PARA O ESPINHO");
						fase = 4;
						mortes++;
					}
					else if(mapa2[jogadori][jogadorj+1] == ' ' || mapa2[jogadori][jogadorj+1] == 'O' || mapa2[jogadori][jogadorj+1] == 'X' || mapa2[jogadori][jogadorj+1] == '=' || mapa2[jogadori][jogadorj+1] == '@'){
						mapa2[jogadori][jogadorj] = ' ';
						mapa2[jogadori][jogadorj+1] = '&';
						jogadorj++;
					}
				}
				//COMANDOS PARA INTERAÇÃO
				else if(interacao == 'i' || interacao == 'I'){
					if(jogadori == 15 && jogadorj == 1){
						if(botao1 % 2 == 0){
							mapa2[8][10] = ' ';
							botao1++;
						}
						else{
							mapa2[8][10] = '#';
							botao1++;
						}
					}
					else if(jogadori == 9 && jogadorj == 10){
						if(botao2 % 2 == 0){
							mapa2[5][4] = ' ';
							botao2++;
						}
						else{
							mapa2[5][4] = '#';
							botao2++;
						}
					}
					else if(jogadori == 1 && jogadorj == 18){
						if(botao3 % 2 == 0){
							mapa2[16][14] = ' ';
							botao3++;
						}
						else{
							mapa2[16][14] = '#';
							botao3++;
						}
					}
				//PARA A CHAVE 1
					else if(jogadori == 16 && jogadorj == 7 && chave1 != 0){
						mapa2[16][6] = '=';
						igualpermissao++;
					}
					//PARA A CHAVE 2
					else if(jogadori == 1 && jogadorj == 3 && chave2 != 0){
						mapa2[0][3] = '=';
					}
				}
				//////////////////////////////////////////////////////////////
				//CONDICOES PARA PEGAR AS CHAVES
				if(mapa2[9][1] == '&'){
					chave1++;
				}
				else if(mapa2[18][1] == '&'){
					chave2++;
				}
				//////////////////////////////////////////////////////////////
				//ESPINHO
				espinho = rand()%8;
				
				if(espinho == 0 || espinho == 1 || espinho == 2 || espinho == 3 || espinho == 4 || espinho == 5 || espinho == 6){
					mapa2[2][18] = ' ';
					if(jogadori == 2 && jogadorj == 18){
						mapa2[2][18] = '&';
					}
				}
				else{
					mapa2[2][18] = '#';
					mapa2[1][18] = 'O';
					if(mapa2[jogadori][jogadorj] == '#'){
						system("cls");
						for(i=0; i<20; i++){
							printf("\n");
							for(j=0; j<20; j++){
								printf("%c ", mapa2[i][j]);
							}
						}
						Sleep(500);
						fase = 4;
						mortes++;
					}
				}
				/////////////////////////////////////////////////////////////
				//CONDICOES PARA MORTE
				if(mapa2[monstroi][monstroj] == '&'){
					//printf("\n\nVOCE PERDEU UMA VIDA PORQUE PISOU NO MONSTRO");
					system("cls");
						for(i=0; i<20; i++){
							printf("\n");
							for(j=0; j<20; j++){
								printf("%c ", mapa2[i][j]);
							}
						}
					Sleep(500);
					fase = 4;
					mortes++;
				}
				///////////////////////////////////////////////////////////
				//CRIANDO O MONSTRO1
				movimonstro = rand()%4;
			
				//SE QUISER PODE DAR RAND 5 PARA O 4 SER O DE FICAR PARADO!!!
					
				if(movimonstro == 0){ // W MONSTRO
					if(mapa2[monstroi-1][monstroj] == '&'){
						mapa2[monstroi][monstroj] = ' ';
						mapa2[monstroi-1][monstroj] = 'X';
						system("cls");
							for(i=0; i<20; i++){
								printf("\n");
								for(j=0; j<20; j++){
									printf("%c ", mapa2[i][j]);
								}
							}
						Sleep(500);
						fase = 4;
						mortes++;
					}
					else if(mapa2[monstroi-1][monstroj] == ' '){
						mapa2[monstroi][monstroj] = ' ';
						mapa2[monstroi-1][monstroj] = 'X';
						monstroi--;
					}
				}
				else if(movimonstro == 1){ // A MONSTRO
					if(mapa2[monstroi][monstroj-1] == '&'){
						mapa2[monstroi][monstroj] = ' ';
						mapa2[monstroi][monstroj-1] = 'X';
						system("cls");
							for(i=0; i<20; i++){
								printf("\n");
								for(j=0; j<20; j++){
									printf("%c ", mapa2[i][j]);
								}
							}
						Sleep(500);
						fase = 4;
						mortes++;
					}
					else if(mapa2[monstroi][monstroj-1] == ' '){
						mapa2[monstroi][monstroj] = ' ';
						mapa2[monstroi][monstroj-1] = 'X';
						monstroj--;
					}
				}
				else if(movimonstro == 2){ // S MONSTRO
					if(mapa2[monstroi+1][monstroj] == '&'){
						mapa2[monstroi][monstroj] = ' ';
						mapa2[monstroi+1][monstroj] = 'X';
						system("cls");
							for(i=0; i<20; i++){
								printf("\n");
								for(j=0; j<20; j++){
									printf("%c ", mapa2[i][j]);
								}
							}
						Sleep(500);
						fase = 4;
						mortes++;
					}
					else if(mapa2[monstroi+1][monstroj] == ' ' && monstroi != 4){
						mapa2[monstroi][monstroj] = ' ';
						mapa2[monstroi+1][monstroj] = 'X';
						monstroi++;
					}
				}
				else if(movimonstro == 3){ // D MONSTRO
					if(mapa2[monstroi][monstroj+1] == '&'){
						mapa2[monstroi][monstroj] = ' ';
						mapa2[monstroi][monstroj+1] = 'X';
						system("cls");
							for(i=0; i<20; i++){
								printf("\n");
								for(j=0; j<20; j++){
									printf("%c ", mapa2[i][j]);
								}
							}
						Sleep(500);
						fase = 4;
						mortes++;
					}
					else if(mapa2[monstroi][monstroj+1] == ' '){
						mapa2[monstroi][monstroj] = ' ';
						mapa2[monstroi][monstroj+1] = 'X';
						monstroj++;
					}
				}
					
				///////////////////////////////////////////////////////////
				//CRIANDO O MONSTRO2
				if(mapa2[monstroi2][monstroj2] == '&'){
					mapa2[monstroi2][monstroj2] = 'X';
					system("cls");
						for(i=0; i<20; i++){
							printf("\n");
							for(j=0; j<20; j++){
								printf("%c ", mapa2[i][j]);
							}
						}
					Sleep(500);
					fase = 4;
					mortes++;
				}
					
				movimonstro2 = rand()%4;
					
				//SE QUISER PODE DAR RAND 5 PARA O 4 SER O DE FICAR PARADO!!!
						
				if(movimonstro2 == 0){ // W MONSTRO
					if(mapa2[monstroi2-1][monstroj2] == '&'){
						mapa2[monstroi2][monstroj2] = ' ';
						mapa2[monstroi2-1][monstroj2] = 'X';
						system("cls");
							for(i=0; i<20; i++){
								printf("\n");
								for(j=0; j<20; j++){
									printf("%c ", mapa2[i][j]);
								}
							}
						Sleep(500);
						fase = 4;
						mortes++;
					}
					else if(mapa2[monstroi2-1][monstroj2] == ' ' || mapa2[monstroi2-1][monstroj2] == 'O'){
						mapa2[monstroi2][monstroj2] = ' ';
						mapa2[monstroi2-1][monstroj2] = 'X';
						monstroi2--;
					}
				}
				else if(movimonstro2 == 1){ // A MONSTRO
					if(mapa2[monstroi2][monstroj2-1] == '&'){
						mapa2[monstroi2][monstroj2] = ' ';
						mapa2[monstroi2][monstroj2-1] = 'X';
						system("cls");
							for(i=0; i<20; i++){
								printf("\n");
								for(j=0; j<20; j++){
									printf("%c ", mapa2[i][j]);
								}
							}
						Sleep(500);
						fase = 4;
						mortes++;
					}
					else if(mapa2[monstroi2][monstroj2-1] == ' ' || mapa2[monstroi2][monstroj2-1] == 'O'){
						mapa2[monstroi2][monstroj2] = ' ';
						mapa2[monstroi2][monstroj2-1] = 'X';
						monstroj2--;
					}
				}
				else if(movimonstro2 == 2){ // S MONSTRO
					if(mapa2[monstroi2+1][monstroj2] == '&'){
						mapa2[monstroi2][monstroj2] = ' ';
						mapa2[monstroi2+1][monstroj2] = 'X';
						system("cls");
							for(i=0; i<20; i++){
								printf("\n");
								for(j=0; j<20; j++){
									printf("%c ", mapa2[i][j]);
								}
							}
						Sleep(500);
						fase = 4;
						mortes++;
					}
					else if(mapa2[monstroi2+1][monstroj2] == ' ' || mapa2[monstroi2+1][monstroj2] == 'O'){
						mapa2[monstroi2][monstroj2] = ' ';
						mapa2[monstroi2+1][monstroj2] = 'X';
						monstroi2++;
					}
				}
				else if(movimonstro2 == 3){ // D MONSTRO
					if(mapa2[monstroi2][monstroj2+1] == '&' && mapa2[monstroi2][monstroj2+1] != '='){
						mapa2[monstroi2][monstroj2] = ' ';
						mapa2[monstroi2][monstroj2+1] = 'X';
						system("cls");
							for(i=0; i<20; i++){
								printf("\n");
								for(j=0; j<20; j++){
									printf("%c ", mapa2[i][j]);
								}
							}
						Sleep(500);
						fase = 4;
						mortes++;
					}
					else if(mapa2[monstroi2][monstroj2+1] == ' ' || mapa2[monstroi2][monstroj2+1] == 'O'){
						mapa2[monstroi2][monstroj2] = ' ';
						mapa2[monstroi2][monstroj2+1] = 'X';
						monstroj2++;
					}
				}
				////////////////////////////////////////////////////////////		
				//CONDIÇÃO PARA TROCAR A FASE
				if(mapa2[0][3] == '&'){
					fase = 3;
					break;
				}
				////////////////////////////////////////////////////////////
			}
			if(fase == 4){
				fase = 2;
			}

	    
	    //FASE 333333333
	    
		int jogadorY;
		int jogadorX;
		int monstro_que_segueY;
		int monstro_que_segueX;
		int monstro_que_segue;
		int monstro_que_segue2Y;
		int monstro_que_segue2X;
		int monstro_que_segue2;
		int monstro_que_segue3Y;
		int monstro_que_segue3X;
		int monstro_que_segue3;
		int monstro1Y;
		int monstro1X;
		int monstro1;
		int monstro2Y;
		int monstro2X;
		int monstro2;
		int monstro3Y;
		int monstro3X;
		int monstro3;
		int espinho1;
		botao1 = 1;
		botao2 = 1;
		botao3 = 1;
		int botao4 = 1;
		int botao5 = 1;
		int botao_monstro1 = 0;
		int botao_monstro2 = 0;
		int botao_monstro3 = 0;
		int botao_monstro4 = 0;
		chave1 = 1;
		chave2 = 1;
		int chave3 = 0;
		char mapa3[ALTURA][LARGURA] = {
			"*******************D********************",
			"*@#V   #####  ###    ##               O*",
			"*####               ###    #########   *",
			"*  ##  #        ### #    ######   ##   *",   
			"* # #  #  ##    #     ####    #    #   *",
			"*####  #   ##   #    O#                *",
			"* # #  #   ######     #       #    #   *",
			"* ###      ##       ###   #####    #   *",
			"*# #   #       #                ####   *",
			"*O     #####   ########   #### O#>     *",
			"****************************************",
			"*         X  V         #   #           *",
			"*  ##################  # # # ####  #   *",
			"*                        #      #  #   *",
			"*  ###########################  #  #   *",
			"*           #        #      >#  #  #   *", //--> Botão de baixo tira o espinho da coordenada y[14] x[14]
			"*########## # ######O# #######     #   *", //--> Botão de dentro tira o espinho da coordenada y[17] x[22]
			"*           #        ###        #  #   *",
			"* ####### # ##########    #######  #   *",
			"*    O    #            #           #  >*",
			"****************************************",
			"*>     *       ##     #     #          *",
			"*      * # # ###  ### # ###   #### ##  *",
			"*      # # ###  O #   # # #####    #   *", //--> Botão para o # la de baixo
			"*   X  * #     #### ##### #     #####  *",
			"*      * # ########   #   ######       *",
			"******** # #      ## ## #        ####  *",
			"*      * # ######       # ########     *",
			"*@     *## #    ##########       ####  *", 
			"*      #    ###         O# #####      >*", //--> Botão para abrir o espinho da caixa do monstro // Espinhos com % de nascer
			"****************************************",
			"*@           # V                     #O*", //--> Para tirar os espinhos i = 34/35 e j = 11 // Chave para abrir a porta da parte de cima
			"*           #                        ##*", //--> espinhos com % de nascer
			"*###       #               *           *", //--> "###" - Plataforma de espinhos
			"*          #               *           *", 
			"*          #               *           *",
			"*          #        #       *          *",
			"*    X    #         #                  *",
			"*>       #          #                 &*", //--> os espinhos "###" na vertical serão outra plataforma
			"****************************************",
		};
		
		//DEFINIÇÕES DE POSIÇÃO
		jogadorY = ALTURA-2;
		jogadorX = LARGURA-2;
		monstro_que_segueY = ALTURA-9;
		monstro_que_segueX = LARGURA-25;
		monstro_que_segue2Y = ALTURA-29;
		monstro_que_segue2X = LARGURA-27;
		monstro_que_segue3Y = ALTURA-39;
		monstro_que_segue3X = LARGURA-37;
		monstro1Y = ALTURA-3;
		monstro1X = LARGURA-35;
		monstro2Y = ALTURA-16;
		monstro2X = LARGURA-36;
		monstro3Y = ALTURA-29;
		monstro3X = LARGURA-30;
		
		while(fase == 3){
			
			//VARIAVEIS PADROES DA FASE
			mapa3[31][38] = 'O'; // 1 parte
			mapa3[29][24] = 'O'; // 2 parte 
			mapa3[23][16] = 'O'; // 2 parte 
			mapa3[19][5] = 'O'; // 3 parte 
			mapa3[16][20] = 'O'; // 3 parte 
			mapa3[9][1] = 'O'; // 4 parte 
			mapa3[9][31] = 'O'; // 4 parte 
			mapa3[5][21] = 'O'; // 4 parte 
			mapa3[1][38] = 'O'; // 4 parte
			mapa3[38][1] = '>';
			mapa3[29][38] = '>';
			mapa3[21][1] = '>';
			mapa3[19][38] = '>';
			mapa3[15][28] = '>';
			mapa3[9][33] = '>';
			mapa3[jogadorY][jogadorX] = '&';
			mapa3[monstro1Y][monstro1X] = 'X';
			mapa3[monstro2Y][monstro2X] = 'X';
			mapa3[monstro3Y][monstro3X] = 'X';
			mapa3[monstro_que_segueY][monstro_que_segueX] = 'V';
			mapa3[monstro_que_segue2Y][monstro_que_segue2X] = 'V';
			if(botao_monstro1 == 0 || botao_monstro2 == 0 || botao_monstro3 == 0 || botao_monstro4 == 0){
				mapa3[monstro_que_segue3Y][monstro_que_segue3X] = 'V';
			}
			
			//PRINTANDO O MAPA
			system("cls");
			
			for(i=0; i<40; i++){
				printf("\n");
				for(j=0; j<40; j++){
					printf("%c ", mapa3[i][j]);
				}
			}
			
			//MOVIMENTAÇÃO DO JOGADOR
			interacao = getch();
						
			switch(interacao){
				case 'w':
					case 'W':
						if(mapa3[jogadorY-1][jogadorX] != '*' && mapa3[jogadorY-1][jogadorX] != 'D'){
							mapa3[jogadorY][jogadorX] = ' ';
							jogadorY--;
						}
						break;
				case 'a':
					case 'A':
						if(mapa3[jogadorY][jogadorX-1] != '*'){
							mapa3[jogadorY][jogadorX] = ' ';
							jogadorX--;
						}
						break;
				case 's':
					case 'S':
						if(mapa3[jogadorY+1][jogadorX] != '*'){
							mapa3[jogadorY][jogadorX] = ' ';
							jogadorY++;
						}
						break;
				case 'd':
					case 'D':
						if(mapa3[jogadorY][jogadorX+1] != '*'){
							mapa3[jogadorY][jogadorX] = ' ';
							jogadorX++;
						}
						break;
				case 'i':
					case 'I':
						if(jogadorY == 1 && jogadorX == 19 && mapa3[31][38] == ' '){
							mapa3[0][19] = '='; 
						}
						else if(jogadorY == 31 && jogadorX == 38){
							if(botao1 != 0){
								mapa3[34][11] = ' ';
								mapa3[35][11] = ' ';
								botao1--;
							}
							else{
								mapa3[34][11] = '#';
								mapa3[35][11] = '#';
								botao1++;
							}
						}
						else if(jogadorY == 29 && jogadorX == 24){
							if(botao2 != 0){
								mapa3[23][7] = ' ';
								botao2--;
							}
							else{
								mapa3[23][7] = '#';
								botao2++;
							}
						}
						else if(jogadorY == 23 && jogadorX == 16){
							if(botao3 != 0){
								mapa3[29][12] = ' ';
								botao3--;
							}
							else{
								mapa3[29][12] = '#';
								botao3++;
							}
						}
						else if(jogadorY == 19 && jogadorX == 5){
							if(botao4 != 0){
								mapa3[14][13] = ' ';
								botao4--;
							}
							else{
								mapa3[14][13] = '#';
								botao4++;
							}
						}
						else if(jogadorY == 16 && jogadorX == 20){
							if(botao5 != 0){
								mapa3[14][22] = ' ';
								botao5--;
							}
							else{
								mapa3[14][22] = '#';
								botao5++;
							}
						}
						else if(jogadorY == 9 && jogadorX == 1){
							botao_monstro1 = 1;
						}
						else if(jogadorY == 9 && jogadorX == 31){
							botao_monstro2 = 1;
						}
						else if(jogadorY == 5 && jogadorX == 21){
							botao_monstro3 = 1;
						}
						else if(jogadorY == 1 && jogadorX == 38){
							botao_monstro4 = 1;
						}
						//CONDIÇÃO PARA ABRIR A PORTA DA FASE
						else if((chave1 == 1 && chave2 == 1 && chave3 == 1) && (jogadorY == 1 && jogadorX == 19)){
							mapa3[0][19] = '=';
						}
						break;
			}
			
			//CONDIÇÃO PARA MATAR O MONSTRO_QUE_SEGUE 3
			
			if(botao_monstro1 == 1 && botao_monstro2 == 1 && botao_monstro3 == 1 && botao_monstro4 == 1){
				mapa3[monstro_que_segue3Y][monstro_que_segue3X] = ' ';
				monstro_que_segue3Y = 3;
				monstro_que_segue3X = 1;
				mapa3[monstro_que_segue3Y][monstro_que_segue3X] = ' ';
				mapa3[1][2] = ' ';
			}
			
			//CONDIÇÃO PARA PEGAR AS CHAVES
			
			if(jogadorY == 31 && jogadorX == 1){
				chave1 = 1;
			}
			else if(jogadorY == 28 && jogadorX == 1){
				chave2 = 1;
			}
			else if(jogadorY == 1 && jogadorX == 1){
				chave3 = 1;
			}
			
			//ESPINHO 32 38
			espinho1 = rand()%8;
					
			if(espinho1 == 0 || espinho1 == 1 || espinho1 == 2 || espinho1 == 3 || espinho1 == 4 || espinho1 == 5 || espinho1 == 6){
				mapa3[32][38] = ' ';
				mapa3[31][37] = ' ';
				mapa3[32][37] = ' ';
				mapa3[29][7] = ' ';
				
				if(jogadorY == 32 && jogadorX == 38){
					mapa3[32][38] = '&';
				}
				else if(jogadorY == 31 && jogadorX == 37){
					mapa3[31][37] = '&';
				}
				else if(jogadorY == 32 && jogadorX == 37){
					mapa3[32][37] = '&';
				}
				else if(jogadorY == 29 && jogadorX == 7){
					mapa3[29][7] = '&';
				}
			}
			else{
				mapa3[32][38] = '#';
				mapa3[31][37] = '#';
				mapa3[32][37] = '#';
				mapa3[29][7] = '#';
				mapa3[31][38] = 'O';
			}
			
			//MOVIMENTAÇÃO DO MONSTRO QUE SEGUE
			if(jogadorY < 39 && jogadorY > 30){
				monstro_que_segue = rand()%2;
						
				switch(monstro_que_segue){
					case 0:
						if((((mapa3[monstro_que_segueY-1][monstro_que_segueX] == ' ' || mapa3[monstro_que_segueY-1][monstro_que_segueX] == '&') && mapa3[monstro_que_segueY-1][monstro_que_segueX] != '#') && mapa3[monstro_que_segueY-1][monstro_que_segueX] != 'X') && jogadorY < monstro_que_segueY){
							mapa3[monstro_que_segueY][monstro_que_segueX] = ' ';
							monstro_que_segueY--;
						}
						else if((((mapa3[monstro_que_segueY+1][monstro_que_segueX] == ' ' || mapa3[monstro_que_segueY+1][monstro_que_segueX] == '&') && mapa3[monstro_que_segueY+1][monstro_que_segueX] != '#') && mapa3[monstro_que_segueY+1][monstro_que_segueX] != 'X') && jogadorY > monstro_que_segueY){
							mapa3[monstro_que_segueY][monstro_que_segueX] = ' ';
							monstro_que_segueY++;
						}
						break;
					case 1:
						if((((mapa3[monstro_que_segueY][monstro_que_segueX-1] == ' ' || mapa3[monstro_que_segueY][monstro_que_segueX-1] == '&') && mapa3[monstro_que_segueY][monstro_que_segueX-1] != '#') && mapa3[monstro_que_segueY][monstro_que_segueX-1] != 'X') && jogadorX < monstro_que_segueX){
							mapa3[monstro_que_segueY][monstro_que_segueX] = ' ';
							monstro_que_segueX--;
						}
						else if((((mapa3[monstro_que_segueY][monstro_que_segueX+1] == ' ' || mapa3[monstro_que_segueY][monstro_que_segueX+1] == '&') && mapa3[monstro_que_segueY][monstro_que_segueX+1] != '#') && mapa3[monstro_que_segueY][monstro_que_segueX+1] != 'X') && jogadorX > monstro_que_segueX){
							mapa3[monstro_que_segueY][monstro_que_segueX] = ' ';
							monstro_que_segueX++;
						}
						break;
				}
			}
			
			//MOVIMENTAÇÃO DO MONSTRO QUE SEGUE 2
			if(jogadorY < 20 && jogadorY > 10){
				monstro_que_segue2 = rand()%2;
						
				switch(monstro_que_segue2){
					case 0:
						if((((mapa3[monstro_que_segue2Y-1][monstro_que_segue2X] == ' ' || mapa3[monstro_que_segue2Y-1][monstro_que_segue2X] == '&') && mapa3[monstro_que_segue2Y-1][monstro_que_segue2X] != '#') && mapa3[monstro_que_segue2Y-1][monstro_que_segue2X] != 'X') && jogadorY < monstro_que_segue2Y){
							mapa3[monstro_que_segue2Y][monstro_que_segue2X] = ' ';
							monstro_que_segue2Y--;
						}
						else if((((mapa3[monstro_que_segue2Y+1][monstro_que_segue2X] == ' ' || mapa3[monstro_que_segue2Y+1][monstro_que_segue2X] == '&') && mapa3[monstro_que_segue2Y+1][monstro_que_segue2X] != '#') && mapa3[monstro_que_segue2Y+1][monstro_que_segue2X] != 'X') && jogadorY > monstro_que_segue2Y){
							mapa3[monstro_que_segue2Y][monstro_que_segue2X] = ' ';
							monstro_que_segue2Y++;
						}
						break;
					case 1:
						if((((mapa3[monstro_que_segue2Y][monstro_que_segue2X-1] == ' ' || mapa3[monstro_que_segue2Y][monstro_que_segue2X-1] == '&') && mapa3[monstro_que_segue2Y][monstro_que_segue2X-1] != '#') && mapa3[monstro_que_segue2Y][monstro_que_segue2X-1] != 'X') && jogadorX < monstro_que_segue2X){
							mapa3[monstro_que_segue2Y][monstro_que_segue2X] = ' ';
							monstro_que_segue2X--;
						}
						else if((((mapa3[monstro_que_segue2Y][monstro_que_segue2X+1] == ' ' || mapa3[monstro_que_segue2Y][monstro_que_segue2X+1] == '&') && mapa3[monstro_que_segue2Y][monstro_que_segue2X+1] != '#') && mapa3[monstro_que_segue2Y][monstro_que_segue2X+1] != 'X') && jogadorX > monstro_que_segue2X){
							mapa3[monstro_que_segue2Y][monstro_que_segue2X] = ' ';
							monstro_que_segue2X++;
						}
						break;
				}
			}
			
			//MOVIMENTAÇÃO DO MONSTRO QUE SEGUE 3
			if(jogadorY < 10){
				monstro_que_segue3 = rand()%2;
						
				switch(monstro_que_segue3){
					case 0:
						if((((mapa3[monstro_que_segue3Y-1][monstro_que_segue3X] == ' ' || mapa3[monstro_que_segue3Y-1][monstro_que_segue3X] == '&') && mapa3[monstro_que_segue3Y-1][monstro_que_segue3X] != '#') && mapa3[monstro_que_segue3Y-1][monstro_que_segue3X] != 'X') && jogadorY < monstro_que_segue3Y){
							mapa3[monstro_que_segue3Y][monstro_que_segue3X] = ' ';
							monstro_que_segue3Y--;
						}
						else if((((mapa3[monstro_que_segue3Y+1][monstro_que_segue3X] == ' ' || mapa3[monstro_que_segue3Y+1][monstro_que_segue3X] == '&') && mapa3[monstro_que_segue3Y+1][monstro_que_segue3X] != '#') && mapa3[monstro_que_segue3Y+1][monstro_que_segue3X] != 'X') && jogadorY > monstro_que_segue3Y){
							mapa3[monstro_que_segue3Y][monstro_que_segue3X] = ' ';
							monstro_que_segue3Y++;
						}
						break;
					case 1:
						if((((mapa3[monstro_que_segue3Y][monstro_que_segue3X-1] == ' ' || mapa3[monstro_que_segue3Y][monstro_que_segue3X-1] == '&') && mapa3[monstro_que_segue3Y][monstro_que_segue3X-1] != '#') && mapa3[monstro_que_segue3Y][monstro_que_segue3X-1] != 'X') && jogadorX < monstro_que_segue3X){
							mapa3[monstro_que_segue3Y][monstro_que_segue3X] = ' ';
							monstro_que_segue3X--;
						}
						else if((((mapa3[monstro_que_segue3Y][monstro_que_segue3X+1] == ' ' || mapa3[monstro_que_segue3Y][monstro_que_segue3X+1] == '&') && mapa3[monstro_que_segue3Y][monstro_que_segue3X+1] != '#') && mapa3[monstro_que_segue3Y][monstro_que_segue3X+1] != 'X') && jogadorX > monstro_que_segue3X){
							mapa3[monstro_que_segue3Y][monstro_que_segue3X] = ' ';
							monstro_que_segue3X++;
						}
						break;
				}
			}
			
			//MOVIMENTAÇÃO DO MONSTRO PADRÃO 1
			if(jogadorY < 39 && jogadorY > 30){
				monstro1 = rand()%4;
				
				switch(monstro1){
					case 0:
						if((mapa3[monstro1Y-1][monstro1X] == ' ' || mapa3[monstro1Y-1][monstro1X] == '&' || mapa3[monstro1Y-1][monstro1X] == 'O' || mapa3[monstro1Y-1][monstro1X] == '>') && mapa3[monstro1Y-1][monstro1X] != 'V'){
							mapa3[monstro1Y][monstro1X] = ' ';
							monstro1Y--;
						}
						break;
					case 1:
						if((mapa3[monstro1Y][monstro1X-1] == ' ' || mapa3[monstro1Y][monstro1X-1] == '&' || mapa3[monstro1Y][monstro1X-1] == 'O' || mapa3[monstro1Y][monstro1X-1] == '>') && mapa3[monstro1Y][monstro1X-1] != 'V'){
							mapa3[monstro1Y][monstro1X] = ' ';
							monstro1X--;
						}
						break;
					case 2:
						if((mapa3[monstro1Y+1][monstro1X] == ' ' || mapa3[monstro1Y+1][monstro1X] == '&' || mapa3[monstro1Y+1][monstro1X] == 'O' || mapa3[monstro1Y+1][monstro1X] == '>') && mapa3[monstro1Y+1][monstro1X] != 'V'){
							mapa3[monstro1Y][monstro1X] = ' ';
							monstro1Y++;
						}
						break;
					case 3:
						if((mapa3[monstro1Y][monstro1X+1] == ' ' || mapa3[monstro1Y][monstro1X+1] == '&' || mapa3[monstro1Y][monstro1X+1] == 'O' || mapa3[monstro1Y][monstro1X+1] == '>') && mapa3[monstro1Y][monstro1X+1] != 'V'){
							mapa3[monstro1Y][monstro1X] = ' ';
							monstro1X++;
						}
						break;	
				}
			}
			
			//MOVIMENTAÇÃO DO MONSTRO PADRÃO 2
			if(jogadorY < 30 && jogadorY > 20){
				monstro2 = rand()%4;
				
				switch(monstro2){
					case 0:
						if((mapa3[monstro2Y-1][monstro2X] == ' ' || mapa3[monstro2Y-1][monstro2X] == '&' || mapa3[monstro2Y-1][monstro2X] == 'O' || mapa3[monstro2Y-1][monstro2X] == '>') && mapa3[monstro2Y-1][monstro2X] != 'V'){
							mapa3[monstro2Y][monstro2X] = ' ';
							monstro2Y--;
						}
						break;
					case 1:
						if((mapa3[monstro2Y][monstro2X-1] == ' ' || mapa3[monstro2Y][monstro2X-1] == '&' || mapa3[monstro2Y][monstro2X-1] == 'O' || mapa3[monstro2Y][monstro2X-1] == '>') && mapa3[monstro2Y][monstro2X-1] != 'V'){
							mapa3[monstro2Y][monstro2X] = ' ';
							monstro2X--;
						}
						break;
					case 2:
						if((mapa3[monstro2Y+1][monstro2X] == ' ' || mapa3[monstro2Y+1][monstro2X] == '&' || mapa3[monstro2Y+1][monstro2X] == 'O' || mapa3[monstro2Y+1][monstro2X] == '>') && mapa3[monstro2Y+1][monstro2X] != 'V'){
							mapa3[monstro2Y][monstro2X] = ' ';
							monstro2Y++;
						}
						break;
					case 3:
						if((mapa3[monstro2Y][monstro2X+1] == ' ' || mapa3[monstro2Y][monstro2X+1] == '&' || mapa3[monstro2Y][monstro2X+1] == 'O' || mapa3[monstro2Y][monstro2X+1] == '>') && mapa3[monstro2Y][monstro2X+1] != 'V'){
							mapa3[monstro2Y][monstro2X] = ' ';
							monstro2X++;
						}
						break;	
				}
			}
			
			//MOVIMENTAÇÃO DO MONSTRO PADRÃO 3
			if(jogadorY < 20 && jogadorY > 10){
				monstro3 = rand()%4;
				
				switch(monstro3){
					case 0:
						if((mapa3[monstro3Y-1][monstro3X] == ' ' || mapa3[monstro3Y-1][monstro3X] == '&' || mapa3[monstro3Y-1][monstro3X] == 'O' || mapa3[monstro3Y-1][monstro3X] == '>') && mapa3[monstro3Y-1][monstro3X] != 'V'){
							mapa3[monstro3Y][monstro3X] = ' ';
							monstro3Y--;
						}
						break;
					case 1:
						if((mapa3[monstro3Y][monstro3X-1] == ' ' || mapa3[monstro3Y][monstro3X-1] == '&' || mapa3[monstro3Y][monstro3X-1] == 'O' || mapa3[monstro3Y][monstro3X-1] == '>') && mapa3[monstro3Y][monstro3X-1] != 'V'){
							mapa3[monstro3Y][monstro3X] = ' ';
							monstro3X--;
						}
						break;
					case 2:
						if((mapa3[monstro3Y+1][monstro3X] == ' ' || mapa3[monstro3Y+1][monstro3X] == '&' || mapa3[monstro3Y+1][monstro3X] == 'O' || mapa3[monstro3Y+1][monstro3X] == '>') && mapa3[monstro3Y+1][monstro3X] != 'V'){
							mapa3[monstro3Y][monstro3X] = ' ';
							monstro3Y++;
						}
						break;
					case 3:
						if((mapa3[monstro3Y][monstro3X+1] == ' ' || mapa3[monstro3Y][monstro3X+1] == '&' || mapa3[monstro3Y][monstro3X+1] == 'O' || mapa3[monstro3Y][monstro3X+1] == '>') && mapa3[monstro3Y][monstro3X+1] != 'V'){
							mapa3[monstro3Y][monstro3X] = ' ';
							monstro3X++;
						}
						break;	
				}
			}
						
			//CONDIÇÃO PARA TELETRANSPORTE1
			if(jogadorY == 38 && jogadorX == 1){
				jogadorY = 29;
				jogadorX = 38;
			}
			else if(jogadorY == 29 && jogadorX == 38){
				jogadorY = 38;
				jogadorX = 1;
			}
			//CONDIÇÃO PARA TELETRANSPORTE2
			if(jogadorY == 21 && jogadorX == 1){
				jogadorY = 19;
				jogadorX = 38;
			}
			else if(jogadorY == 19 && jogadorX == 38){
				jogadorY = 21;
				jogadorX = 1;
			}
			//CONDIÇÃO PARA TELETRANSPORTE3
			if(jogadorY == 15 && jogadorX == 28){
				jogadorY = 9;
				jogadorX = 33;
			}
			else if(jogadorY == 9 && jogadorX == 33){
				jogadorY = 15;
				jogadorX = 28;
			}
						
			//CONDIÇÃO DE GAMEOVER
			if(jogadorY == monstro_que_segueY && jogadorX == monstro_que_segueX){
				system("cls");
				mapa3[monstro_que_segueY][monstro_que_segueX] = 'V';
				for(i=0; i<40; i++){
					printf("\n");
					for(j=0; j<40; j++){
						printf("%c ", mapa3[i][j]);
					}
				}
				Sleep(500);
				system("cls");
				mortes++;
				//break;
				fase = 5;
			}
			else if(jogadorY == monstro_que_segue2Y && jogadorX == monstro_que_segue2X){
				system("cls");
				mapa3[monstro_que_segue2Y][monstro_que_segue2X] = 'V';
				for(i=0; i<40; i++){
					printf("\n");
					for(j=0; j<40; j++){
						printf("%c ", mapa3[i][j]);
					}
				}
				Sleep(500);	
				system("cls");
				//break;
				mortes++;
				fase = 5;
			}
			else if(jogadorY == monstro_que_segue3Y && jogadorX == monstro_que_segue3X){
				system("cls");
				mapa3[monstro_que_segue3Y][monstro_que_segue3X] = 'V';
				for(i=0; i<40; i++){
					printf("\n");
					for(j=0; j<40; j++){
						printf("%c ", mapa3[i][j]);
					}
				}
				Sleep(500);	
				system("cls");
				//break;
				mortes++;
				fase = 5;
			}
			else if(mapa3[jogadorY][jogadorX] == '#'){
				system("cls");
				mapa3[monstro_que_segueY][monstro_que_segueX] = 'V';
				for(i=0; i<40; i++){
					printf("\n");
					for(j=0; j<40; j++){
						printf("%c ", mapa3[i][j]);
					}
				}
				Sleep(500);	
				system("cls");
				//break;
				mortes++;
				fase = 5;
			}
			else if(jogadorY == monstro1Y && jogadorX == monstro1X){
				system("cls");
				mapa3[monstro1Y][monstro1X] = 'X';
				for(i=0; i<40; i++){
					printf("\n");
					for(j=0; j<40; j++){
						printf("%c ", mapa3[i][j]);
					}
				}
				Sleep(500);	
				system("cls");
				//break;
				mortes++;
				fase = 5;
			}
			else if(jogadorY == monstro2Y && jogadorX == monstro2X){
				system("cls");
				mapa3[monstro2Y][monstro2X] = 'X';
				for(i=0; i<40; i++){
					printf("\n");
					for(j=0; j<40; j++){
						printf("%c ", mapa3[i][j]);
					}
				}
				Sleep(500);	
				system("cls");
				//break;
				mortes++;
				fase = 5;
			}
			else if(jogadorY == monstro3Y && jogadorX == monstro3X){
				system("cls");
				mapa3[monstro3Y][monstro3X] = 'X';
				for(i=0; i<40; i++){
					printf("\n");
					for(j=0; j<40; j++){
						printf("%c ", mapa3[i][j]);
					}
				}
				Sleep(500);	
				system("cls");
				//break;
				mortes++;
				fase = 5;
			}
			
			//SOMENTE PARA TESTE DE MORTE
			
			if(fase == 5 && mortes != 3){
				fase = 3;
				jogadorY = ALTURA-2;
				jogadorX = LARGURA-2;
				mapa3[34][11] = '#';
				mapa3[35][11] = '#';
				mapa3[23][7] = '#';
				mapa3[29][12] = '#';
				mapa3[14][13] = '#';
				mapa3[14][22] = '#';
				botao1 = 1;
				botao2 = 1;
				botao3 = 1;
				botao4 = 1;
				botao5 = 1;
				botao_monstro1 = 0;
				botao_monstro2 = 0;
				botao_monstro3 = 0;
				botao_monstro4 = 0;
				monstro_que_segue3Y = ALTURA-39;
				monstro_que_segue3X = LARGURA-37;
				mapa3[monstro_que_segue3Y][monstro_que_segue3X] = 'V';
				
			}
			//--------------------------//
			
			//CONDICAO DE WIN
			if(jogadorY == 0 && jogadorX == 19){
				vitoria = 1;
				break;
			}	
			
		}
	}
	//FIM FASE 3
	    
		if(escolha_jogo == 2){
	    	printf("\t**************************************************************************\n");
	    	printf("\t**************************************************************************\n");
	    	printf("\t*******                                                            *******\n");
	    	printf("\t*******                                                            *******\n");
	    	printf("\t*******     #####  #   #  #####  #####  ####   #   ###   #         *******\n");
	    	printf("\t*******       #    #   #    #    #   #  #   #     #   #  #         *******\n");
	    	printf("\t*******       #    #   #    #    #   #  ####   #  #####  #         *******\n");
	    	printf("\t*******       #    #   #    #    #   #  # #    #  #   #  #         *******\n");
	    	printf("\t*******       #    #####    #    #####  #  ##  #  #   #  #####     *******\n");
	    	printf("\t*******                                                            *******\n");
	    	printf("\t*******                                                            *******\n");
	    	printf("\t*******         Legenda: [w] - Andar para cima.                    *******\n");
	    	printf("\t*******                  [a] - Andar para esquerda.                *******\n");
	    	printf("\t*******                  [s] - Andar para baixo.                   *******\n");
	    	printf("\t*******                  [d] - Andar para direita.                 *******\n");
	    	printf("\t*******                  [i] - Interagir com o objeto.             *******\n");
	    	printf("\t*******                                                            *******\n");
	    	printf("\t*******                   & - Seu Personagem.                      *******\n");
	    	printf("\t*******                   @ - Chave.                               *******\n");
	    	printf("\t*******                   D - Porta Fechada.                       *******\n");
	    	printf("\t*******                   = - Porta Aberta.                        *******\n");
	    	printf("\t*******                   O - Representa um Botao.                 *******\n");
	    	printf("\t*******                   # - Espinho.                             *******\n");
	    	printf("\t*******                   > - Transporte.                          *******\n");
	    	printf("\t*******                   X - Monstro Nivel 1.                     *******\n");
	    	printf("\t*******                   V - Monstro Nivel 2.                     *******\n");
	    	printf("\t*******                                                            *******\n");
	    	printf("\t*******         Regras: Va ate as portas para prosseguir de fase.  *******\n");
	    	printf("\t*******                 Nao deixe os espinhos ou inimigos          *******\n");
	    	printf("\t*******                 enconstarem em voce, senao voce morre.     *******\n");
	    	printf("\t*******                 Voce tem tres vidas.                       *******\n");
	    	printf("\t*******                 Boa sorte!!!                               *******\n");
	    	printf("\t*******                                                            *******\n");
	    	printf("\t*******                                                            *******\n");
	    	printf("\t**************************************************************************\n");
	    	printf("\t**************************************************************************\n");
	
	    	getch();
	    	system("cls");
	    }
	    else if(escolha_jogo == 3){
	      	menu++;
	      	printf("\t**********************************************************************\n");
	      	printf("\t**********************************************************************\n");
	      	printf("\t*******                                                        *******\n");
	     	printf("\t*******                                                        *******\n");
	      	printf("\t*******   #####  ####   ####   #  #####   ###   ####   #####   *******\n");
	      	printf("\t*******   #   #  #   #  #   #     #      #   #  #   #  #   #   *******\n");
	      	printf("\t*******   #   #  ####   ####   #  #  ##  #####  #   #  #   #   *******\n");
	      	printf("\t*******   #   #  #   #  # #    #  #   #  #   #  #   #  #   #   *******\n");
	      	printf("\t*******   #####  #####  #  ##  #  #####  #   #  ####   #####   *******\n");
	      	printf("\t*******                                                        *******\n");
	      	printf("\t*******                  ####   #####  ####                    *******\n");
	      	printf("\t*******                  #   #  #   #  #   #                   *******\n");
	      	printf("\t*******                  ####   #   #  ####                    *******\n");
	      	printf("\t*******                  #      #   #  # #                     *******\n");
	      	printf("\t*******                  #      #####  #  ##                   *******\n");
	      	printf("\t*******                                                        *******\n");
	      	printf("\t*******         #####  #####  #####   ###   ####   #           *******\n");
	      	printf("\t*******            #   #   #  #      #   #  #   #  #           *******\n");
	      	printf("\t*******            #   #   #  #  ##  #####  ####   #           *******\n");
	      	printf("\t*******         #  #   #   #  #   #  #   #  # #                *******\n");
	      	printf("\t*******         ####   #####  #####  #   #  #  ##  #           *******\n");
	      	printf("\t*******                                                        *******\n");
	      	printf("\t*******                                                        *******\n");
	      	printf("\t**********************************************************************\n");
	      	printf("\t**********************************************************************\n");
	
	    }
	    else{
	    	if(mortes == 3){
	    		fase = 1; 
	    		system("cls");
	    		printf("\n*****************************************************");
				printf("\n*****************************************************");
				printf("\n*******                                       *******");
				printf("\n*******                                       *******");
				printf("\n*******     #####   ###   #     #  #####      *******");
				printf("\n*******     #      #   #  ##   ##  #          *******");
				printf("\n*******     #  ##  #####  # # # #  ###        *******");
				printf("\n*******     #   #  #   #  #  #  #  #          *******");
				printf("\n*******     #####  #   #  #     #  #####      *******");
				printf("\n*******                                       *******");
				printf("\n*******     #####  #   #  #####  ####   #     *******");
				printf("\n*******     #   #  #   #  #      #   #  #     *******");
				printf("\n*******     #   #  #   #  ###    ####   #     *******");
				printf("\n*******     #   #   # #   #      # #          *******");
				printf("\n*******     #####    #    #####  #  ##  #     *******");
				printf("\n*******                                       *******");
				printf("\n*******      Aperte qualquer tecla para       *******");   	
				printf("\n*******            voltar ao Menu.            *******");
				printf("\n*******                                       *******");
				printf("\n*****************************************************");
				printf("\n*****************************************************");
				getch();
	    		system("cls");
	    	}
	    	if(vitoria == 1){
	    		fase = 1;
	    		system("cls");
	    		printf("\n*****************************************************");
				printf("\n*****************************************************");
				printf("\n*****************************************************");
				printf("\n*******                                       *******");
				printf("\n*******                                       *******");
				printf("\n*******         #   #  #####  #   #           *******");
				printf("\n*******          # #   #   #  #   #           *******");
				printf("\n*******           #    #   #  #   #           *******");
				printf("\n*******           #    #   #  #   #           *******");
				printf("\n*******           #    #####  #####           *******");
				printf("\n*******                                       *******");
				printf("\n*******        #     #  #  ##    #  #         *******");
				printf("\n*******        #     #     # #   #  #         *******");
				printf("\n*******        #  #  #  #  #  #  #  #         *******");
				printf("\n*******        # # # #  #  #   # #            *******");
				printf("\n*******        ##   ##  #  #    ##  #         *******");
				printf("\n*******                                       *******");
				printf("\n*******       Voce encontrou o caminho        *******");
				printf("\n*******            da aprovacao!              *******");
				printf("\n*******                                       *******");
				printf("\n*******      Aperte qualquer tecla para       *******");   	
				printf("\n*******            voltar ao Menu.            *******");
				printf("\n*******                                       *******");
				printf("\n*****************************************************");
				printf("\n*****************************************************");
	    		getch();
	    		system("cls");
	    	}
	    	
	    	/*printf("%d", escolha_jogo);
		    printf("Voce digitou uma opcao invalida!\n");
		    printf("Digite somente [1], [2] ou [3].\n");
		    Sleep(1000);
		    system("cls");*/
	      	
	    }
	}

	return 0;
}
