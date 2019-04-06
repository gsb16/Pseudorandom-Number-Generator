// ATENCAO: ESTE ARQUIVO NAO DEVE SER ALTERADO!

#ifndef __LCRANDOM__
#define __LCRANDOM__

// calcula e devolve um valor pseudoaleatório
long lcrandom () ;

// define o valor inicial (semente) da sequência de aleatórios
// (inicialmente zero (0) por default
void lcrandom_seed (long s) ;

// informa o valor máximo que pode ser gerado (o mínimo é sempre zero)
long lcrandom_max () ;

// modifica os parâmetros da equação do gerador; por default
// devem ser usados: A=40692, C=127 e M=10000000
void lcrandom_parms (long A, long C, long M) ;

#endif
