#pragma once

#include"../Position/position.hpp"
#include"../Department/department.hpp"
#include<string>

class Employee{
    private:
    int id;
    std::string name, surname;
    Department* department;
    Position* position;
    std::string status;

    public:
    Employee(std::string, std::string, Position*, Department*);

    const int getId();
    const std::string getName();
    const std::string getSurname();
    const Department* getDepartment();
    const Position* getPosition();
    const std::string getStatus();

    void setName(std::string);
    void setSurname(std::string);
    void setDepartment(Department*);
    void setPosition(Position*);
    void setStatus(std::string);

    const void showData();
};