#ifndef __GLTHREADS__
#define __GLTHREADS__

/* GL thread node structure */
typedef struct glthread_node_ {
	
	struct glthread_node_ *left;
	struct glthread_node_ *right;
} glthread_node_t;


/* GL thread list structure */
typedef struct glthread_ {
	
	glthread_node_t *head;
	unsigned int offset;
} glthread_t;


void
glthread_add(glthread_t *lst, glthread_node_t *glnode);

void
glthread_remove(glthread_t *lst, glthread_node_t *glnode);


/* Iterative macro to Iterate over GLThreads */












	
