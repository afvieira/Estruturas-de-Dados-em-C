////
////  HeaderFile_HashTable.h
////  Implementacoes_AlgC
////
////  Created by André Vieira on 07/12/11.
////  Copyright (c) 2011 University of minho. All rights reserved.
////
//
//#ifndef Implementacoes_AlgC_HeaderFile_HashTable_h
//#define Implementacoes_AlgC_HeaderFile_HashTable_h
//
//#define TRUE 1
//#define FALSE -1
//
//#define HSIZE 31        //comentario sobre qual deve ser o tamanho da hashtable, número primo por razoes de melhor ocupação (mais uniforme).
//
//#define EMPTY " "
//#define DELETED "-"       //serve p/ dizer que se pode fazer inserção nesse slot, mas não é motivo para caso de paragem em pesquisas.(open adressing)
//
////typedef int KEY_int;      //a key difere consoante o problema! neste caso é inteiro, mas pode ser de outro tipo qualquer.
//typedef char * KeyType;
//
//typedef void * INFO;    //INFO pode ser de qualquer tipo, mesmo até uma estrutura! é o conteúdo de cada slot
//
//typedef struct entry{
//    KeyType key;
//    INFO info;
//}ENTRY;
//
//typedef ENTRY HashTable[HSIZE];
//
//int hash_int(int k);
//int hash_str(char *str);
//int hash_str2(char * key);
//void initTHASH(HashTable t);
//int ocupacao(HashTable t);
//
//
////OPEN ADRESSING
//int insere_op(HashTable t, KeyType k, INFO inf);
//int search_op(HashTable t, KeyType k, int *pos);
//void printHash_op_Key_int(HashTable t);
//void printHash_op_Key_str(HashTable t);
//void printOcupacao_op(HashTable t);
//
//
////CHAINING
////int insere_ch(THASH t, /*KEY_int*/KEY_str k, INFO inf);    //insere informação num slot da hash vazio.
////int search_ch(THASH t, /*KEY_int*/KEY_str k, int *pos);    //procura e retorna a posicao da hash caso encontre, retorna (-1) caso contrário.
////void printHash_ch(THASH t);
////int insereHash(char * key, THASH t, void * info);
////void * removeHash(char * key, THASH t);
////void * consultaHash(char * key, THASH t);
//
//
//
//#endif
//
//
//
////TESTES OPEN ADRESSING com KEY_int
//
///*
//THASH tabela = NULL;
//tabela = initTHASH(tabela);
//
//int r,a,pos;
//
//for (int i=0; i<HSIZE; i++) {
//    r = rand()%HSIZE;
//    insere_op(tabela, r , NULL);
//}
//
//printHash_op(tabela);
//
//for (int i=0; i<HSIZE; i++) {
//    r = rand()%HSIZE;
//    a = search_op(tabela, r, &pos);
//    
//    if (search_op(tabela, r, &pos)==1) {
//        printf("\n|%d\t| esta na posição -> %d",r,pos);
//    }
//    else
//        printf("\n|%d\t| inexistente -> %d",r,a);
//        }
//
//return 0;
//*/
//
//
//
////TESTES OPEN ADRESSING com KEY_str
///*
//HashTable tabela;
//initTHASH(tabela);
//int i;
//char a[33][30]={"Abdul","Carle","wick","Chaim","Cain","Dean","Jelani","Richard","William","Noah","Dorian","Boris","Graham","Xavier","James","Griffin","Warren","Chadwick","Ferdinand","Martin","Ferdinand","Zeus","Beau","Myles","Quamar","Uriah","Thor","Bruno","Francis","Lyle","Marshall","experiencia_overflow1","experiencia_overflow2"};
//
//for (i=0; i<HSIZE; i++) {
//    insere_op(tabela, a[i] , NULL);
//}
////printOcupacao_op(tabela);
//
////inserções mal sucedidas devido à hash estar completa
////printf("\n\nexperiências mal sucedidas:\n");
//insere_op(tabela, a[i] , NULL);
//insere_op(tabela, a[i+1] , NULL);
//
//printHash_op_Key_str(tabela);
//
//int res,pos;
//for (i=0; i<HSIZE+2; i++) { //+2 -> para pesquisar as ultimas 2 palavras do array que nao podem estar disponiveis na hash
//    res=search_op(tabela, a[i], &pos);
//    if (res==1) {
//        printf("\n|%s\t\t| esta na posição -> %d",a[i],pos);
//    }
//    else
//        printf("\n|%s\t| inexistente -> %d",a[i],res);
//        }
//printf("\n\n%d\n",ocupacao(tabela));
//
//*/
//
//
//
