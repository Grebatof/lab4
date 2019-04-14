#include <stdio.h>

int sum_array_recursive(int *array, int Size) {

    if (Size == 0) {
        return 0;
    }

    return array[Size - 1] + sum_array_recursive(array, Size - 1);
}




int febo_recursive(int number, int probel) {

    if (number == 0) {
        return 0;
    }

    if (number == 1) {
        return 1;
    }

    return febo_recursive(number - 2, 0) + febo_recursive(number - 1, 1);
}
