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
    srand(time(NULL));
    for (i = 0; i < 10; i++)
    {
        int x = rand();
        my_array[i] = x;
    }

    my_array[9] = 0;
    int sep_array[10];
    int *mp = my_array;
    int *sp = sep_array;
    for (i = 0; i < 10; i++)
    {
        *(sp + i) = *(mp + (9 - i));
    }
    printf("contents of array 1\n");
    // printing the contents
    for (i = 0; i < 10; i++)
    {
        printf("%d ", *mp);
        mp++;
    }
    printf("\n");
    printf("contents of array 2\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", *sp);
        sp++;
    }
    printf("\n");
    return 0;
}
