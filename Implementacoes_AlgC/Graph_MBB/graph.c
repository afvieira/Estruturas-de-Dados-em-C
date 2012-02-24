//#include "graph.h"
//#include <stdlib.h>
//#include <stdio.h>
//
//GraphAT *createAT(int nodes) {
//	int i,j;
//	GraphAT* g = (GraphAT*)malloc(sizeof(GraphAT));
//	g->nodes = nodes;
//	for(i=0;i<nodes;i++)
//		for(j=0;j<nodes;j++)
//			g->adj_table[i][j]=0;
//	return g;
//}
//
//int addEdgeAT(GraphAT *g, int source, int dest, int weight) {
//	if (g && (source<g->nodes) && (source>=0) && (dest<g->nodes) && (dest>=0)) {
//		g->adj_table[source][dest]=weight;
//		return 0;
//	}
//	else return(-1);
//}
//
//int getWeightAT(GraphAT *g, int source, int dest, int *weight){
//	if (g && (source<g->nodes) && (source>=0) && (dest<g->nodes) && (dest>=0)) {
//		if (g->adj_table[source][dest] == 0) return (-1);
//		*weight=g->adj_table[source][dest];
//		return 0;
//	}
//	else return(-1);
//}
//
//GraphAV *createAV(int nodes) {
//	int i;
//	GraphAV* g = (GraphAV*)malloc(sizeof(GraphAV));
//	g->nodes = nodes;
//	for(i=0;i<=nodes;i++)         
//			g->list_index[i]=0;	
//	return g;
//}
//
//int addEdgeAV(GraphAV *g, int source, int dest, int weight) {
//	int i,lstart,lend;
//	if (g && (source<g->nodes) && (source>=0) && (dest<g->nodes) && (dest>=0)) {
//		lstart = g->list_index[source];
//		lend = g->list_index[source+1];
//		for (i=lstart;i<lend;i++) {
//			if (g->adj_lists[i]==dest) {
//				g->adj_weights[i]=weight;
//				return 0;
//			}
//		}
//		for (i=g->list_index[g->nodes]; i>lend; i--) {
//			g->adj_lists[i]=g->adj_lists[i-1];
//			g->adj_weights[i]=g->adj_weights[i-1];
//		}
//		g->adj_lists[i]=dest;
//		g->adj_weights[i]=weight;
//		for (i=g->nodes; i>source; i--) {
//			g->list_index[i]++;
//		}
//		return 0;
//	}
//	else return(-1);
//}
//
//int getWeightAV(GraphAV *g, int source, int dest, int *weight) {
//	int i,lstart,lend;
//	if (g && (source<g->nodes) && (source>=0) && (dest<g->nodes) && (dest>=0)) {
//		lstart = g->list_index[source];
//		lend = g->list_index[source+1];
//		for (i=lstart;i<lend;i++) {
//			if (g->adj_lists[i]==dest) {
//				*weight=g->adj_weights[i];
//				return 0;
//			}
//		}
//		return (-1);
//	}
//	else return(-1);
//}
//
//GraphAL *createAL(int nodes) {
//	int i;
//	GraphAL* g = (GraphAL*)malloc(sizeof(GraphAL));
//	g->nodes = nodes;
//	for(i=0;i<nodes;i++)
//		g->adj_lists[i]=NULL;
//	return g;
//}
//
//int addEdgeAL(GraphAL *g, int source, int dest, int weight) {
//	Edge* new;
//	if (g && (source<g->nodes) && (source>=0) && (dest<g->nodes) && (dest>=0)) {
//		new = (Edge*)malloc(sizeof(Edge));
//		if (!new) return (-1);
//		new->dest=dest;
//		new->weight=weight;
//		new->next=g->adj_lists[source];
//		g->adj_lists[source]=new;
//		return 0;
//	}
//	else return(-1);
//}
//
//int getWeightAL(GraphAL *g, int source, int dest, int *weight) {
//	Edge* aux;
//	if (g && (source<g->nodes) && (source>=0) && (dest<g->nodes) && (dest>=0)) {
//		aux = g->adj_lists[source];
//		while (aux) {
//			if (aux->dest==dest) {
//				*weight=aux->weight;
//				return 0;
//			}
//			aux=aux->next;
//		}
//		return (-1);
//	}
//	else return(-1);
//}
//
//GraphAL* convertAVtoAL(GraphAV *g) {
//	int i,j,lstart,lend;
//	GraphAL* gnew = createAL(g->nodes);
//	for(i=0;i<g->nodes;i++) {
//		lstart = g->list_index[i];
//		lend = g->list_index[i+1];	
//		for(j=lstart;j<lend;j++) {
//			addEdgeAL(gnew, i,g->adj_lists[j], g->adj_weights[j]);
//		}		
//	}
//	return gnew;
//}
//
//GraphAT* convertALtoAT(GraphAL *g) {
//	int i;
//	Edge *e;
//	GraphAT* gnew = createAT(g->nodes);
//	for(i=0;i<g->nodes;i++) {
//		e = g->adj_lists[i];
//		while(e) {
//			addEdgeAT(gnew, i,e->dest, e->weight);
//			e=e->next;
//		}
//	}
//	return gnew;
//}
//
//GraphAV* convertATtoAV(GraphAT *g) {
//	int i,j;
//	GraphAV* gnew = createAV(g->nodes);
//	for(i=0;i<g->nodes;i++) {
//		for(j=0;j<g->nodes;j++) {
//			if (g->adj_table[i][j]!=0)
//				addEdgeAV(gnew, i,j,g->adj_table[i][j]);
//		}
//	}
//	return gnew;
//}
//
