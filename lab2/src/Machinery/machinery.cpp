#include"machinery.hpp"
#include<iostream>

Machinery::Machinery(std::string name, std::string type) {
    this->name = name;
    this->type = type;
    this->status = "Newly added";
}

int Machinery::getId() const{
    return this->id;
}

std::string Machinery::getName() const{
    return this->name;
}

void Machinery::setName(std::string name){
    this->name = name;
}

std::string Machinery::getType() const{
    return this->type;
}

void Machinery::setType(std::string type){
    this->type = type;
}

std::string Machinery::getStatus() const{
    return this->status;
}

void Machinery::setStatus(std::string status){
    this->status = status;
}

Project* Machinery::getAssignedProject() const{
    return this->assignedProject;
}

void Machinery::setProject(Project* newProject) {
    assignedProject = newProject;
}

void Machinery::showData() const{
    std::cout << "Machinery id: " << id << "\n"
              << "Machinery name: " << name << "\n"
              << "Machinery type: " << type << "\n"
              << "Machinery status: " << status << "\n"
              << "Machinery assigned project name: " << status << "\n";
}

