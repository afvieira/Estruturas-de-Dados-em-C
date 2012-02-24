//
//  Outros.c
//  Implementacoes_AlgC
//
//  Created by André Vieira on 11/12/11.
//  Copyright (c) 2011 University of minho. All rights reserved.
//
#include "HeaderFile_Outros.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mdc(int x, int y){
    while (x!=y) {
        if (x>y) {
            x=x-y;
        }else{
            y=y-x;
        }
    }
    return x;
}


void Hanoi(int nDiscos, int esq, int dir, int meio){
    if(nDiscos>0){
        Hanoi(nDiscos-1, esq, meio, dir);
        printf("Move %d\t%d\n", esq, dir);
        Hanoi(nDiscos-1, meio, dir, esq);
    }
}

int fib(int n){
    if(n==0||n==1)  return 1;
    return (fib(n-1)+fib(n-2));
}

int fib_iter(int n){
    if(n<=1) return 1;
    int i, f1, f2, aux;
    f1=1; f2=1; i=2;
    while (i<=n) {
        aux=f1;
        f1=f1+f2;
        f2=aux;
        i++;
    }
    return f1;
}
    
    
    
char * rand_str(int size)
{
    char * str;
    char * text = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int i;
    for ( i = 0; i < size; i++ )
    {
        str[i] = text[rand() % n_char(text)];
    }
    str[i] = '\0';
    return str;
}

int n_char(char *str){
    int i =0;
    while (str[i]!='\0') {
        i++;
    }
    return i;
}
    
    
    
int verifica_primos_epc(int numero){  
    int numero_verificador;    //numero que agira como contador. Ira de 1 até o numero a ser pesquisado  
    int ehPrimo = 1;               //variavel que recebera a soma dos multiplos  
    
    /*Vamos inicializar a variavel aqui para que ela nao continue somando os */  
    /*    multiplos ao verificar outro numero */  
    for (numero_verificador = 2; numero_verificador < numero; numero_verificador++){  
        if ((numero % numero_verificador) == 0){  
            ehPrimo = 0;  
        }  
    }  
    
    return ehPrimo;  
}  
    
    
    
    







