#pragma once

#include <string>
#include <iostream>

std::string cardNumber;

void card_checker() {
	if (cardNumber[0] == '4') {
		std::cout << "Visa card" << std::endl;
	}
	else if (cardNumber[0] == '5') {
		std::cout << "Mastercard" << std::endl;
	}
	else if (cardNumber[0] == '2') {
		std::cout << "Mastercard (digital)" << std::endl;
	}
	else if (cardNumber[0] == '3') {
		std::cout << "American Express" << std::endl;
	}
	else if (cardNumber[0] == '6') {
		std::cout << "Discover" << std::endl;
	}
	else {
		std::cout << "Unknown card" << std::endl;
	}
}
