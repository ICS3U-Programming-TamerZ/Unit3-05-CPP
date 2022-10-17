// Copyright (c) 2022 Tamer Zreg All rights reserved.
// .
// Created by: Tamer Zreg
// Date: Oct.13, 2022
// This program gets the number of a month from the user and outputs its name.

#include <iostream>

int main() {
    // Initializing user's month number variable.
    int userNumber;

    // Gets user's month number.
    std::cout << "Enter the number of a month. \n";
    std::cout << ">> ";
    std::cin >> userNumber;
    std::cout << "\n";

    // Switch-case statement for months and their corresponding number.
    switch (userNumber) {
        case 1:
            std::cout << "1 is January." << std::endl;
            break;
        case 2:
            std::cout << "2 is February." << std::endl;
            break;
        case 3:
            std::cout << "3 is March." << std::endl;
            break;
        case 4:
            std::cout << "4 is April." << std::endl;
            break;
        case 5:
            std::cout << "5 is May." << std::endl;
            break;
        case 6:
            std::cout << "6 is June." << std::endl;
            break;
        case 7:
            std::cout << "7 is July." << std::endl;
            break;
        case 8:
            std::cout << "8 is August." << std::endl;
            break;
        case 9:
            std::cout << "9 is September." << std::endl;
            break;
        case 10:
            std::cout << "10 is October." << std::endl;
            break;
        case 11:
            std::cout << "11 is November." << std::endl;
            break;
        case 12:
            std::cout << "12 is December." << std::endl;
            break;

        // Case executed if user inputs an non-month number.
        default:
            std::cout << "Invalid month number." << std::endl;
            break;
    }
}
