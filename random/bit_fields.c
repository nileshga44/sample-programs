#include "stdio.h"
//Overflow due to sign bit(int, unsigned int must be used)
int main(void)
{
    struct str
    {
        int i: 1;
        int j: 2;
        int k: 3;
        int l: 4;
    };
 
    struct str s;
 
    s.i = 1;
    s.j = 2;
    s.k = 5;
    s.l = 10;
 
     printf("-----------------With signed int-----------------\n");
     printf("sizeof(s) : %ld\n",sizeof(s));
    printf(" i: %d \n j: %d \n k: %d \n l: %d \n", s.i, s.j, s.k, s.l);
 
    getchar();

    struct str1
    {
        unsigned int i: 1;
        unsigned int j: 2;
        unsigned int k: 3;
        unsigned int l: 4;
    };
    struct str1 s1;
 
    s1.i = 1;
    s1.j = 2;
    s1.k = 5;
    s1.l = 10;
 
     printf("-----------------With unsigned int-----------------\n");
     printf("sizeof(s1) : %ld\n",sizeof(s1));
    printf(" i: %d \n j: %d \n k: %d \n l: %d \n", s1.i, s1.j, s1.k, s1.l);
 
    getchar();
    return 0;
}
