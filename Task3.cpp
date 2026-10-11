#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cout << "Введите число рядов (1..20): ";
    cin >> n;

    if (n >= 1 && n <= 20) {
        int total_sum = 0;
        for (int i = 1; i <= n; i++) {
            int price;
            if (i >= 1 && i <= 5) {
                price = 8;
            }
            else {
                price = 10;
            }

            cout << "Ряд " << i << ": цена билета = " << price << endl;
            total_sum += price; 
        }

        cout << "\nСуммарная стоимость одного места в каждом ряду: " << total_sum << endl;
    }
    else {
        cout << "Ошибка: число рядов должно быть от 1 до 20." << endl;
    }

    return 0;
}
