/* 
Controle visando evitar inclus�es m�ltiplas.
*/

#ifndef CONSTROI_MALHA
#define CONSTROI_MALHA

/* 
Controle visando identificar o servidor.
*/

#ifdef SERVIDOR_CONSTROI
#define EXT_MOD_CONSTROI
#else
#define EXT_MOD_CONSTROI extern
#endif

#include <stdio.h>
#include <stdlib.h>
#include "listas.h"
/*
Declara��es dos prot�tipos das fun��es.
*/


EXT_MOD_CONSTROI void ConstroiMalha(lista1 **epinicio);

#endif
