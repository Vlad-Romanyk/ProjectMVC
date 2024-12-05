#include "Model.h"
#include "View.h"
#include "Controller.h"
#include <iostream>

int main() {
    Model model;
    View view;
    Controller controller(model, view);

    int choice;
    do {
        std::cout << "\n1. Add Student\n2. Remove Student\n3. View Students\n4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            std::string name;
            int age;
            std::cout << "Enter student's name: ";
            std::cin >> name;
            std::cout << "Enter student's age: ";
            std::cin >> age;
            controller.addStudent(name, age);
            break;
        }
        case 2: {
            size_t index;
            std::cout << "Enter student index to remove: ";
            std::cin >> index;
            controller.removeStudent(index - 1); // User input is 1-based
            break;
        }
        case 3:
            controller.showStudents();
            break;
        case 4:
            std::cout << "Exiting...\n";
            break;
        default:
            std::cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
