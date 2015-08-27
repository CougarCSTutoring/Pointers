#include <iostream>
#include <sstream>
#include <string>

int main () {
	int size;
	std::string* array;


	std::cout << "Pointers example" << std::endl;
	std::cout << "Enter a number" << std::endl;
	std::cin >> size;

	std::cout << "size : " << size << std::endl;

	array = new std::string[size];

	for (int i = 0; i < size; i++) {
		std::cout << "String " << i << ": ";
		std::cin >> array[i];
	}

	for (int i = 0; i < size; i++) {
		std::cout << "array[" << i << "]: " << array[i] << std::endl;
	}

	delete[] array;
	return 0;
}
