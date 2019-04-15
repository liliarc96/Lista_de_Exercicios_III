#ifndef MINHASTRING_H
#define MINHASTRING_H
/*
*strcpy - Copia string para outro array char

*strcmp - Comparação entre duas strings

*strcat - Concatenação de duas strings

*strlen - Retorna tamanho da string
*/

//strcpy()
/*
O conteúdo da segunda variável ou constante informada será copiado para a área indicada no primeiro parâmetro.
*/
void copiaString(char* destino, char* original){
	int i; // Índice contador
    	printf("A string original eh %s\n", original);
    	printf("A string destino eh %s\n", destino);
	for(i = 0; i <= sizeof(destino); i++){
		destino[i]= original[i]; // Destino recebe o que está no índice de Original
	}
}

//strcmp()
/*

Essa função irá fazer a comparação, caractere a caractere, dos dois parâmetros informados. 
Como resultado da comparação serão obtidos os seguintes valores:

(*) -1 indicando que o parâmetro 1 é menor que o parâmetro 2;
(*) 0 indicando que os parâmetros são iguais;
(*) 1 caso o primeiro seja maior que o segundo parâmetro.

*/
int comparaString(char* string1, char* string2){
	int i; // Índice contador
	int maiorprimeira = 0;
	int maiorsegunda = 0;

	for(i = 0;i < sizeof(string1); i++){
		if(string1[i] > string2[i]){
			maiorprimeira++;
		}else if(string1[i] < string2[i]){
			maiorsegunda++;
		}
		if(maiorprimeira > maiorsegunda){
			return 1;
		}else if(maiorsegunda > maiorprimeira){
			return -1;
		}else{
			//As duas são iguais
			return 0;
		}
	}
}

#endif /* MINHASTRING_H */
