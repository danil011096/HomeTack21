#include <iostream>

void pointer(int* num1, int* num2) {
	int p;
	int* tpm = &p;
	*tpm = *num1;
	*num1 = *num2;
	*num2 = *tpm;
}

int main() {
	setlocale(LC_ALL, "Russian");

	int x, y;
	std::cout << "Введи числа -> ";
	std::cin >> x >> y;
	std::cout << "x = " << x << ", y = " << y << std::endl;
	int* px = &x;
	int* py = &y;
	std::cout << px << std::endl << py << std::endl;
	pointer(&x, &y);
	std::cout << "x = " << x << ", y = " << y << std::endl;

	return 0;
}