#include "stdio.h"
#include "stdlib.h"
int main()
{
  int i = 0, left = 0, right = 0, mid = 0;
  int n = 0;
  int *a = NULL;
  printf("Enter number of elements : ");
  scanf("%d",&n);
  a = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
    scanf("%d",&a[i]);
  if (a[0] == 0)
  {
    printf("All zeros present in list : %d\n", n);  
  }
  else if (a[n - 1] == 1)
    printf("None zero present in list\n");  
  else
  {
          left = 0;
          right = n - 1;
          while (left < right)
          {
            mid = (left + right)/2;
            if ((a[mid + 1] == 0) && (a[mid] == 1))
            {
              break;
            }
            else if ((a[mid + 1] == 1) && (a[mid] == 1))
            {
              left = mid;
            }
            else
            {
              right = mid;
            }
          }
          printf("Number of zeros in sorted list of 1 and 0 are : %d\n", (n - (mid + 1)));
  }
  return 0;
}
