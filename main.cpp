//
//  main.cpp
//  envelopecli
//
//  Created by Kit Oster on 6/28/23.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Envelope {
    std::string name;
    double amount;
};

int main() {
    std::cout << "Welcome to the Envelope Program.\n";

    std::vector<Envelope> envelopes;

    while (true) {
        std::cout << "\nMenu:\n";
        std::cout << "1. Create a new envelope\n";
        std::cout << "2. Allocate money to envelopes\n";
        std::cout << "3. Display envelope information\n";
        std::cout << "4. Exit\n";
        std::cout << "Select an option: ";

        int choice;
        std::cin >> choice;

        if (choice == 1) {
            std::string name;
            std::cout << "Enter the name for the new envelope: ";
            std::cin >> name;

            envelopes.push_back({name, 0.0});

            std::cout << "Envelope created successfully.\n";
        } else if (choice == 2) {
            if (envelopes.empty()) {
                std::cout << "No envelopes created yet.\n";
                continue;
            }

            std::cout << "Enter the allocation amount for each envelope:\n";
            for (auto& envelope : envelopes) {
                std::cout << "Allocation for " << envelope.name << ": $";
                std::cin >> envelope.amount;
            }

            std::cout << "Money allocated to envelopes.\n";
        } else if (choice == 3) {
            if (envelopes.empty()) {
                std::cout << "No envelopes created yet.\n";
                continue;
            }

            std::cout << "Envelope Information:\n";
            for (const auto& envelope : envelopes) {
                std::cout << envelope.name << ": $" << envelope.amount << std::endl;
            }
        } else if (choice == 4) {
            break;
        } else {
            std::cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
