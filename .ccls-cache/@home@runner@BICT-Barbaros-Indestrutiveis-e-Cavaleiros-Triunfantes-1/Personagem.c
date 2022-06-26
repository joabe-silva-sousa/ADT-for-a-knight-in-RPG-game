#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Personagem.h"

Personagem* criar(int nivel, float dinheiro, int forca, int inteligencia, int sabedoria, int destreza, int constituicao, int carisma, char *classe, char *nome){
  
  Personagem* personagem;

  personagem = malloc(sizeof(Personagem));
  
  (*personagem).nivel = nivel;
  (*personagem).posicao[0][0] = 0;
  (*personagem).dinheiro = dinheiro;
  (*personagem).forca = forca;
  (*personagem).inteligencia = inteligencia;
  (*personagem).sabedoria = sabedoria;
  (*personagem).destreza = destreza;
  (*personagem).constituicao = constituicao;
  (*personagem).carisma = carisma;
  (*personagem).classe = classe;
  (*personagem).nome = nome;

  return personagem;
}

void aumentar_nivel(Personagem* personagem, int valor){
  printf("__________________________\n");
  printf("Aumentar nível de %s\n", (*personagem).nome);
  printf("Nível anterior: %d\n", (*personagem).nivel);
  (*personagem).nivel += valor;
  printf("Nível atual: %d\n", (*personagem).nivel);
}

void qtde_dinheiro(Personagem* personagem, float valor){
  printf("__________________________\n");
  printf("Definir quantidade de dinheiro\n", (*personagem).nome);
  printf("Quantia anterior: %.2f\n", (*personagem).dinheiro);
  (*personagem).dinheiro += valor;
  printf("Nova quantidade: %.2f\n", (*personagem).dinheiro);
}

void consultar_atributo(Personagem* personagem, int valor){
  if (valor == 1){
    printf("Nome: %s\n", (*personagem).nome);
  }
  if (valor == 2){
    printf("Classe: %s\n", (*personagem).classe);
  }
  if (valor == 3){
    printf("Nível: %d\n", (*personagem).nivel);
  }
  if (valor == 4){
    printf("4. Posicão: %d\n", (*personagem).posicao[0][0]);
  }
  if (valor == 5){
    printf("Dinheiro: T$ %.2f\n", (*personagem).dinheiro);
  }
  if (valor == 6){
    printf("Força: %d\n", (*personagem).forca);
  }
  if (valor == 7){
    printf("Inteligência: %d\n", (*personagem).inteligencia);
  }
  if (valor == 8){
    printf("Sabedoria: %d\n", (*personagem).sabedoria);
  }
  if (valor == 9){
    printf("Destreza: %d\n", (*personagem).destreza);
  }
  if (valor == 10){
    printf("Constituição: %d\n", (*personagem).constituicao);
  }
  if (valor == 11){
    printf("Carisma: %d\n", (*personagem).carisma);
  }
}
    

void consultar_todos_atributos(Personagem* personagem){
  
  printf("__________________________\n");
  printf("Atributos de %s\n", (*personagem).nome);
  printf("1. Nome: %s\n", (*personagem).nome);
  printf("2. Classe: %s\n", (*personagem).classe);
  printf("3. Nível: %d\n", (*personagem).nivel);
  printf("4. Posicão: %d\n", (*personagem).posicao[0][0]);
  printf("5. Dinheiro: T$ %.2f\n", (*personagem).dinheiro);
  printf("6. Força: %d\n", (*personagem).forca);
  printf("7. Inteligência: %d\n", (*personagem).inteligencia);
  printf("8. Sabedoria: %d\n", (*personagem).sabedoria);
  printf("9. Destreza: %d\n", (*personagem).destreza);
  printf("10. Constituição: %d\n", (*personagem).constituicao);
  printf("11. Carisma: %d\n", (*personagem).carisma);
}


void liberar(Personagem* personagem){
  free(personagem);
}