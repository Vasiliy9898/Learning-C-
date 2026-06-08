#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int size;
    cout << "Введите размер массива: ";
    if (!(cin >> size) || size <= 0) {
        cerr << "Некорректный размер массива.\n";
        return 1;
    }

    int* numbers = new int[size];

  
    for (int i = 0; i < size; ++i) {
        cout << "Введите элемент массива: ";
        cin >> numbers[i];
    }

 
    cout << "Исходный массив: ";
    for (int i = 0; i < size; ++i) {
        cout << numbers[i] << ' ';
    }
    cout << '\n';
  

  
    for (int i = 0; i < size - 1; ++i) {
        bool swapped = false;
        for (int j = 0; j < size - i - 1; ++j) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break;
    }

    cout << "Отсортированный массив: ";
    for (int i = 0; i < size; ++i) {
        cout << numbers[i] << ' ';
    }
    cout << '\n';

    delete[] numbers;
    return 0;
}
