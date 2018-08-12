#include "stdio.h"
#include "string.h"
/* my_strcat(dest, src) copies data of src to dest.  To do so, it first reaches end of the string dest using recursive calls my_strcat(++dest, src).  Once end of dest is reached, data is copied using 
(*dest++ = *src++)?  my_strcat(dest, src). */
void my_strcat(char *dest, char *src)
{
  (*dest) ? (my_strcat(++dest, src)): ((*dest++ = *src++) ? my_strcat(dest, src) : 0);
}
 
/* driver function to test above function */
int main()
{
  char dest[100] = "geeksfor";
  char *src = "geeks";
  my_strcat(dest, src);
  printf(" %s ", dest);
  getchar();
}

/* my_strcmp(a, b) returns 0 if strings a and b are same, otherwise 1.   It recursively increases a and b pointers. At any point if *a is not equal to *b then 1 is returned.  If we reach end of both strings at the same time then 0 is returned. */
int my_strcmp(char *a, char *b)
{
  return ((*a == *b && *b == '\0')? 0 : ((*a == *b) ? my_strcmp(++a, ++b) : 1));
} 
 
/* driver function to test above function */
int main()
{
  char *a = "geeksforgeeks";
  char *b = "geeksforgeeks";
  if(my_strcmp(a, b) == 0)
     printf(" String are same ");
  else 
     printf(" String are not same ");  
 
  getchar();
  return 0;
}    
