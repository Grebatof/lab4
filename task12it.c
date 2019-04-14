#include <stdio.h>

int sum_array(int *array, int Size, int summ) {

    if (Size == 0) {
        return summ;
    }

    return sum_array(array, Size - 1, summ + array[Size - 1]);
}

int sum_array_iterative(int *array, int Size) {
    return sum_array(array, Size, 0);
}




int febo(int one, int two, int count, int number) {
    printf("one = %d, two = %d, step = %d, target = %d\n", one, two, count, number);

    if (count == number) {
        return two;
    }

    return febo(two, two + one, count + 1, number);
}

int febo_iterative(int number) {
    return febo(1, 1, 2, number);
}
