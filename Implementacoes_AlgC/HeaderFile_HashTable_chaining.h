//
//  HeaderFile_HashTable_chaining.h
//  Implementacoes_AlgC
//
//  Created by André Vieira on 20/12/11.
//  Copyright (c) 2011 University of minho. All rights reserved.
//

#ifndef Implementacoes_AlgC_HeaderFile_HashTable_chaining_h
#define Implementacoes_AlgC_HeaderFile_HashTable_chaining_h

#define HASHSIZE 31 // número primo
#define TRUE    1
#define FALSE   -1

typedef char * KeyType;

typedef int Info;

typedef struct entry {
    KeyType  key;
    Info info;
    struct entry *next;
}Entry;

typedef Entry *HashTable[HASHSIZE];


// função de hash 
int hash(KeyType k);
// inicializa a tabela de hash
void initializeTable(HashTable);
// limpa a tabela de hash
void clearTable(HashTable);
// insere uma nova associação entre uma chave nova e a restante informação 
void insertTable(HashTable, KeyType, Info);
// apaga o elemento de chave k da tabela
int deleteTable(HashTable t, KeyType k);
// procura na tabela o elemento de chave k, e retorna o apontador
// para a célula aonde a chave se encontra (ou NULL caso k não exista) 
Entry *retrieveTable(HashTable, KeyType);



//TESTES 

//HashTable tabela;
//initializeTable(tabela);
//
//char a[33][30]={"Abdul","Carle","wick","Chaim","Cain","Dean","Jelani","Richard","William","Noah","Dorian","Boris","Graham","Xavier","James","Griffin","Warren","Chadwick","Ferdinand","Martin","Ferdinand","Zeus","Beau","Myles","Quamar","Uriah","Thor","Bruno","Francis","Lyle","Marshall","experiencia_overflow1","experiencia_overflow2"};
//
//
//for(int i=0;i<32;i++){
//    insertTable(tabela, a[i], i);
//}
//
//Entry * aux = NULL;
//
//for(int i=0;i<HASHSIZE;i++){
//    printf("\n|%d|key ", i);
//    for (aux = tabela[i]; aux!=NULL; aux=aux->next) {
//        printf(" -> |%s,%d|", aux->key,aux->info);
//    }
//}
//printf("apagar Chadwick-> ENTER");
//getchar();
//
//deleteTable(tabela, "Chadwick");
//
//for(int i=0;i<HASHSIZE;i++){
//    printf("\n|%d|key-> |%s|", i,tabela[i]->key);
//    for (aux = tabela[i]->next; aux!=NULL; aux=aux->next) {
//        printf("  -> |%s|", aux->key);
//    }
//}

#endif
