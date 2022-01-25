#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "exo1.h"

int pgcd(const int a, const int b){
   int pgcd = 0;
   // Completer la fonction a partir d'ici

   int i = 0;
   for (i = 1; i <= a && i <= b; ++i)
   {
      if(a % i == 0 && b % i == 0)
         pgcd = i;
   }
   // Ne pas modifier le programme apres cette ligne
   return pgcd;
}

