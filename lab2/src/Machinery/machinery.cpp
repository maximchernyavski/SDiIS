#include"machinery.hpp"
#include<iostream>

Machinery::Machinery(std::string name, std::string type) {
    this->name = name;
    this->type = type;
    this->status = "Newly added";
}

const int Machinery::getId() {
    return this->id;
}

const std::string Machinery::getName() {
    return this->name;
}

void Machinery::setName(std::string name){
    this->name = name;
}

const std::string Machinery::getType() {
    return this->type;
}

void Machinery::setType(std::string type){
    this->type = type;
}

const std::string Machinery::getStatus() {
    return this->status;
}

void Machinery::setStatus(std::string status){
    this->status = status;
}

const Project* Machinery::getAssignedProject() {
    return this->assignedProject;
}

void Machinery::setProject(Project* newProject) {
    assignedProject = newProject;
}

const void Machinery::showData(){
    std::cout << "Machinery id: " << id << "\n"
              << "Machinery name: " << name << "\n"
              << "Machinery type: " << type << "\n"
              << "Machinery status: " << status << "\n"
              << "Machinery assigned project name: " << status << "\n";
}

