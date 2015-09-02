#include <stdio.h>

int main(void) {
// http://www.cs.uic.edu/~jbell/CourseNotes/C_Programming/DataTypesSummary.pdf
// http://caml.inria.fr/pub/docs/manual-ocaml/libref/Printf.html
  printf("I love em double d x. iYKwIM.\n");
  double dx = 0.1;
// ‘for’ loop initial declarations are only allowed from C99 mode
  for (int i=0; i<=33; i=i+1){
    printf("%%f: %f, %%F: %F, %%g: %g, %%G: %G, %%e: %e, %%E: %E\n", i*dx,i*dx,i*dx,i*dx,i*dx,i*dx);
  }
  return 0;
}
