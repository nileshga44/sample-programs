#include "stdio.h"
#include "string.h"

int my_strcmp(char *s1, char *s2)
{
  int len = 0, ret_val = 1, i = 0, diff;
  if (strlen(s1) != strlen(s2))
  {
    ret_val = 0;
  }
  else
  {
    len = strlen(s1);
    while (i < len)
    {
      diff = s1[i] - s2[i];
      if ((s1[i] == s2[i]) || (32 == (diff > 0?diff:(-1*diff))))
      {
        i++;
      }
      else
      {
        ret_val = 0;
        break;
      }
      
    }
  }
  return ret_val;
}

int main()
{
  int status = 0;
  char str1[20] = {'\0'};
  char str2[20] = {'\0'};
  printf("Enter string 1 : ");
  scanf("%s", str1);
  printf("Enter string 2 : ");
  scanf("%s", str2);
  status = my_strcmp(str1, str2);
  printf("status = %d\n", status);
  return 0;
}
