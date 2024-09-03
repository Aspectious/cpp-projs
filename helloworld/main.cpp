#include <iostream>
#include <cmath>

int main() {
    std::string selection = "0";
    std::cout << "Please enter a selection (1-3):" << std::endl;
    std::getline(std::cin, selection);

    int sel = std::stoi(selection);
    switch(sel) {
        case 1:
            std::cout << "You selected 1! Fuck you!" << std::endl;
            break;
        case 2:
            std::cout << "You selected 2!" << std::endl << "You get to live for now..." << std::endl;
            break;
        case 3:
            std::cout << "You selected 3!" << std::endl << "Good Job!" << std::endl << "I'm so proud of you for choosing three." << std::endl;
            break;
        default:
            std::cout << "You didn't pick one." << std::endl;
            std::cout << "Dumbass." << std::endl;
            std::cout << "Run your damn executable again now and pick a fucking response." << std::endl;
    }
}
