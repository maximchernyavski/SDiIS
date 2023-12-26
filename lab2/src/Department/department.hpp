#pragma once

#include"../Employee/employee.hpp"

class Department{
    private:
    int id, authority;
    std::string name;
    std::vector<Employee*> workers;

    public:
    Department(std::string, int);

    const int getId();
    const int getAuthority();
    const std::string getName();
    const std::vector<Employee*> getWorkers();

    void setName(std::string);
    void setAuthority(int);
    void addNewWorkers(std::vector<Employee*>);
    void removeWorker(Employee*);
    void clearWorkerList();

    const void showData();
};