//
//  main.cpp
//  envelopecli
//
//  Created by Kit Oster on 6/28/23.
//
//
//  main.cpp
//  envelopecli
//
//  Created by Kit Oster on 6/28/23.
//
#include <iostream>
#include <string>
#include <vector>

struct Envelope {
    std::string name;
    double amount;
};

void EnvelopesSection() {
    std::vector<Envelope> envelopes;

    while (true) {
        std::cout << "\nEnvelopes Section:\n";
        std::cout << "1. Create a new envelope\n";
        std::cout << "2. Allocate money to envelopes\n";
        std::cout << "3. Display envelope information\n";
        std::cout << "4. Back to main menu\n";
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
}

void BudgetCalculatorSection() {
    while (true) {
        std::cout << "\nBudget Calculator Section:\n";
        std::cout << "1. Calculate total budget\n";
        std::cout << "2. Calculate average budget\n";
        std::cout << "3. Back to main menu\n";
        std::cout << "Select an option: ";

        int choice;
        std::cin >> choice;

        if (choice == 1) {
            //
        } else if (choice == 2) {
            //
        } else if (choice == 3) {
            break;
        } else {
            std::cout << "Invalid choice. Please try again.\n";
        }
    }
}

int main() {
    std::cout << "Welcome to the Envelope Program.\n";

    while (true) {
        std::cout << "\nMain Menu:\n";
        std::cout << "1. Envelopes Section\n";
        std::cout << "2. Budget Calculator Section\n";
        std::cout << "3. Exit\n";
        std::cout << "Select an option: ";

        int choice;
        std::cin >> choice;

        if (choice == 1) {
            EnvelopesSection();
        } else if (choice == 2) {
            BudgetCalculatorSection();
        } else if (choice == 3) {
            break;
        } else {
            std::cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
