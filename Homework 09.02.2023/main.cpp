//Задание 3. Подсчитать количество слов во введенном предложении.

#include <iostream>
#include <string>

using namespace std;

int main() {

    string s1;
    int quantity {};

    cout << "Enter the string\n";
    getline (cin, s1);

    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] != ' ' && (s1[i + 1] == ' ' || s1[i + 1] == '\0')) {
            quantity++;
        }
    }

    cout << quantity;

    return 0;
}