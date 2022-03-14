//
// Created by serge on 13.03.2022.
//

#include <stdbool.h>
#include <stdio.h>

bool isOrdered(const int *a, const int sizeA) {
    for (int i = 1; i < sizeA - 1; ++i) {
        if(a[i - 1] > a[i])
            return false;
    }

    return true;
}

void inputArray(int *a, const int sizeA) {
    for (int i = 0; i < sizeA; ++i) {
        scanf("%d", &a[i]);
    }
}

void outputArray(const int *a, const int sizeA) {
    for (int i = 0; i < sizeA; ++i) {
        printf("%d", a[i]);
    }
}

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}