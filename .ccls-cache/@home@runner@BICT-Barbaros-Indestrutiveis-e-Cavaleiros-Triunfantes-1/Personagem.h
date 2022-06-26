/*
 * Definição do personagem (.h)
 */
typedef struct _personagem {

  int nivel;
  int posicao[300][300];
  float dinheiro;
  int forca;
  int inteligencia;
  int sabedoria;
  int destreza;
  int constituicao;
  int carisma;
  char *classe;
  char *nome;
} Personagem;

// Operações

Personagem* criar(int nivel, float dinheiro, int forca, int inteligencia, int sabedoria, int destreza, int constituicao, int carisma, char *classe, char *nome);

void aumentar_nivel(Personagem* personagem, int valor);

//void movimentar(Personagem* personagem, int proxima_posicao);

void qtde_dinheiro(Personagem* personagem, float valor);

void consultar_atributo(Personagem* personagem, int valor);

void consultar_todos_atributos(Personagem* personagem);

void liberar(Personagem* personagem);
