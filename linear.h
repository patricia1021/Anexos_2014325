/* 
Controle visando evitar inclus�es m�ltiplas.
*/

#ifndef PERCORRE_LINEARMENTE_MALHA
#define PERCORRE_LINEARMENTE_MALHA

/* 
Controle visando identificar o servidor.
*/

#ifdef SERVIDOR_PERCORRE_LINEAR
#define EXT_MOD_PERCORRE_LINEAR
#else
#define EXT_MOD_PERCORRE_LINEAR extern
#endif

#include <stdio.h>
#include "listas.h"

/*
Declara��es dos prot�tipos das fun��es.
*/

EXT_MOD_CONSTROI void PercursoLinear(lista1 *pini);
