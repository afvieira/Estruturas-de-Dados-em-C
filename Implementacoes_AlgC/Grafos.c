//
//  Grafos.c
//  Implementacoes_AlgC
//
//  Created by André Vieira on 07/12/11.
//  Copyright (c) 2011 University of minho. All rights reserved.
//

#include "HeaderFile_Grafos.h"
#include <stdio.h>



void initGraph(Graph g){
    for (int i=0; i<MaxV; i++) {
        g[i]=(Entry)malloc(sizeof(struct edge));
    }
}


void addEdge(Graph g, int source, int dest, int cost){
    Edge * new = (Edge*)malloc(sizeof(struct edge));
    
    new->dest = dest;
    new->cost = cost;
    new->next = g[source];
    g[source] = new;
}


