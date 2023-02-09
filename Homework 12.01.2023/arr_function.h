#pragma once
#include <iostream>
#include "random.h"

using namespace std;

void RandomArr (int arr[], int size, int start, int end) {
    srand(time(0));
    for (int i = 0; i < size; ++i) {
        arr[i] = start + rand() % (end - start + 1);
    }
}

void PrintArr (int arr[], int size, char symbol) {
    cout << symbol << " ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout <<symbol << endl;
}

int MaxElement (int arr[], int size) {
    int max = arr[0];
    for (int i = 0; i < size; ++i) {
        if (arr[i] = max) {
            max = arr[i];
        }
    }
    return max;
}

int MinElement (int arr[], int size) {
    int min = arr[0];
    for (int i = 0; i < size; ++i) {
        if (arr[i] = min) {
            min = arr[i];
        }
    }
    return min;
}

int Find (int arr[], int size, int key) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

void Bisection_1 (int arr[], int first_half[], int size, int middle) {
    for (int i = 0; i < middle; ++i) {
        first_half[i] = arr[i];
    }
}

void Bisection_2 (int arr[], int second_half[], int size, int middle) {
    for (int i = 0; i < middle; ++i) {
        second_half[i] = arr[i + middle];
    }
}