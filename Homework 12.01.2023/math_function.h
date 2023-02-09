#pragma once
#include <iostream>

int Summa (int arr[], int size) {
    int summa = 0;
    for (int i = 0; i < size; ++i) {
        summa += arr[i];
    }
    return summa;
}
