typedef char string32[32];

struct serMitologico {
   string32 nome;
   string32 tipo[2];
   string32 caracteristicas[3];
   int energia;
};

typedef struct serMitologico SerMitologico;

#define ENERGIA_MAX 100

