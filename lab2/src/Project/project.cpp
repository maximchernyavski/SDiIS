#include"project.hpp"
#include<iostream>
#include<vector>

Project::Project(std::string name, std::string description) {
    this->name = name;
    this->description = description;
    this->status = "Newly added";
}

int Project::getId() const{
    return this->id;
}

std::string Project::getName() const{
    return this->name;
}

void Project::setName(std::string name){
    this->name = name;
}

std::string Project::getDescription() const{
    return this->description;
}

void Project::setDescription(std::string newDescription){
    this->description = newDescription;
}

std::string Project::getStatus() const{
    return this->status;
}

void Project::setStatus(std::string status){
    this->status = status;
}

Employee* Project::getProjectOfficer() const{
    return this->projectOfficer;
}

void Project::setProjectOfficer(Employee* newOfficer) {
    this->projectOfficer = newOfficer;
}

std::vector<Employee*> Project::getEmployes() const{
    return this->employes;
}

std::vector<Employee*> Project::getEmployes() const{
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

std::vector<Machinery*> Project::getEquipement() const{
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

std::vector<Order*> Project::getOrders() const{
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

void Project::showData() const{
    std::cout << "Project id: " << id << "\n"
              << "Project name: " << name << "\n"
              << "Project type: " << description << "\n"
              << "Project status: " << status << "\n";
}

