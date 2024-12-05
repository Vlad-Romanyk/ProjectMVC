#pragma once
#include "Model.h"
#include "View.h"

class Controller {
private:
    Model& model;
    View& view;

public:
    Controller(Model& model, View& view) : model(model), view(view) {}

    void addStudent(const std::string& name, int age) {
        model.addStudent(name, age);
        view.showMessage("Student added successfully.");
    }

    void removeStudent(size_t index) {
        if (index < model.getStudents().size()) {
            model.removeStudent(index);
            view.showMessage("Student removed successfully.");
        }
        else {
            view.showMessage("Invalid index.");
        }
    }

    void showStudents() {
        view.displayStudents(model.getStudents());
    }
};
