//#define MAXNODES 10
//
//typedef struct {
//	int nodes;
//    int adj_table[MAXNODES][MAXNODES];
//} GraphAT;
//
//typedef struct {
//	int nodes;
//    int list_index[MAXNODES+1];
//	int adj_lists[MAXNODES*MAXNODES];
//	int adj_weights[MAXNODES*MAXNODES];
//} GraphAV;
//
//typedef struct edge {
//    int dest;
//	int weight;
//	struct edge* next;
//} Edge;
//
//typedef struct {
//	int nodes;
//    Edge *adj_lists[MAXNODES];
//} GraphAL;
//
//GraphAT *createAT(int nodes);
//int addEdgeAT(GraphAT *g, int source, int dest, int weight);
//int getWeightAT(GraphAT *g, int source, int dest, int *weight);
//
//GraphAV *createAV(int nodes);
//int addEdgeAV(GraphAV *g, int source, int dest, int weight);
//int getWeightAV(GraphAV *g, int source, int dest, int *weight);
//
//GraphAL *createAL(int nodes) ;
//int addEdgeAL(GraphAL *g, int source, int dest, int weight);
//int getWeightAL(GraphAL *g, int source, int dest, int *weight);
//
//GraphAL* convertAVtoAL(GraphAV *g);
//GraphAT* convertALtoAT(GraphAL *g);
//GraphAV* convertATtoAV(GraphAT *g);
