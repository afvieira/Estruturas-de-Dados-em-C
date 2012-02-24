////
////  HashTable.c
////  Implementacoes_AlgC
////
////  Created by André Vieira on 07/12/11.
////  Copyright (c) 2011 University of minho. All rights reserved.
////
//
//#include "HeaderFile_HashTable.h"
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int hash_int(int k){
//    return(k%HSIZE);
//}
//
//int hash_str(char *str){
//    int len,i, val=0;
//    
//    len = (int)strlen(str);
//    
//    for (i=0; i<len; i++) {
//        val+=(int)str[i];
//    }
//    
//    val %= HSIZE;
//    
//    return val;
//}
//
//int hash_str2(char * key){//equivalente à hash_str(char *str)
//    
//    int hash = 0;
//    
//    while((*key)){
//    	hash += (int) (*key);
//    	key++;
//    }
//    
//    return hash % HSIZE;
//}
//
//void initTHASH(HashTable t){
//
//    for (int i=0; i<HSIZE; i++) {
//        t[i].key = EMPTY; 
//    }
//}
//
//int ocupacao(HashTable t){
//    int i=0;
//    
//    while ((i<HSIZE)&&((strncmp(t[i].key, EMPTY, 9))||(strncmp(t[i].key, DELETED, 9)))) {
//        i++;
//    }
//    
//    return i;
//}
//
//int insere_op(HashTable t, KeyType k, INFO inf){
//    int i,p=1;
//    
//    i = hash_str(k);//hash_int(k);
//    
//    while ((p<=HSIZE)&&(strncmp(t[i].key, EMPTY, 9))&&(strncmp(t[i].key, DELETED, 9))) {
//        if (strncmp(t[i].key, k, 9)==0) {
//            t[i].info = inf;
//            return TRUE;
//        }
//        i=(i+1)%HSIZE;  //linear probing -> compara um a um percorrendo a hash um a um. Quadratic probing percorre ao quadrado ?? 
//        p++;
//    }    
//    
//    if (p<=HSIZE) {
//        t[i].key = k;
//        t[i].info = inf;
//        return TRUE;
//    }
//    return FALSE;
//}
//
//int search_op(HashTable t, KeyType k, int *pos){
//    int i, j=0;
//    i=hash_str(k);
//    
//    while ((j<HSIZE)&&(strncmp(t[i].key,k,25)!=0)) { //se a chave for do tipo string usar strncmp(str,str,int)
//        j++;
//        i=(i+1)%HSIZE;
//    }
//    
//    if (j<HSIZE){
//        *pos=i;
//        return TRUE;
//    }
//    else
//        return FALSE;
//}
//
//void printHash_op_Key_int(HashTable t){
///*    int i;
//    
//    printf("\n|indice\t|Key\t|\n");
//    for(i=0;i<HSIZE;i++){
//        if(i>9)
//            printf("\n|%d\t\t|",i);
//        else
//            printf("\n|%d\t\t|",i);
//        if (t->HashTable[i].key_int<10) {
//            printf(" %d\t\t|",t->HashTable[i].key_int);
//        }else
//        printf(" %d\t|",t->HashTable[i].key_int);
//    }
//    
//    printf("\n\n");
//    
//*/}
//
//void printHash_op_Key_str(HashTable t){
//    int i;
//    
//    printf("\n---------------------------------------------\n");
//    printf("*********************************************\n");
//    printf("\nPRINT DA TABELA\n\n|indice\t|Key\t\t|\n");
//    for(i=0;i<HSIZE;i++)
//        printf("\n|%d\t\t| %s\t\t",i,t[i].key);
//    printf("\n\n*********************************************");
//    printf("\n---------------------------------------------\n");
//
//}
//
//void printOcupacao_op(HashTable t){
//    printf("\n---------------------------------------------\n");
//    printf("*********************************************\n");
//    printf("\nOcupação/HSIZE  = Percentagem de Ocupação\n");   
//    int qt=0;
//    for (int i; i<HSIZE; i++) {
//        if (t[i].key!=EMPTY || t[i].key !=DELETED) {
//            qt++;
//        }
//    }
//    printf("\n%d\t\t/%d \t= %.2f",qt,HSIZE,(float)qt/HSIZE);
//    printf("\n\n*********************************************");
//    printf("\n---------------------------------------------\n");
//
//}
//
//
//
///*int insereHash(char * key, THASH t, void * info){
//    
//    int i = hash_str(key);
//    
//    nodoh a, novo;
//    
//    if(!(novo = (nodoh)malloc(sizeof(struct Nodoh))))
//        return 1;
//    
//    a = t[i];
//    
//    t[i] = novo;
//    
//    novo->key = key;
//    novo->info = info;
//    novo->next = a;
//    
//    return 0;
//    
//}
//
//void * removeHash(char * key, THASH t){
//    
//    int i = hash(key);
//    void * info;
//    
//    nodoh a, ant;
//    
//    for(a = t[i], ant = NULL; a && key != a->key; ant = a, a = a->next) ;
//    
//    if(!a)
//        return NULL;
//    
//    if(!ant)
//        t[i] = a->next;
//    
//    else ant->next = a->next;
//    
//    info = a->info;
//    
//    free(a);
//    
//    return info;
//}
//
//void * consultaHash(char * key, THASH t){
//    
//    int i = hash(key);
//    nodoh a;
//    
//    for(a = t[i]; a && strcmp(a->key, key); a = a->next) ;
//    
//    if(!a) return NULL;
//    
//    return a->info;
//    
//}*/
//
//
//
//
//
//
//
//
//
