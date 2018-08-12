#include "stdio.h"
#include "stdlib.h"
#define NA -1
int main()
{
  int i = 0, j = 0, k = 0;
  int m = 0, n = 0;
  int *mPlusN = NULL, *N = NULL;
  int n1 = 0, n2 = 0;
  printf("Enter number of elements in mPlusN: ");
  scanf("%d",&n1);
  mPlusN = (int *)malloc(sizeof(int)*n1);
  for (i = 0; i < n1; i++)
  {
    printf("Enter element mPlusN[%d]: ", i);
    scanf("%d",&mPlusN[i]);
  }

  printf("Enter number of elements in N: ");
  scanf("%d",&n2);
  N = (int *)malloc(sizeof(int)*n2);
  for (i = 0; i < n2; i++)
  {
    printf("Enter element N[%d]: ", i);
    scanf("%d",&N[i]);
  }
  m = n1 - n2; //number of valid elements in mPlusN
  n = n2;      //number of elements in second array
  
  //Shift all valid elements in mPlusN to end
  j = n1 - 1;
  for (i = n1 - 1; i >= 0; i--)
  {
    if (NA != mPlusN[i])
    {
      mPlusN[j] = mPlusN[i];
      j--;
    }
  }
  
  //Merge both arrays
  i = n;
  j = 0;
  k = 0;
  while (k < (m+n))
  {
    if (((i < (m + n)) && (mPlusN[i] < N[j])) || (j == n))
    {
      mPlusN[k] = mPlusN[i];
      i++;
    }
    else
    {
      mPlusN[k] = N[j];
      j++;
    }
    k++;
  }

  //Print merged array 
  for (i = 0; i < m+n; i++)
    printf("mPlusN[%d]: %d\n", i, mPlusN[i]);
  return 0;
}
