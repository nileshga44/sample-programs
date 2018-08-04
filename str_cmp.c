/*
 * Date: 2017-xx-xx
 *
 * Description:
 * strcmp implemented.
 */

#include "stdio.h"
#include "string.h"

/*
 * Compares 2 strings. Recursively increases a and b pointers.
 * At any point if *a is not equal to *b then 1 is returned. If we reach end of
 * both strings at the same time then 0 is returned.
 *
 * Args:
 * a: Pointer to first string.
 * b: Pointer to second string.
 *
 * Returns:
 * 0 if strings a and b are same, otherwise 1.
 */
int my_strcmp(char *a, char *b) {
  return ((*a == *b && *b == '\0')? 0 : ((*a == *b) ? my_strcmp(++a, ++b) : 1));
} 
 
int main() {
  char *a = "geeksforgeeks";
  char *b = "geeksforgeeks";
  if(my_strcmp(a, b) == 0)
     printf("Strings are same");
  else 
     printf("Strings are not same");  
  return 0;
}
