#pragma once
#include <string>
#include <vector>

struct Student {
    std::string name;
    int age;

    Student(const std::string& name, int age) : name(name), age(age) {}
};

class Model {
private:
    std::vector<Student> students;

public:
    void addStudent(const std::string& name, int age) {
        students.emplace_back(name, age);
    }

    void removeStudent(size_t index) {
        if (index < students.size()) {
            students.erase(students.begin() + index);
        }
    }

    const std::vector<Student>& getStudents() const {
        return students;
    }
};
