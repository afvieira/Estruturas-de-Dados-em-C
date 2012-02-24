//#include <stdio.h>
//#include "graph.h"
//
//int main_ficha10 (int argc, const char * argv[]) {
//	int i;
//
//    //Build AV in Picture (vector values)
//	GraphAV* gav=createAV(6);
//	addEdgeAV(gav,0,1,2);
//	addEdgeAV(gav,0,2,1);
//	
//	addEdgeAV(gav,1,2,3);
//	addEdgeAV(gav,1,5,5);
//
//	addEdgeAV(gav,2,3,1);
//	
//	addEdgeAV(gav,3,1,4);
//	
//	addEdgeAV(gav,4,1,3);
//	addEdgeAV(gav,4,3,1);
//	addEdgeAV(gav,4,5,2);
//	
//	// check OK
//	printf("Nodes: %d\n",gav->nodes);
//	printf("List indexes:\n");
//	for(i=0; i<=gav->nodes;i++)
//		printf("%d\n",gav->list_index[i]);
//	printf("Lists:\n");
//	for(i=0; i<gav->list_index[gav->nodes];i++)
//		printf("%d, %d\n",gav->adj_lists[i], gav->adj_weights[i]);	
//	
//	// Convert cicle
//	GraphAL* gal=convertAVtoAL(gav);
//	GraphAT* gat=convertALtoAT(gal);
//	GraphAV* gav_new=convertATtoAV(gat);
//
//	// check OK again
//	printf("Nodes: %d\n",gav_new->nodes);
//	printf("List indexes:\n");
//	for(i=0; i<=gav_new->nodes;i++)
//		printf("%d\n",gav_new->list_index[i]);
//	printf("Lists:\n");
//	for(i=0; i<gav_new->list_index[gav_new->nodes];i++)
//		printf("%d, %d\n",gav_new->adj_lists[i], gav_new->adj_weights[i]);	
//	
//	return 0;
//}
//
//// Alinea 3 ficha 11 -> Versão 1 O(V + E*V)
//int treeWeightAL1(GraphAL* g, int tree[MAXNODES]) {
//	int i,tweight=0,w;
//	for (i=0;i<g->nodes;i++) {
//		if (tree[i]!= -1) {
//			if (getWeightAL(g, tree[i], i, &w) == -1) {
//				printf("Error calculating tree weight: %d\n",i);
//				return 0;
//			}
//			tweight+=w;
//		}
//	}
//	return tweight;
//}
//
//// Alinea 3 ficha 11 -> Versão 2 O(V + E)
//int treeWeightAL2(GraphAL* g, int tree[MAXNODES]) {
//	GraphAT* gat = convertALtoAT(g);
//	int i,tweight=0,w;
//	for (i=0;i<gat->nodes;i++) {
//		if (tree[i]!= -1) {
//			if (getWeightAT(gat, tree[i], i, &w) == -1) {
//				printf("Error calculating tree weight: %d\n",i);
//				return 0;
//			}
//			tweight+=w;
//		}
//	}
//	return tweight;
//}
//
//// Alinea 3 ficha 11 -> Versão 3 O(V + E)
//int depthFirstWeightAL(GraphAL* g, int tree[MAXNODES], int source, int flags[MAXNODES]) {
//	int w=0;
//	Edge* aux=g->adj_lists[source];
//	flags[source]=1;
//	while (aux) {
//		if (tree[aux->dest]==source)
//			w+=aux->weight+depthFirstWeightAL(g,tree,aux->dest,flags);
//		aux=aux->next;
//	}
//	return w;
//}
//
//int treeWeightAL3(GraphAL* g, int tree[MAXNODES]) {
//	int i,w,root=-1;
//	int flags[MAXNODES];
//	for (i=0;i<g->nodes;i++) {
//		flags[i]=0;
//		if (tree[i]==(-1))
//			root = i;
//	}
//	if (root==(-1)) {
//		printf("Error calculating tree weight\n");
//		return 0;
//	}
//	w=depthFirstWeightAL(g, tree, root,flags);
//	for (i=0;i<g->nodes;i++) {
//		if (flags[i]!=1) {
//			printf("Error calculating tree weight\n");
//			return 0;
//		}
//	}
//	return w;
//}
//
//int main_ficha11(int argc, const char * argv[]) {
//	int f[6]={-1,0,0,1,3,2}; // 0->1 (2); 0->2 (1); 1->3 (3); 3->4 (4); 2->5 (1); SUM=11
//	
//    //Build AL in Picture (weights made up)
//	GraphAL* gal=createAL(6);
//	addEdgeAL(gal,0,1,2);
//	addEdgeAL(gal,0,2,1);
//	
//	addEdgeAL(gal,1,3,3);
//	
//	addEdgeAL(gal,2,5,1);
//
//	addEdgeAL(gal,3,0,2);
//	addEdgeAL(gal,3,4,4);
//	
//	addEdgeAL(gal,4,0,3);
//
//	addEdgeAL(gal,5,4,1);
//	addEdgeAL(gal,5,0,2);
//	addEdgeAL(gal,5,3,3);
//	
//	printf("Tree weight V1 = %d\n",treeWeightAL1(gal, f));
//	printf("Tree weight V2 = %d\n",treeWeightAL2(gal, f));
//	printf("Tree weight V3 = %d\n",treeWeightAL3(gal, f));
//	
//	return 0;
//}
//
//int main(int argc, const char * argv[]) {
//	return main_ficha11(argc, argv);
//}
//
