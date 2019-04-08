#ifndef MINHASTRING_H
#define MINHASTRING_H
/*
*strcpy - Copia string para outro array char

*strcmp - Comparação entre duas strings

*strcat - Concatenação de duas strings

*strlen - Retorna tamanho da string
*/

//strcpy()
void copiaString(char* destino, char* original){
	int i; // Índice contador

	for(i = 0; i < sizeof(original); i++){
		destino[i]= original[i]; // Destino recebe o que está no índice de Original
	}
}

#endif /* MINHASTRING_H */
