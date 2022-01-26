#include <stdio.h>
#include <string.h>

int main(void) {
  const int LEN = 30;
  char str1[LEN];

  printf ("Digite algo:  "); 
  fgets (str1, LEN, stdin);

  for (int count=strlen(str1); count >= 0; count--) {
    printf ("%c", str1[count]);
  }

  return 0;
}
