#include "constantes.h"
#include <stdio.h>
#include <stdlib.h>

// Blocos de ações
void mover(SerMitologico *pSer, void (*f1)(SerMitologico* pSer), void (*f2)(SerMitologico* pSer)) {
   int movimento;
   printf("mover a manivela? 0 = nao, 1 = sim: ");
   int entradaValida = scanf("%d", &movimento);

   if(entradaValida != 1 || (movimento != 1 && movimento != 0)) {
      printf("opcao invalida. tente novamente\n");
      fflush(stdin);
      return mover(pSer, f1, f2);
   }

   if(movimento == 1) {
      system("cls");
      f1(pSer);
      f2(pSer);
      mover(pSer, f1, f2);
   }
}

void ligar(SerMitologico *pSer, void (*f1)(SerMitologico* pSer)) {
   while(pSer->energia > 0) {
      system("cls");
      f1(pSer);
      pSer->energia -= 1;
      printf("energia em %d%%\n", pSer->energia);
   }
   printf("sem energia\n");
   printf("parando...\n");
}

// Ações individuais
void mexerPernas(SerMitologico *pSer) {
   printf("mexendo pernas...\n");
}

void baterAsas(SerMitologico *pSer) {
   printf("batendo as asas...\n");
}

void emitirSom(SerMitologico *pSer) {
   printf("emitindo som...\n");
}

void recarregar(SerMitologico *pSer) {
   pSer->energia = ENERGIA_MAX;
   printf("ser mitologico recarregado\n");
}