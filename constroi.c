/*
Declara��o visando identificar o m�dulo como servidor.
*/

#define SERVIDOR_CONSTROI

/* 
Inclus�o de arquivo com a declara��o da interface.
*/
#include "constroi.h"

void ConstroiMalha(lista1 **epinicio) {
  FILE *arq;
  lista1 *pd1, *pd2;
  lista2 *pp1, *pp2;
  char c;
  int i, n;

  arq = fopen ("t103.txt", "r");
  *epinicio = NULL;
  while ((c = getc (arq)) != EOF) {
    pd1 = malloc (sizeof (lista1));
    pd1->cursado = 0;
    pd1->disc = c;
    pd1->pacesso = NULL;
    pd1->proxd = NULL;
    if (*epinicio == NULL)
      *epinicio = pd1;
    else
      pd2->proxd = pd1;
    pd2 = pd1;
    while ((c = getc (arq)) != '\n');
  }
  fclose (arq);
  arq = fopen ("t103.txt", "r");
  pd1 = *epinicio;
  while ((c = getc (arq)) != EOF) {
    fscanf (arq, "%d ", &n); 
    for (i=1; i !=n+1; i++) {
      c = getc (arq); 
      pp1 = malloc (sizeof (lista2));
      pp1->ppre = *epinicio;
      while (pp1->ppre->disc != c)
        pp1->ppre = pp1->ppre->proxd;
      pp1->proxp = NULL;
      if (pd1->pacesso == NULL)
        pd1->pacesso = pp1;
      else pp2->proxp = pp1;
      pp2 = pp1;
      c = getc (arq);  
    }
    pd1 = pd1->proxd;
  }
}
