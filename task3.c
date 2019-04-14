#include <stdio.h>
#include "task3.h"

void enter_number() {
    char arr[20];
    int number;
    int i;

    printf("Enter number: ");
    scanf("%d", &number);

    i = int_to_string(number, arr);

    for (int k = 0; k < i; k++) {
        printf("!%c!", arr[k]);
    }

    printf("\n");
}

int int_to_string(int number, char * arr) {
    int i = 0;
    int k, j, minus = 0;
    char garbage;

    if (number < 0) {
        arr[i++] = '-';
        number *= -1;
        minus++;
    }

    if (number == 0) {
        arr[0] = '0';
        //arr[1] = '\0';
        return 1;
    }

    for (k = minus; number > 0; k++) {
        arr[i++] = (number % 10) + '0';
        number /= 10;
    }

    for (j = minus; j <= k - 1; j++, k--) {
        garbage = arr[k - 1];
        arr[k - 1] = arr[j];
        arr[j] = garbage;
    }

    //arr[i] = '\0';

    return i;
}
