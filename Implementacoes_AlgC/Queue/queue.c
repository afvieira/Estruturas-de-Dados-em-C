//#include "queue.h"
//#include "buffer.h"
//#include <stdlib.h>
//
//Buffer create(void) {
//	Buffer b = (Buffer) malloc(sizeof(buffer));
//        b->size=0;
//	b->front = NULL;
//	b->back = NULL;
//        return b;
//}
//
//int empty(Buffer b) {
//        return b->size==0;
//}
//
//int add(Buffer b, int n) {
//        if (b->back==NULL) {
//           b->back=(Node*)malloc(sizeof(Node));
//	   if (b->back==NULL) return 0;
//           b->front=b->back;
//        }
//        else {
//	   b->back->next=(Node*)malloc(sizeof(Node));
//	   if (b->back->next==NULL) return 0;
//	   b->back=b->back->next;
//        }
//        b->back->value=n;
//	b->size++;
//	return 1;
//}
//
//int next(Buffer b, int *n) {
//	if (empty(b)) return 0;
//	*n = b->front->value;
//	return 1;
//}
//
//int retrieve(Buffer b, int *n) {
//        Node* aux;
//	if (empty(b)) return 0;
//        *n = b->front->value;
//	aux=b->front;
//	b->front=b->front->next;
//	free(aux);
//        b->size--;
//        return 1;
//}
//
