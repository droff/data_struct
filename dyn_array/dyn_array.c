#include "dyn_array.h"

void dyn_array_init(dyn_array *arr) {
  arr->data = (int *) malloc(sizeof(int));
  arr->pos = 0;
  arr->length = 1;
}

void dyn_array_insert(dyn_array *arr, int e) {
  arr->data = (int *) realloc(arr->data, ++arr->length * sizeof(int));
  arr->data[arr->pos++] = e;
}

void dyn_array_free(dyn_array *arr) {
  free(arr->data);
}


void dyn_array_print(dyn_array *arr) {
  for (int i = 0; i < arr->pos; i++)
    printf("%d ", arr->data[i]);
  printf("\n");
}
