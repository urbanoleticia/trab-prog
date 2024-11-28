#include <stdio.h>
#include <stdlib.h>


int main() {
	
    int opcao; // váriavel para guardar a opção 

    // inicia o loop
   while(1){
   

        // Menu de opções
        printf("=======================================\n");
printf("       SISTEMA DE REVISÃO DE C\n");
printf(       " Qual parte da matéria você quer estudar?\n");
printf("=======================================\n");

        printf("\n 1 - Revisar Prog 1");
        printf("\n 2 - Introdução a prog 2");
        printf("\n 3 - Estrutura de controle");
        printf("\n 4 - Codificação de caracteres");
        printf("\n 5 - Ponteiros");
        printf("\n 6 - Struct");
        printf("\n 7 - Bibliotecas");
        printf("\n 8 - Recursividade");
        printf("\n 9 - Busca e ordenação");
        printf("\n 10 - Alocação dinâmica");
        printf("\n 11 - Arquivos");
        printf("\n 12 -  Pilhas");
        printf("\n 13 - Filas");
        printf("\n 14 - Listas encadeadas");
        printf("\n 15 - Arvore");
printf("\n=======================================\n");        
        
        scanf("%d", &opcao);
        
        if (opcao == 0){
		   printf("\n para de palhaçada, é para escolher de 1 a 15");
       
        }else if (opcao < 1 || opcao > 15) {
            
        }else if (opcao == 1){
            printf("\nRevisar prog 1");
            printf("\n\n\nem prog um vemos conceitos básicos de programação em c, como bibliotecas padraõ, repreticção, ariaveis e afins");
            
        } else if (opcao == 2 ){
            printf("\nIntrodução a prog 2");
        	
	    } else if (opcao == 3 ){
            printf("\nEstrutura de controle");
        	
		} else if (opcao == 4 ){
            printf("\nCodificação de caracteres");
        	
		} else if (opcao == 5 ){
            printf("\nPonteiros");
        	
		} else if (opcao ==6 ){
            printf("\nStruct");
        	
		} else if (opcao == 7 ){
            printf("\nBibliotecas");
        	
		} else if (opcao == 8 ){
            printf("\nRecursividade");
        	
		} else if (opcao == 9 ){
            printf("\nBusca e ordenação");
        	
		} else if (opcao == 10 ){
            printf("\nAlocação dinâmica");
        	
		} else if (opcao == 11 ){
            printf("\nArquivos");
        	
		} else if (opcao == 12 ){
            printf("\nPilhas");
        	
		} else if (opcao == 13 ){
            printf("\nArvore");
        	
		}
	}

	 return 0;
  }
  
 
  
