#include"department.hpp"
#include<iostream>
#include<vector>

Department::Department(std::string name, int authority) {
    this->name = name;
    this->authority = authority;
}

int Department::getId()  const{
    return this->id;
}

std::string Department::getName()  const{
    return this->name;
}

void Department::setName(std::string name){
    this->name = name;
}

std::vector<Employee*> Department::getWorkers()  const{
    return this->workers;
}

void Department::addNewWorkers(std::vector<Employee*> newWorkers) {
    for (int i = 0; i < newWorkers.size(); i++) {
        this->workers.push_back(newWorkers[i]);
    }
}

void Department::removeWorker(Employee* worker) {
    int indToDelete = this->workers.size() + 1;
    for (int i = 0; i < this->workers.size(); i++) {
        if (workers[i]->getId() == worker->getId()) {
            indToDelete = i;
        }
    }

    if (indToDelete < this->workers.size()) {
        this->workers.erase(std::next(workers.begin(), indToDelete));
    }
}

void Department::clearWorkerList() {
    this->workers.clear();
}

void Department::showData() const{
    std::cout << "Department id: " << id << "\n"
              << "Department name: " << name << "\n"
              << "Department type: " << authority << "\n";
}

