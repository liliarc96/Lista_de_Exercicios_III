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
	for(i = 0; destino[i] != '\0'; i++){
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

	for(i = 0; string1[i] != '\0'; i++){
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

//strcat()
/*
Esta função irá concatenar a segunda string ao final da primeira string.

O primeiro parâmetro da função portanto deve ser uma variável e possuir
o espaço suficiente para o resultado. A função não irá testar se existe
espaço fazendo a movimentação de caracteres do segundo parâmetro para o
final do primeiro. O segundo parâmetro pode ser uma variável ou uma
constante delimitada por aspas.
*/
char* concatenaString(char* string1, char* string2){
    int i, j;
    for(i = 0; string1[i] != '\0'; ++i); //Conta o tamanho da primeira string
    for(j = 0; string2[i] != '\0'; ++j, ++i){
        string1[i] = string2[j]; //Adiciona a segunda ao final da primeira de acordo com o valor de i
    }

    string1[i] = '\0'; //Adiciona \0 ao final da primeira string
    return string1;
}

//strlen()
/*
Esta função irá retornar a quantidade de caracteres existentes em uma string,
não considerando o caractere NULL na contagem dos caracteres.
*/
int retornaString(char *stringteste){
    int i,tamanho;
    for(i=0,tamanho=0; stringteste[i] != '\0' ; i++,tamanho++);
    return tamanho;
}

#endif /* MINHASTRING_H */
