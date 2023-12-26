#include"department.hpp"
#include<iostream>
#include<vector>

Department::Department(std::string name, int authority) {
    this->name = name;
    this->authority = authority;
}

const int Department::getId() {
    return this->id;
}

const std::string Department::getName() {
    return this->name;
}

void Department::setName(std::string name){
    this->name = name;
}

const std::vector<Employee*> Department::getWorkers() {
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

const void Department::showData(){
    std::cout << "Department id: " << id << "\n"
              << "Department name: " << name << "\n"
              << "Department type: " << authority << "\n";
}

