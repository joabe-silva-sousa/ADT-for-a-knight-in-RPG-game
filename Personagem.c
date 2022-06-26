#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Personagem.h"



Personagem* criar(int nivel, float dinheiro, int forca, int inteligencia, int sabedoria, int destreza, int constituicao, int carisma, char *classe, char *nome, int x, int y){
  
  Personagem* personagem;

  personagem = malloc(sizeof(Personagem));
  
  (*personagem).nivel = nivel;
  (*personagem).dinheiro = dinheiro;
  (*personagem).forca = forca;
  (*personagem).inteligencia = inteligencia;
  (*personagem).sabedoria = sabedoria;
  (*personagem).destreza = destreza;
  (*personagem).constituicao = constituicao;
  (*personagem).carisma = carisma;
  (*personagem).classe = classe;
  (*personagem).nome = nome;
  (*personagem).posicao_X = x;
  (*personagem).posicao_Y = y;

  return personagem;
}


void aumentar_nivel(Personagem* personagem, int valor){
  printf("__________________________\n");
  printf("AUMENTAR NÍVEL\n");
  printf("  Nível anterior: %d\n", (*personagem).nivel);
  printf("  Acréscimo: %d\n", valor);
  (*personagem).nivel += valor;
  printf("  Nível atual: %d\n", (*personagem).nivel);
}


void movimentar(Personagem* personagem, int linha, int coluna){
  
  printf("__________________________\n");
  printf("MOVIMENTAR PERSONAGEM\n");
  printf("  Posicão: (%d, %d)\n", (*personagem).posicao_X, (*personagem).posicao_Y);
  (*personagem).posicao_X = linha;
  (*personagem).posicao_Y = coluna;
  printf("  Nova posicão: (%d, %d)\n", (*personagem).posicao_X, (*personagem).posicao_Y);
}


void qtde_dinheiro(Personagem* personagem, float valor){
  printf("__________________________\n");
  printf("DEFINIR QUANTIDADE DE DINHEIRO\n", (*personagem).nome);
  printf("  Quantia anterior: T$ %.2f\n", (*personagem).dinheiro);
  printf("  Acréscimo: T$ %.2f\n", valor);
  (*personagem).dinheiro += valor;
  printf("  Nova quantia: T$ %.2f\n", (*personagem).dinheiro);
}


void consultar_atributo(Personagem* personagem, int valor){
  printf("__________________________\n");
  printf("CONSULTAR ATRIBUTO nº %d\n", valor);
  if (valor == 1){
    printf("  Nome: %s\n", (*personagem).nome);
  }
  if (valor == 2){
    printf("  Classe: %s\n", (*personagem).classe);
  }
  if (valor == 3){
    printf("  Nível: %d\n", (*personagem).nivel);
  }
  if (valor == 4){
    printf("  Posicão: (%d, %d)\n", (*personagem).posicao_X, (*personagem).posicao_Y);
  }
  if (valor == 5){
    printf("  Dinheiro: T$ %.2f\n", (*personagem).dinheiro);
  }
  if (valor == 6){
    printf("  Força: %d\n", (*personagem).forca);
  }
  if (valor == 7){
    printf("  Inteligência: %d\n", (*personagem).inteligencia);
  }
  if (valor == 8){
    printf("  Sabedoria: %d\n", (*personagem).sabedoria);
  }
  if (valor == 9){
    printf("  Destreza: %d\n", (*personagem).destreza);
  }
  if (valor == 10){
    printf("  Constituição: %d\n", (*personagem).constituicao);
  }
  if (valor == 11){
    printf("  Carisma: %d\n", (*personagem).carisma);
  }
}
    

void consultar_todos_atributos(Personagem* personagem){
  
  printf("__________________________\n");
  printf("ATRIBUTOS DO PERSONAGEM\n");
  printf("  1. Nome: %s\n", (*personagem).nome);
  printf("  2. Classe: %s\n", (*personagem).classe);
  printf("  3. Nível: %d\n", (*personagem).nivel);
  printf("  4. Posicão: (%d, %d)\n", (*personagem).posicao_X, (*personagem).posicao_Y);
  printf("  5. Dinheiro: T$ %.2f\n", (*personagem).dinheiro);
  printf("  6. Força: %d\n", (*personagem).forca);
  printf("  7. Inteligência: %d\n", (*personagem).inteligencia);
  printf("  8. Sabedoria: %d\n", (*personagem).sabedoria);
  printf("  9. Destreza: %d\n", (*personagem).destreza);
  printf("  10. Constituição: %d\n", (*personagem).constituicao);
  printf("  11. Carisma: %d\n", (*personagem).carisma);
}


void liberar(Personagem* personagem){
  free(personagem);
}