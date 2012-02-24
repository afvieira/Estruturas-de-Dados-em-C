//
//  HeaderFile_Ordenacao_arrays.h
//  Implementacoes_AlgC
//
//  Created by André Vieira on 07/12/11.
//  Copyright (c) 2011 University of minho. All rights reserved.
//

#ifndef Implementacoes_AlgC_HeaderFile_Ordenacao_arrays_h
#define Implementacoes_AlgC_HeaderFile_Ordenacao_arrays_h

void bubble_sort(int A[], int N);   //no pior caso faz N^2 comparações, logo TETA(N^2) 
void qSort(int A[], int N);         //pior caso -> TETA(N^2)        melhor caso -> TETA(NlogN)
void qSortAux(int A[], int a, int b);
int particao(int A[], int a, int b);
void maxSort(int A[], int N);
int pos_max(int A[], int N);
void swap(int *a, int*b);

#endif
