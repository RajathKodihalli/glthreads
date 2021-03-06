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
#define ITERATE_GL_THREADS_BEGIN(lsptr, struct_type, ptr)	\
{								\
	glthread_node_t *_glnode = NULL, *_next = NULL;		\
	for(_glnode = lsptr->head; _glnode; _glnode = _next){	\
	_next = _glnode->right;					\
	ptr = (struct_type *)((char *)_glnode - lsptr->offset);	

#define ITERATE_GL_THREADS_ENDS }}

#define glthread_node_init(glnode)	\
	glnode->left = NULL;		\
	glnode->right = NULL;

void
init_glthread(glthread_t *glthread, unsigned int offset);

#define offsetof(struct_name, field_name)	\
	((unsigned int)&((struct_name *)0)->field_name)

#endif /* __GLTHREADS__ */










	
