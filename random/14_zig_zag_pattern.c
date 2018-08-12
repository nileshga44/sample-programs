#include "stdio.h"
#define SWAP(a, b)      a = a^b;\
            b = a^b;\
            a = a^b;
int main()
{
    int arr[10] = {1,5,8,7,2,5,3,6,2,4};
    int n = 10, i = 0;
    int flag = 1;
    //flag = 1 <
    //flag = 0 >
    //
    for (i = 0; i < (n - 1); i++)
    {
        if (flag)
        {
            if (arr[i] > arr[i + 1])
            {
                SWAP(arr[i], arr[i + 1]);
            }
        }
        else
        {
            if (arr[i] < arr[i + 1])
            {
                SWAP(arr[i], arr[i + 1]);
            }
        }
        flag = !flag;
    }
    for (i = 0; i < n; i++)
        printf("%d ",arr[i]);
}
 
