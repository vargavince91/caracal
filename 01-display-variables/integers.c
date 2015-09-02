#include <stdio.h>

int main(void) {
// http://www.cs.uic.edu/~jbell/CourseNotes/C_Programming/DataTypesSummary.pdf
// http://caml.inria.fr/pub/docs/manual-ocaml/libref/Printf.html
  int integer1=15;
  printf("This is my integer displayed as %%d (convert an integer argument to signed decimal): %d\n", integer1);
  printf("This is my integer displayed as %%i (convert an integer argument to signed decimal): %i\n", integer1);
  printf("This is my integer displayed as %%o: (convert an integer argument to unsigned octal) %o\n", integer1);
  printf("This is my integer displayed as %%x (convert an integer argument to unsigned hexadecimal, using lowercase letters.): %x\n", integer1);
  printf("This is my integer displayed as %%X (convert an integer argument to unsigned hexadecimal, using uppercase letters): %X\n", integer1);

  printf("Hello Integerz\n");
// ‘for’ loop initial declarations are only allowed from C99 mode
  for (int i=0; i<=33; i=i+1){
    printf("%d - %i - %o - %x - %X\n", i, i, i, i, i);
  }
  return 0;
}
