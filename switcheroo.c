// Michael Nath
// Period 10 - Systems Level Programming
// Work 06 The Old Switcheroo

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int my_array[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        srand(time(NULL));
        int x = rand();
        my_array[i] = x;
    }
    my_array[9] = 0;
    int sep_array[10];
    int *mp = my_array;
    int *sp = sep_array;
    for (i = 0; i < 10; i++)
    {
        *(sp + i) = *(mp + (10 - i));
    }
    printf("contents of array 1");
    // printing the contents
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", *mp);
        mp++;
    }
    printf("\n");
    printf("contents of array 2");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", *sp);
        sp++;
    }
    printf("\n");
    return 0;
}
