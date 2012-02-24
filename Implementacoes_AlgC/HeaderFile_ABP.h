//
//  HeaderFile_ABP.h
//  Implementacoes_AlgC
//
//  Created by André Vieira on 07/12/11.
//  Copyright (c) 2011 University of minho. All rights reserved.
//

#ifndef Implementacoes_AlgC_HeaderFile_ABP_h
#define Implementacoes_AlgC_HeaderFile_ABP_h

typedef struct nodoABP{
    int valor; //conteudo a colocar num nodo da árvore. Poderá ser mesmo uma estrutura.
    struct nodoABP *esq, *dir;
}*ABP, NodoABP;

ABP initABP(ABP arv);                     //inicia uma nova árvore.
ABP inserir_ordenado(ABP arv, int val); //insere um valor na árvore de forma ordenada (binária de procura).
int maior(int a, int b);
int altura(ABP arv);                    //retorna a altura de uma árvore.
ABP extractMin(ABP arv, int*val);       //extrai o nodo com valor mais baixo, guarda o valor removido em val e retorna a nova árvore.
int sum(ABP arv, int *val);             //faz o somatório dos valores que estão na árvore, guardando o valor em val, e retornando 0 ou (-1)
int exists(ABP arv, int x);             //se existe x na arvore... Melhor caso (x na raiz) -> TETA(1) pior caso(como lista ligada)-> TETA(N)

#endif
