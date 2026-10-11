#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int age;
    int children = 0;
    int adults = 0;

    cout << "Введите возраст зрителя (или -1 для завершения):" << endl;

    while (true) {
        cin >> age;

        if (age == -1) {
            break;
        }

        if (age < 0) {
            continue;
        }

        if (age < 18) {
            children++;
        }
        else {
            adults++;
        }
    }

    cout << "\nКоличество детей (младше 18): " << children << endl;
    cout << "Количество взрослых: " << adults << endl;

    return 0;
}
