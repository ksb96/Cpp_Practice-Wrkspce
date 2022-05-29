#include <iostream>

int getValueFromUser()
{
	std::cout << "Enter an integer here: ";
	int input{};
	std::cin >> input;

	return input;
}

void printDouble(int num) // This function now has an integer parameter
{
	std::cout << num << " doubled is: " << num * 2 << '\n'; //* 
}

int main()
{
	int num{ getValueFromUser() };

	printDouble(num);

	return 0;
}