#include "interface.h"

int main() {
   SerMitologico helios = { 
      .nome = "helios", 
      .tipo = {
         "vento",
         "sol"
      },
      .caracteristicas = {
         "asas de fogo", 
         "chifre de alce de vento", 
         "olhos de esmeralda"
      },
      .energia = ENERGIA_MAX   
      };
   ligar(&helios, emitirSom);
   mover(&helios, baterAsas, mexerPernas);
   return 0;
}
