//Колбеев Григорий Сергеевич
//Написать функцию, определяющую среднее
//арифметическое элементов передаваемого ей массива.

#include <iostream>

using namespace std;

int Massive (int mas [], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Enter the " << i + 1 << " element\n";
        cin >> mas[i];
    }
}

double AverageArr (int mas [], int size) {
    double sum = 0;
    double average = 0;

    for (int i = 0; i < size; ++i) {
        sum += mas[i];
    }

    average = sum / size;
    return average;
}



int main() {

    const int SIZE = 10;
    int arr [SIZE];

    int Arr = Massive(arr, 10);

    double Average = AverageArr( arr , 10);

    cout << "Average massive elements = " << Average << "\n";

    return 0;
}
