#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int *data;
  size_t pos;
  size_t length;
} dyn_array;

void dyn_array_init(dyn_array *);
void dyn_array_insert(dyn_array *, int);
void dyn_array_free(dyn_array *);
void dyn_array_print(dyn_array *);
