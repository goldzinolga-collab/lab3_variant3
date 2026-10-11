#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int seat;

  
    do {
        cout << "Введите номер места (от 1 до 30): ";
        cin >> seat;

        if (seat < 1 || seat > 30) {
            cout << "Некорректный номер места. Попробуйте снова." << endl;
        }
    } while (seat < 1 || seat > 30);
    if (seat >= 1 && seat <= 15) {
        cout << "Это левая половина зала." << endl;
    }
    else {
        cout << "Это правая половина зала." << endl;
    }

    return 0;
}
