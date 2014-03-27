/* 
Controle visando evitar inclusões múltiplas.
*/

#ifndef PERCORRE_MALHA
#define PERCORRE_MALHA

/* 
Controle visando identificar o servidor.
*/

#ifdef SERVIDOR_PERCORRE
#define EXT_MOD_PERCORRE
#else
#define EXT_MOD_PERCORRE extern
#endif

#include <stdio.h>
#include "listas.h"

/*
Declarações dos protótipos das funções.
*/

EXT_MOD_PERCORRE void PercorreMalha(lista1 *pini);

#endif

