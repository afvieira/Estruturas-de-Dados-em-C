//
//  HeaderFile_Grafos.h
//  Implementacoes_AlgC
//
//  Created by André Vieira on 07/12/11.
//  Copyright (c) 2011 University of minho. All rights reserved.
//

#ifndef Implementacoes_AlgC_HeaderFile_Grafos_h
#define Implementacoes_AlgC_HeaderFile_Grafos_h

#define MaxV 10
#define MaxE 15

typedef struct edge{
    int dest;
    int cost;
    struct edge * next;
}Edge;

typedef Edge * Graph[MaxV];

void initGraph(Graph g);
void addEdge(Graph g, int source, int dest, int cost);

#endif
