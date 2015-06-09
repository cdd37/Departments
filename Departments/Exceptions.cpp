#define _CRT_SECURE_NO_WARNINGS
#include "Exceptions.h"
#include <string>
#include "Employee.h"

EmployeeNotFound::EmployeeNotFound(const int id) {
    this->out = "Employee " + std::to_string(id) + " already exist";
}
EmployeeNotFound::~EmployeeNotFound() {
}

const char* EmployeeNotFound::what() const {
    return out.c_str();
}

EmployeeAlreadyExist::EmployeeAlreadyExist(const Employee& a) {
    this->out = "Employee " + a.get_name() + " already exist";
}

EmployeeAlreadyExist::~EmployeeAlreadyExist() {
}

const char* EmployeeAlreadyExist::what() const {
    return out.c_str();
}
