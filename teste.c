#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <minhaString.h>

int main()
{
   char name[] = "Hello";
   char surname[] = "World";

   printf("%s\n", name );
   printf("%s\n", surname );

   copiaString(surname, name);

   printf("%s\n", name );
   printf("%s\n", surname );
   
   /* Saída:
      Hello
      World
      A string original eh Hello
      A string destino eh World
      Hello
      Hello*/
   
   return 0;
}
