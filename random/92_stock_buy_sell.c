#include "stdio.h"
#include "stdlib.h"
typedef struct interval
{
  int buy;
  int sell;
}interval;

void stockBuySell(int a[], int n)
{
  int i = 0;
  int count = 0;
  interval *p = NULL;
  p = (interval *)malloc(sizeof(interval)*(n/2 + 1));
  while (i < n - 1)
  {
    while ((i < n - 1) && (a[i + 1] <= a[i])) //To find Local minima
      i++;

    if (i == n - 1)
      break;
    p->buy = i++;
    
    while ((i < n) && (a[i - 1] <= a[i])) //To find local maxima
      i++;
    p->sell = i - 1;

    p = p + sizeof(interval);
    count++;
  }
  if (0 == count)
  {
    printf("No day when buying stocks will make profit\n");
  }
  else
  {
    p = p - sizeof(interval)*count;
    for (i = 0; i < count; i++)
    {
      printf("Buy on %d\tSell on %d\n",p->buy, p->sell);
      p = p + sizeof(interval);
    }
  }
}
int main()
{
  int i = 0;
  int n = 0;
  int *a = NULL;
  printf("Enter number of elements : ");
  scanf("%d",&n);
  a = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
  {
    printf("Enter element [%d] : ", i);
    scanf("%d",&a[i]);
  }
  stockBuySell(a, n);
  return 0;
}
