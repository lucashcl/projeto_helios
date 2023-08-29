#include "funcoes.c"

// Bloco de ações
void mover(SerMitologico *pSer, void (*f1)(SerMitologico* pSer), void (*f2)(SerMitologico* pSer));
void ligar(SerMitologico *pSer, void (*f)(SerMitologico* pSer));

// Ações individuais
void recarregar(SerMitologico *pSer);
void emitirSom(SerMitologico* pSer);
void mexerPernas(SerMitologico* pSer);
void baterAsas(SerMitologico* pSer);