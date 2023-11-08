#ifndef FILE_CALC
#define FILE_CALC

/**
 * struct op -Structure op
 * @op: operator
 * @f: function
 */

typedef struct op
{
	char *op;
	int (*f)(int c, int d);

} op_t;

int op_add(int c, int d);
int op_sub(int c, int d);
int op_mul(int c, int d);
int op_div(int c, int d);
int op_mod(int c, int d);

int (*get_op_func(char *s))(int, int);

#endif
