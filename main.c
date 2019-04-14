#include <stdio.h>
#include "task12re.h"
#include "task12it.h"
#include "task3.h"

int main()
{
    enter_number();

    int Size = 5;
    int array[Size];
    for (int i = 0; i < Size; i++) {
        scanf("%d", &array[i]);
    }

    sum_array_iterative(array, Size);
    sum_array_recursive(array, Size);

    febo_iterative(7);
    printf("\n");
    febo_recursive(5, 0);

    return 0;
}
