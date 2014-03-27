#include "main.h"

  main (){
  struct lista_disc *pinicio;

  ConstroiMalha (&pinicio);
  PercorreMalha (pinicio);
  PercursoLinear (pinicio);
    
  system("Pause");
}
    
