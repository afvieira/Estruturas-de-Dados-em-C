//
//  Ordenacao_arrays.c
//  Implementacoes_AlgC
//
//  Created by André Vieira on 07/12/11.
//  Copyright (c) 2011 University of minho. All rights reserved.
//

#include "HeaderFile_Ordenacao_arrays.h"
#include <stdio.h>

void bubble_sort(int A[], int N){
    int i,j;
    
    for (i=N-2; i>=0; i--) 
        for (j=0; j<=i; j++) 
            if (A[j] > A[j+1]) {
                swap(&A[j], &A[j+1]);
            }
}

void qSort(int A[], int N){
    qSortAux(A, 0, N-1);
}

void qSortAux(int A[], int a, int b){
    int p=0;
    if(a<b){
        p=particao(A, a, b);
        qSortAux(A, a, p-1);
        qSortAux(A, p+1, b);
    }
}

int particao(int A[], int a, int b){
    int i=a, j=i;
    
    while (j<b) {
        if (A[j]>=A[b])
            j++;
        else{
            swap(&A[j], &A[i]);
            i++;
            j++;
        }
    }
    swap(&A[j], &A[i]);
    return i;
}


void maxSort(int A[], int N){
    if(N<=1) return;
    int i = pos_max(A, N); // TETA(N)
    swap(&A[i], &A[N-1]);
    maxSort(A, N-1);
    
}

int pos_max(int v[], int n){
    int j, x,pos=0;
    x = v[0];
    for (j = 1; j < n; j += 1){
        if (x < v[j]){
            x = v[j];
            pos = j;   
        }
    }
    return pos;
}

void swap(int *a, int*b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}



/*TESTAR
int n,i,opt;  

printf("\nEnter integer value for total no.s of elements to be sorted: ");  
scanf("%d",&n);
int a[n];

for( i=0;i<n;i++){ 
    printf("Enter integer value for element no.%d : ",i+1);  
    //a[i]=j;
    scanf("%d",&a[i]);  
}

printf("\nChoose Algorithm: ");  
printf("\n1-> Bubble Sort");  
printf("\n2-> Quick Sort");  
printf("\n3-> Max Sort");  
printf("\nChoice: ");  
scanf("%d",&opt);

switch (opt) {
    case 1:
        printf("\nPrimary array is: \t\t");  
        for( i=0;i<=n-1;i++)  
            printf("%3d|",a[i]); 
            
            bubble_sort(a,n);  
            
            printf("\nFinally sorted array is:");  
            for( i=0;i<=n-1;i++)  
                printf("%3d|",a[i]); 
                printf("\n");
                
                break;
        
    case 2:
        
        printf("\nPrimary array is: \t\t");  
        for( i=0;i<=n-1;i++)  
            printf("%3d|",a[i]); 
            
            qSort(a,n);  
            
            printf("\nFinally sorted array is:");  
            for( i=0;i<=n-1;i++)  
                printf("%3d|",a[i]); 
                printf("\n");
                
                break;
        
    case 3:
        
        printf("\nPrimary array is: \t\t");  
        for( i=0;i<=n-1;i++)  
            printf("%3d|",a[i]); 
            
            maxSort(a,n);  
            
            printf("\nFinally sorted array is:");  
            for( i=0;i<=n-1;i++)  
                printf("%3d|",a[i]); 
                printf("\n");
                
                break;
        
    default:
        break;
}*/