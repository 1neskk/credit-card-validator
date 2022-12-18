#include <Windows.h>
#include <iostream>
#include <string>

#include "checker.h"

int main() {
	system("color a");
	std::cout << "Enter a credit card number: ";
	std::cin >> cardNumber;
	std::cout << "You entered: " << cardNumber << std::endl;
	if (cardNumber.length() != 16) {
		std::cout << "Invalid card number" << std::endl;
		return 0;
	}
	
	for (int i = 0; i < cardNumber.length(); i++) {
		if (!isdigit(cardNumber[i])) {
			std::cout << "Invalid card number" << std::endl;
			return 0;
		}
	  
	}
	card_checker();
	return 0;
}