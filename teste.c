#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <minhaString.h>

int main()
{
   char name[] = "abcde";
   char surname[] = "ABCDE";
   
   printf("-----------Inicio do teste 1-----------\n");
   printf("%s\n", name );
   printf("%s\n", surname );

   copiaString(surname, name);

   printf("%s\n", name );
   printf("%s\n", surname );

   printf("-----------Fim do teste 1-----------\n\n\n\n");
   printf("-----------Inicio do teste 2-----------\n");
   int teste2;
   teste2 = comparaString(name,surname);

   printf("Retorno foi %d", teste2);
   printf("-----------Fim do teste 2-----------\n\n\n\n");
   printf("-----------Inicio do teste 3-----------\n");
   return 0;
}
