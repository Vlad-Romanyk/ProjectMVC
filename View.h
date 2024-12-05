#pragma once
#include <iostream>
#include <vector>
#include "Model.h"

class View {
public:
    void displayStudents(const std::vector<Student>& students) {
        std::cout << "List of Students:\n";
        for (size_t i = 0; i < students.size(); ++i) {
            std::cout << i + 1 << ". Name: " << students[i].name
                << ", Age: " << students[i].age << "\n";
        }
    }

    void showMessage(const std::string& message) {
        std::cout << message << "\n";
    }
};
