//
//  Ficheiros.c
//  Implementacoes_AlgC
//
//  Created by André Vieira on 23/02/12.
//  Copyright (c) 2012 University of minho. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "HeaderFile_Ficheiros.h"
#include "HeaderFile_HashTable_chaining.h"

#define LINESIZE 200


int copia_ficheiro(void){
    
    FILE * f, *f2;
    char linha[LINESIZE];
    
    if ((f = fopen("Ficheiros.txt", "r")) == NULL){
        fprintf(stderr, "Erro ao abrir ficheiro de leitura!\n");
        return (-1);
    }
    
    if ((f2 = fopen("res.txt", "a+")) == NULL){
        fprintf(stderr, "Erro ao abrir ficheiro de escrita!\n");
        fclose(f);
        return (-1);
    }
            
    while (fgets(linha, LINESIZE-1, f)!=NULL) {
        fputs(linha, f2);
    }
    
    fclose(f);
    fclose(f2);
    
    return 1;
}