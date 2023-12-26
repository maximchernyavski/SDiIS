#include"employee.hpp"
#include<iostream>

Employee::Employee(std::string name, std::string surname, Position* position, Department* department) {
    this->name = name;
    this->surname = surname;
    this->position = position;
    this->department = department;
    this->status = "Newly added";
}

const int Employee::getId() {
    return this->id;
}

const std::string Employee::getName() {
    return this->name;
}

void Employee::setName(std::string name){
    this->name = name;
}

const std::string Employee::getSurname() {
    return this->surname;
}

void Employee::setSurname(std::string surname){
    this->surname = surname;
}

const Position* Employee::getPosition() {
    return position;
}

void Employee::setPosition(Position* newPosition) {
    position = newPosition;
}

const Department* Employee::getDepartment() {
    return department;
}

void Employee::setDepartment(Department* newDepartment) {
    department = newDepartment;
}

const std::string Employee::getStatus() {
    return this->status;
}

void Employee::setStatus(std::string newStatus) {
    this->status = newStatus;
}

const void Employee::showData(){
    std::cout << "Employee id: " << id << "\n"
              << "Employee name: " << name << "\n"
              << "Employee surname: " << surname << "\n"
              << "Employee position: " << position->getName() << "\n"
              << "Employee department: " << department->getName() << "\n"
              << "Employee status: " << status << "\n";
}

