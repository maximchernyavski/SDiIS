#include"affilates.hpp"
#include<iostream>
#include<vector>

Affilates::Affilates(std::string address) {
    this->address = address;
}

int Affilates::getId() {
    return this->id;
}

std::string Affilates::getAddress() const{
    return this->address;
}

void Affilates::setAddress(std::string address){
    this->address;
}

Employee* Affilates::getOfficeDirector() const{
    return this->officeDirector;
}

void Affilates::setOfficeDirector(Employee* newDirector) {
    this->officeDirector = newDirector;
}

std::vector<Employee*> Affilates::getEmployes() const{
    return this->employes;
}

void Affilates::addNewEmployes(std::vector<Employee*> newEmployes) {
    for (int i = 0; i < newEmployes.size(); i++) {
        this->employes.push_back(newEmployes[i]);
    }
}

void Affilates::removeEmployee(Employee* employee) {
    int indToDelete = this->employes.size() + 1;
    for (int i = 0; i < this->employes.size(); i++) {
        if (employes[i]->getId() == employee->getId()) {
            indToDelete = i;
        }
    }

    if (indToDelete < this->employes.size()) {
        employes.erase(std::next(employes.begin(), indToDelete));
    }
}

void Affilates::clearEmployesList() {
    this->employes.clear();
}

std::vector<Project*> Affilates::getProjects() const{
    return this->projects;
}

void Affilates::addNewProjects(std::vector<Project*> newProjects) {
    for (int i = 0; i < newProjects.size(); i++) {
        this->projects.push_back(newProjects[i]);
    }
}

void Affilates::removeProject(Project* project) {
    int indToDelete = this->projects.size() + 1;
    for (int i = 0; i < this->projects.size(); i++) {
        if (projects[i]->getId() == project->getId()) {
            indToDelete = i;
        }
    }

    if (indToDelete < this->projects.size()) {
        this->projects.erase(std::next(projects.begin(), indToDelete));
    }
}

void Affilates::clearProjectList() {
    this->projects.clear();
}

void Affilates::showData() const{
    std::cout << "Affilates id: " << id << "\n"
              << "Affilates name: " << address << "\n"
              << "Affilates type: " << officeDirector->getName() << "\n";
}

