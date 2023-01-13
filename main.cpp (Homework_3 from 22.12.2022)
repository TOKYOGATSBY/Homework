//Колбеев Григорий Сергеевич
//Написать функцию, определяющую количество
//положительных, отрицательных и нулевых элементов
//передаваемого ей массива.

#include <iostream>

using namespace std;

int Massive (int mas [], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Enter the " << i + 1 << " element\n";
        cin >> mas[i];
    }
}

int Negative (int mas [], int size) {
    int negative = 0;
    for (int i = 0; i < size; ++i) {
        if (mas[i] < 0) {
            negative++;
        }
    }
    return negative;
}

int Positive (int mas [], int size) {
    int positive = 0;
    for (int i = 0; i < size; ++i) {
        if (mas[i] > 0) {
            positive++;
        }
    }
    return positive;
}

int Zero (int mas[], int size) {
    int zero = 0;
    for (int i = 0; i < size; ++i) {
        if (mas[i] == 0) {
            zero = zero + 1;
        }
    }
    return zero;
}

int main() {

    const int SIZE = 6;
    int arr[SIZE];

    int Arr = Massive (arr, 6);

    int negative = Negative (arr , 6);

    int positive = Positive (arr, 6);

    int zero = Zero (arr, 6);

    cout << "Quantity negative number = " << negative << endl;
    cout << "Quantity positive number = " << positive << endl;
    cout << "Quantity zero number = " << zero << endl;


    return 0;
}
