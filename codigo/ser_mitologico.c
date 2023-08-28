#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef char string[32];

#define ENERGIA_MAX 100

typedef struct {
   string nome;
   string tipo[2];
   string caracteristicas[3];
   int energia;
} SerMitologico;

void andar(SerMitologico *ser) {
   int movimento;
   printf("mover a manivela? 0 = nao, 1 = sim: ");
   scanf("%d", &movimento);
   if(movimento != 0) {
      printf("andando...\n");
      andar(ser);
   } else {
      printf("parando...\n");
   }
}

void emitir_som(SerMitologico *ser) {
      if(ser->energia > 0) {
      system("cls");
      printf("emitindo som...\n");
      printf("energia em %d%%\n", ser->energia);
      ser->energia -= 1;
      emitir_som(ser);
   } else {
      system("cls");
      printf("energia em %d%%\n", ser->energia);
      printf("parando...\n");
   }
}

void bater_asas(SerMitologico *ser) {
   if(ser->energia > 0) {
      system("cls");
      printf("batendo as asas...\n");
      printf("energia em %d%%\n", ser->energia);
      ser->energia -= 1;
      bater_asas(ser);
   } else {
      system("cls");
      printf("energia em %d%%\n", ser->energia);
      printf("parando...\n");
   }
}

void recarregar(SerMitologico *ser) {
   ser->energia = ENERGIA_MAX;
   printf("ser mitologico recarregado\n");
}

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
   andar(&helios);
   bater_asas(&helios);
   recarregar(&helios);
   sleep(2);
   emitir_som(&helios);
   return 0;
}
