/* 
   Header file : 'dicionario.h'
   Escrito por : Allan Cedric G.B. Alves da Silva, desde 12/03/2020
   Profile : Aluno de graduação do curso de Ciência da Computação (UFPR)
   GRR : 20190351
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
   Estrutura de dados p/ alocar o dicionário
*/
struct dicio_t
{
   char **palavra ;
   int tam_dicio ; /* Número de palavras */
   int tam_aloc ;  /* Quantidade de alocações */
} ;
typedef struct dicio_t dicio_t ;

/*
   Protótipos de funções de alocação do dicionário
*/
void carrega_dicionario (FILE *arq, dicio_t *d) ;

void *aloca_dicionario (dicio_t *d) ;

void *realoca_dicionario (dicio_t *d) ;

void aloca_caracteres (dicio_t *d, int ini) ;

void desaloca_dicionario (dicio_t *d) ;

/*
  Função teste de impressão
*/
void impressao_dicionario (dicio_t *d) ;
