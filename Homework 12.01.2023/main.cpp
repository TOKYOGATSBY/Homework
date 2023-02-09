#include <iostream>
#include "../function_library/arr_function.h"
#include "../function_library/math_function.h"

int main() {

    int SIZE = 10;
    int MIDDLE = SIZE/2;
    int arr[SIZE];
    int first_half[MIDDLE];
    int second_half[MIDDLE];

    RandomArr (arr, SIZE, 0, 10);
    PrintArr(arr, SIZE, '|');

    int sum = Summa(arr, SIZE);
    cout << "Summa = " << sum << endl;

    Bisection_1(arr, first_half, SIZE, SIZE/2);
    Bisection_2(arr, second_half, SIZE, SIZE/2);

    PrintArr(first_half, SIZE/2, '|');
    PrintArr(second_half, SIZE/2, '|');


    return 0;
}
