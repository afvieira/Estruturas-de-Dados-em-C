//
//  ABP.c
//  Implementacoes_AlgC
//
//  Created by André Vieira on 07/12/11.
//  Copyright (c) 2011 University of minho. All rights reserved.
//

#include "HeaderFile_ABP.h"
#include <stdio.h>
#include <stdlib.h>

ABP initABP(ABP a){
    a = NULL;
    return a;
}

ABP inserir_ordenado(ABP a, int val){
    
    if(a==NULL){
        ABP aux = (ABP)malloc(sizeof(NodoABP));
        
        aux->esq = NULL;
        aux->dir = NULL;
        aux->valor = val;
        
        return aux;

    }
    if(a->valor < val) 
        inserir_ordenado(a->dir, val);
    else
        inserir_ordenado(a->esq, val);
    
    return a;
}

int maior(int a, int b){
    if(a > b)
        return a;
    else
        return b;
}



int altura(ABP a){
    if((a == NULL) || (a->esq == NULL && a->dir == NULL))
        return 0;
    else
        return 1 + maior(altura(a->esq), altura(a->dir));
}

ABP extractMin(ABP arv, int *val){
    ABP aux;
    
    if (!arv) {
        return NULL;
    }
    
    if (!arv->esq) {
        *val = arv->valor;
        aux = arv->dir;
        free(arv);
        return aux;
    }
    else{
        arv->esq = extractMin(arv->esq, val);
        return arv;
    }
}

int sum(ABP arv, int *val){
    if (!arv) {
        return (-1);
    }
    
    int res, e, d;
    
    res = sum(arv->esq, &e);
    res = sum(arv->dir, &d);
    
    *val = arv->valor + e + d;
    return 0;
}

int exists(ABP arv, int x){
    if(!arv) return 0;
    if(arv->valor == x)
        return 1;
    if (arv->valor < x)
        return exists(arv->dir, x);
    return exists(arv->esq, x);
}


