#include <iostream>
using namespace std;
#include <string>

void main() {
	int numbers[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (int number : numbers) {
		cout << number << endl;
	}
	system("pause");
}
