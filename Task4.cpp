#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int rows, seats;
    cout << "Введите количество рядов (1..10): ";
    cin >> rows;
    cout << "Введите количество мест в ряду (1..10): ";
    cin >> seats;

    if (rows >= 1 && rows <= 10 && seats >= 1 && seats <= 10) {
        cout << "\nСхема зала:" << endl;
        for (int r = 1; r <= rows; r++) {
            for (int s = 1; s <= seats; s++) {
               
                cout << "[" << r << ":" << s << "] ";
            }
            cout << endl;
        }
    }
    else {
        cout << "Ошибка: количество рядов и мест должно быть от 1 до 10." << endl;
    }

    return 0;
}
