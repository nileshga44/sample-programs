#include "stdio.h"
#include "stdlib.h"
#if 0
//With O(n**2) complexity
int main()
{
        int i = 0, j = 0;
        int eq_indx = -1;
        int left_sum = 0, right_sum = 0;
        int num_of_elements = 0;
        int *p_input = NULL;
        printf("Enter number of elements : ");
        scanf("%d",&num_of_elements);
        p_input = (int *)malloc(sizeof(int)*num_of_elements);
        for (i = 0; i < num_of_elements; i++)
                scanf("%d",&p_input[i]);
        for (i = 0; i < num_of_elements; i++)
        {
                left_sum = 0;
                right_sum = 0;
                for (j = 0; j < i; j++)
                        left_sum += p_input[j];
                for (j = i + 1; j < num_of_elements; j++)
                        right_sum += p_input[j];

                if (left_sum == right_sum)
                {
                        eq_indx = i;
                        break;
                }
        }
        printf("Equilibrium indx - %d\n",eq_indx);
        return 0;
}
#else
//With O(n) complexity
int main()
{
        int i = 0, j = 0;
        int eq_indx = -1;
        int left_sum = 0, right_sum = 0;
        int sum = 0, tmp_sum = 0;
        int num_of_elements = 0;
        int *p_input = NULL;
        printf("Enter number of elements : ");
        scanf("%d",&num_of_elements);
        p_input = (int *)malloc(sizeof(int)*num_of_elements);
        for (i = 0; i < num_of_elements; i++)
        {
                scanf("%d",&p_input[i]);
                sum += p_input[i];
        }
        for (i = 0; i < num_of_elements; i++)
        {
          if (tmp_sum == (sum - tmp_sum - p_input[i]))
          {
            eq_indx = i;
            break;
          }
          else
          {
            tmp_sum += p_input[i];
          }
        }
        printf("Equilibrium indx - %d\n",eq_indx);
        return 0;
}
#endif
