//Написать функцию по удалению(копированию) из массива группы элементов.
//Значения индексов диапазона удаляемых(копируемых) элементов задаются пользователем.
//Удаляемые(копируемые) элементы должны распологаться рядом, без разрывов.

#include <iostream>

using namespace std;

void copy_elements (int arr [], size_t size, size_t start, size_t end, int new_arr [] ) {
    if (start >= end || end >=size) {
        return;
    }
    copy(arr + start, arr + size, new_arr);
}

void delete_elements (int arr [], size_t size, size_t start, size_t end ) {
    if (start >= end || end >=size) {
        return;
    }
    copy(arr + (end - 1), arr + size, arr + start);
}


int main() {

    int arr [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    size_t size = sizeof(arr) / sizeof(arr[0]);
    size_t start = 1;
    size_t end = 9;

    int new_arr [size];

    copy_elements(arr, size, start, end, new_arr);

    delete_elements(arr, size, start, end);

    for (size_t i = 0; i < end - start - 1; i++) {
        cout << new_arr[i] << " ";
    }
    cout << "  ";

    for (size_t i = 0; i < size - (end - start) + 1; i++) {
        cout << arr[i] << " ";
    }



    return 0;
}