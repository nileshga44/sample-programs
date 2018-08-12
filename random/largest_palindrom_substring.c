#include "stdio.h"
#include "stdlib.h"
#include "string.h"
void print_str(char *a, int start, int end)
{
  int i = 0;
  printf("largest palindrom is : ");
  for (i = start; i <= end; i++)
    printf("%c",a[i]);
  printf("\n");
  exit(0);
}
int main()
{
  int i = 0;
  int len = 0;
  char a[100] = {'\0'};
  int left = 0, right = 0;
  int left_1 = 0, right_1 = 0;
  int start = 0, end = 0;
  printf("Enter string : ");
  scanf("%s",a);
  len = strlen(a);
  left = 0;
  right = len - 1;
  while (left < right)
  {
    if (a[left] == a[right])
    {
      //NA
    }
    else
    {
      end = right - 1;
      start = left;
      right_1 = right - 1;
      left_1 = left;
      while (left_1 < right_1)
      {
        if (a[left_1] != a[right_1])
          break;
        else
        {
          left_1++;
          right_1--;
        }
      }
      if ((left_1 >= right_1) && (a[left_1] == a[right_1]))
      {
        print_str(a, start, end);
      }
      start = left + 1;
      end = right;
      left_1 = left + 1;
      right_1 = right;
      while (left_1 < right_1)
      {
        if (a[left_1] != a[right_1])
          break;
        else
        {
          left_1++;
          right_1--;
        }
      }
      if ((left_1 >= right_1) && (a[left_1] == a[right_1]))
      {
        print_str(a, start, end);
      }
    }
    left++;
    right--;
  }
  return 0;
}
