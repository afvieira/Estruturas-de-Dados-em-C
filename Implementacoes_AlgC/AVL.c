//
//  AVL.c
//  Implementacoes_AlgC
//
//  Created by André Vieira on 07/12/11.
//  Copyright (c) 2011 University of minho. All rights reserved.
//

#include "HeaderFile_AVL.h"
#include <stdio.h>
#include <stdlib.h>

AVL insere(AVL a, int x){
    int y;
    return insereAVL(a, x, &y);
}

AVL insereAVL(AVL a, int x, int *aum){
    if (!a) {
        a=(AVL)malloc(sizeof(NodoAVL));
        a->valor = x;
        a->dir = NULL;
        a->esq = NULL;
        a->bal = B;
        *aum = 1;
    }
    else{
        if (a->valor>x) {
            a = insereESQ(a, x, aum);
        }
        else
            a = insereDIR(a, x, aum);
    }
    return a;
}

AVL insereESQ(AVL a, int x, int *aum){
    a->esq = insereAVL(a, x, aum);
    if (*aum) {
        if (a->bal == D) {
            a->bal = B;
            *aum = 0;
        }
        else{
            if (a->bal == B) {
                a->bal = E;
                *aum = 1;
            }
            else{
                a=corrigeBAL_E(a);
                *aum = 0;
            }
        }
    }
    return a;
}

AVL corrigeBAL_E(AVL a){
    AVL b,c;
    
    b=a->esq;
    if (b->bal == E) {
        a->esq = b->dir;
        b->dir = a;
        b->bal = a->bal = B;
        a=b;
    }
    else{
        c=b->dir;
        b->dir = c->esq;
        a->esq = c->dir;
        c->esq = b;
        c->dir = a;
        
        switch (c->bal) {
            case E:
                b->bal = B;
                a->bal = D;
                break;
            case B:
                b->bal = a->bal = B;
                break;
            case D:
                b->bal = E;
                a->bal = B;
                
            default:
                break;
        }
        a=c;
        c->bal = B;
    }
    return a;
}

AVL insereDIR(AVL a, int x, int *aum){
    a->dir = insereAVL(a->dir, x, aum);
    if (*aum) {
        if (a->bal == E) {
            a->bal = B;
            *aum = 0;
        }
        else{
            if (a->bal == B) {
                a->bal = D;
                *aum = 1;
            }
            else{
                a = corrigeBAL_D(a);
                *aum = 0;
            }
        }
    }
    return a;
}

AVL corrigeBAL_D(AVL a){
    AVL b,c;
    b = a->dir;
    if (b->bal == D) {
        a->dir = b->esq;
        b->esq = a;
        b->bal = a->bal = B;
        a=b;
    }
    else{
        c = b->esq;
        b->esq = c->dir;
        a->dir = c->esq;
        c->dir = b;
        c->esq = a;
        switch (c->bal) {
            case D:
                b->bal = B;
                a->bal = E;
                break;
            case B:
                b->bal = a->bal = B;
                break;
            case E:
                b->bal = D;
                a->bal = B;
                break;
        }
        a = c;
        c->bal = B;
    }
    return a;
}

void pre_order(AVL a){
    
    if (a == NULL) return;
    
    printf("%d -> ", a->valor);
    pre_order(a->esq);
    pre_order(a->dir);
}

void in_order(AVL a){
    
    if (a == NULL) return;

    in_order(a->esq);
    printf("%d -> ", a->valor);
    in_order(a->dir);
}

void post_order(AVL a){
    
    if (a == NULL) return;
    
    post_order(a->esq);
    post_order(a->dir);
    printf("%d -> ", a->valor);
    
}


