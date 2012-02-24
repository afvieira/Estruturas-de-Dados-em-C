//#include "stack.h"
//#include "buffer.h"
//#include <stdlib.h>
//
//Buffer create(void) {
//	Buffer b = (Buffer) malloc(sizeof(buffer));
//        b->top=0;
//        return b;
//}
//
//int empty(Buffer b) {
//	return b->top==0;
//}
//
//int add(Buffer b, int n) {
//	if (b->top==STACK_SIZE) return 0;
//	b->stack[b->top]=n;
//        b->top++;
//	return 1;
//}
//
//int next(Buffer b, int *n) {
//	if (empty(b)) return 0;
//	*n = b->stack[b->top-1];
//	return 1;
//}
//
//int retrieve(Buffer b, int *n) {
//        if (empty(b)) return 0;
//	b->top--;
//        *n = b->stack[b->top];
//        return 1;
//}
//
