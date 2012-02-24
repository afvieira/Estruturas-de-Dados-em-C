//
//  HeaderFile.h
//  Implementacoes_AlgC
//
//  Created by André Vieira on 07/12/11.
//  Copyright (c) 2011 University of minho. All rights reserved.
//

#ifndef Implementacoes_AlgC_HeaderFile_h
#define Implementacoes_AlgC_HeaderFile_h

#define B 0
#define E 1
#define D (-1)

typedef struct nodoAVL{
    int bal; //B,E ou D
    int valor;
    struct nodoAVL *esq, *dir;
}NodoAVL, *AVL;

AVL insere(AVL a, int x);
AVL insereAVL(AVL a, int x, int *aum);
AVL insereESQ(AVL a, int x, int *aum);
AVL corrigeBAL_E(AVL a);
AVL insereDIR(AVL a, int x, int *aum);
AVL corrigeBAL_D(AVL a);

void pre_order(AVL a);
void in_order(AVL a);
void post_order(AVL a);

#endif




////TESTES
//AVL arv = NULL;
//
//arv = insere(arv, 2);
//arv = insere(arv, 3);
//arv = insere(arv, 4);
//arv = insere(arv, 5);
//arv = insere(arv, 6);
//
//printf("in-order : ");
//in_order(arv);
//printf("\npre-order : ");
//pre_order(arv);
//printf("\npost-order : ");
//post_order(arv);
