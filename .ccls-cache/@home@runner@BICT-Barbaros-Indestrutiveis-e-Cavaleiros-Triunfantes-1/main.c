#include <stdio.h>
#include <string.h>
#include "Personagem.h"

int main(void) {

  Personagem *barbaro;
  Personagem *cavaleiro;
  Personagem *personagem;
  
  int(opcao);
  char nome[30];
  char item[30];

  printf("Nome: ");
  scanf("%s", nome);
  printf("Classe: 1 - Bárbaro    2 - Cavaleiro: ");
  scanf("%d", &opcao);

  if (opcao == 1){
    barbaro = criar(3, 1000.0, 40, 30, 10, 20, 10, 10, "Bárbaro", nome);
    personagem = barbaro;
  }
  if (opcao == 2){
    cavaleiro = criar(5, 3000.0, 80, 70, 40, 90, 30, 60, "Cavaleiro", nome);
    personagem = cavaleiro;
  }

  printf("Personagem: %s\n", (*personagem).nome);

  consultar_atributo(personagem, 2);
  consultar_todos_atributos(personagem);
  aumentar_nivel(personagem, 2);
  qtde_dinheiro(personagem, 300.45);
  
  liberar(personagem);

  return 0;
}