//
//  HashTable_chaining.c
//  Implementacoes_AlgC
//
//  Created by André Vieira on 20/12/11.
//  Copyright (c) 2011 University of minho. All rights reserved.
//
#include "HeaderFile_HashTable_chaining.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int hash(KeyType k){
    int hash = 0;
        
    while((*k)){
        hash += (int) (*k);
        k++;
    }
    return hash % HASHSIZE;
}

void initializeTable(HashTable t){
    for (int i=0; i<HASHSIZE; i++) {
        t[i] = (Entry*)malloc(sizeof(struct entry));
    }
}

void clearTable(HashTable t){
    initializeTable(t);
}

void insertTable(HashTable t, KeyType k, Info inf){
    int i = hash(k);
    Entry * new = (Entry *)malloc(sizeof(Entry));
    
    //strncpy(new->key, k, 9);
    new->key = k;
    new->info = inf;
    new->next = t[i];
    t[i] = new;
    
}


int deleteTable(HashTable t, KeyType k){
    int i = hash(k);
    Entry *aux2, * aux = t[i];
    
    if (t[i] == NULL) return FALSE;
    if (strncmp(t[i]->key,k,9)==0){
        t[i] = aux->next;
        free(aux);
        return TRUE;
    }
        
    while((aux->next!=NULL)&&(strncmp(aux->next->key,k,9)!=0)){
        aux = aux->next;
    }
        
    if(aux->next != NULL){
        aux2 = aux->next;
        aux->next = aux2->next;
        free(aux2);
        return TRUE;
    }
    return FALSE;
}
        


//Entry *RetrieveTable(HashTable t, KeyType k){}