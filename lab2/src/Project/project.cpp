#include"project.hpp"
#include<iostream>
#include<vector>

Project::Project(std::string name, std::string description) {
    this->name = name;
    this->description = description;
    this->status = "Newly added";
}

const int Project::getId() {
    return this->id;
}

const std::string Project::getName() {
    return this->name;
}

void Project::setName(std::string name){
    this->name = name;
}

const std::string Project::getDescription() {
    return this->description;
}

void Project::setDescription(std::string newDescription){
    this->description = newDescription;
}

const std::string Project::getStatus() {
    return this->status;
}

void Project::setStatus(std::string status){
    this->status = status;
}

const Employee* Project::getProjectOfficer() {
    return this->projectOfficer;
}

void Project::setProjectOfficer(Employee* newOfficer) {
    this->projectOfficer = newOfficer;
}

const std::vector<Employee*> Project::getEmployes() {
    return this->employes;
}

const std::vector<Employee*> Project::getEmployes() {
    return this->employes;
}

void Project::addNewEmployes(std::vector<Employee*> newEmployes) {
    for (int i = 0; i < newEmployes.size(); i++) {
        this->employes.push_back(newEmployes[i]);
    }
}

void Project::removeEmployee(Employee* employee) {
    int indToDelete = this->employes.size() + 1;
    for (int i = 0; i < this->employes.size(); i++) {
        if (this->employes[i]->getId() == employee->getId()) {
            indToDelete = i;
        }
    }

    if (indToDelete < this->employes.size()) {
        this->employes.erase(std::next(this->employes.begin(), indToDelete));
    }
}

void Project::clearEmployesList() {
    this->employes.clear();
}

const std::vector<Machinery*> Project::getEquipement() {
    return this->equipment;
}

void Project::addNewEquipement(std::vector<Machinery*> newMachinery) {
    for (int i = 0; i < newMachinery.size(); i++) {
        this->equipment.push_back(newMachinery[i]);
    }
}

void Project::removeEquipement(Machinery* machinery) {
    int indToDelete = this->equipment.size() + 1;
    for (int i = 0; i < this->equipment.size(); i++) {
        if (this->equipment[i]->getId() == machinery->getId()) {
            indToDelete = i;
        }
    }

    if (indToDelete < this->equipment.size()) {
        this->equipment.erase(std::next(this->equipment.begin(), indToDelete));
    }
}

void Project::clearEquipementList() {
    this->equipment.clear();
}

const std::vector<Order*> Project::getOrders() {
    return this->orders;
}

void Project::addNewOrders(std::vector<Order*> newOrders) {
    for (int i = 0; i < newOrders.size(); i++) {
        this->orders.push_back(newOrders[i]);
    }
}

void Project::removeOrder(Order* order) {
    int indToDelete = this->orders.size() + 1;
    for (int i = 0; i < this->orders.size(); i++) {
        if (this->orders[i]->getId() == order->getId()) {
            indToDelete = i;
        }
    }

    if (indToDelete < this->orders.size()) {
        this->orders.erase(std::next(this->orders.begin(), indToDelete));
    }
}

void Project::clearOrderList() {
    this->orders.clear();
}

const void Project::showData(){
    std::cout << "Project id: " << id << "\n"
              << "Project name: " << name << "\n"
              << "Project type: " << description << "\n"
              << "Project status: " << status << "\n";
}

