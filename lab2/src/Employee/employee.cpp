#include"employee.hpp"
#include<iostream>

Employee::Employee(std::string name, std::string surname, Position* position, Department* department) {
    this->name = name;
    this->surname = surname;
    this->position = position;
    this->department = department;
    this->status = "Newly added";
}

int Employee::getId() const{
    return this->id;
}

std::string Employee::getName() const{
    return this->name;
}

void Employee::setName(std::string name){
    this->name = name;
}

std::string Employee::getSurname() const{
    return this->surname;
}

void Employee::setSurname(std::string surname){
    this->surname = surname;
}

Position* Employee::getPosition() const{
    return position;
}

void Employee::setPosition(Position* newPosition) {
    position = newPosition;
}

Department* Employee::getDepartment() const{
    return department;
}

void Employee::setDepartment(Department* newDepartment) {
    department = newDepartment;
}

std::string Employee::getStatus() const{
    return this->status;
}

void Employee::setStatus(std::string newStatus) {
    this->status = newStatus;
}

void Employee::showData() const{
    std::cout << "Employee id: " << id << "\n"
              << "Employee name: " << name << "\n"
              << "Employee surname: " << surname << "\n"
              << "Employee position: " << position->getName() << "\n"
              << "Employee department: " << department->getName() << "\n"
              << "Employee status: " << status << "\n";
}

