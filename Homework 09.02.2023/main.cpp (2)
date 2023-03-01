//Задание 2. Дана строка символов. Определить количество букв, цифр и остальных символов, присутствующих в строке.

#include <iostream>
#include <string>

using namespace std;

int main() {

    string s1;

    cout << "Enter the string\n";
    getline (cin, s1);

    int number {};
    int letter {};
    int symbol {};

    for (int i = 0; i < s1.size(); ++i) {
        if (s1[i] >= 'a' && s1[i] <= 'z') {
            letter++;
        } else if (s1[i] >= 'A' && s1[i] <= 'Z') {
            letter++;
        }
        if (s1[i] >= '0' && s1[i] <= '9') {
            number++;
        }
        if (s1[i] >= '!' && s1[i] <= '/') {
            symbol++;
        } else if (s1[i] >= ':' && s1[i] <= '@') {
            symbol++;
        } else if (s1[i] >= '[' && s1[i] <= '`') {
            symbol++;
        } else if (s1[i] >= '{' && s1[i] <= '~') {
            symbol++;
        }


    }

    cout << "Quantity of letter = " << letter << endl;
    cout << "Quantity of number = " << number << endl;
    cout << "Quantity of symbol = " << symbol << endl;



    return 0;
}
