//
//  Pesquisa_arrays.c
//  Implementacoes_AlgC
//
//  Created by André Vieira on 11/12/11.
//  Copyright (c) 2011 University of minho. All rights reserved.
//
#include "HeaderFile_Pesquisa_arrays.h"
#include <stdio.h>

int search(int A[], int N, int x){
    int i=0, found=0;
    
    while(i<N && !found){
        if(A[i]==x) found = 1;
        i++;
    }
    
    if(!found) return (-1);
    return i-1;
}

int lsearch(int A[], int N, int x){
    int i;
    
    while ((i<N)&&(A[i]<x)) {
        i++;
    }
    
    if ((i<N)&&(A[i]==x)) {
        return i;
    }else{
        return (-1);
    }
}
