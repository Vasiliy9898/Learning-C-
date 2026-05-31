#include <Iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	srand(time(NULL));
	int rand_num = 1 + rand() % 10;
	bool stop = false;
	int user_input;

	do {
		cout << "Введите число :";
		cin >> user_input;
		if (user_input != rand_num)
			cout << "Ты не угадал ";
		else
			stop = true;
	} while (!stop);

	cout << "Ты угадал!";



	
		return 0;
	

}
