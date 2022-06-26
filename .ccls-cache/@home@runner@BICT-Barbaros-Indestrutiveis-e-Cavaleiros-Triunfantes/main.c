//Resolução da 1ª Avaliação - Questão 2 
//Discentes: Joabe da Silva Sousa, Guilherme da Silva Diniz
//Disciplina: Algoritmos e Estruturas de Dados 1
//Semestre: 2022.1

#include <stdio.h>
#include <string.h>
#include "Personagem.h"

int main(void) {

  Personagem *personagem;
  
  personagem = criar(3, 1000.0, 40, 30, 10, 20, 10, 10, "Bárbaro", "Átila", 0, 0);

  consultar_todos_atributos(personagem);
  consultar_atributo(personagem, 2);
  aumentar_nivel(personagem, 2);
  qtde_dinheiro(personagem, 300.45);
  movimentar(personagem, 12, 20);
  movimentar(personagem, 40, 100);
  
  liberar(personagem);

  return 0;
}