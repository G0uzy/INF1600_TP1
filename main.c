#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "exo1.h"

int main(int argc, char** argv) {

   // TODO: Demander les deux valeurs dont on veut trouver le PGCD
      int val_a = 0;
      int val_b = 0;
      printf("Entrez la valeur A: \n");
      scanf("%d", &val_a);
      printf("Entrez la valeur B: \n");
      scanf("%d", &val_b);
   // TODO: Appeler la fonction implementee dans le fichier exo1.c
      int val_pgcd =  pgcd(val_a , val_b);

   // TODO: Afficher le PGCD calcule
   printf("Le plus grand diviseur commun de %d et %d est %d \n", val_a, val_b, val_pgcd);
   // Completer le programme a partir d'ici
   // Ne pas modifier apres cette ligne
   return 0;
}

