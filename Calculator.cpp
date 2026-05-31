#include <Iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	float num1, num2, res;
	cout << "Введите число 1: ";
	cin >> num1;


	char math;
	cout << "Выберите символ  ";
	cin >> math;

	cout << "Введите число 2: ";
	cin >> num2;



	switch (math) {
	case '+': res = num1 + num2; break;
	case '-': res = num1 - num2; break;
	case '*': res = num1 * num2; break;
	case '/': res = num1 / num2; break;
	default:
		res = 0;
		cout << "Error";
		break;
	}
	cout << "Результат: " << res << std::endl;


	return 0;

}
