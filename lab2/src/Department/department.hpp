#pragma once

#include"../Employee/employee.hpp"

class Department{
    private:
    int id, authority;
    std::string name;
    std::vector<Employee*> workers;

    public:
    Department(std::string, int);

    int getId() const;
    int getAuthority() const;
    std::string getName() const;
    std::vector<Employee*> getWorkers() const;

    void setName(std::string);
    void setAuthority(int);
    void addNewWorkers(std::vector<Employee*>);
    void removeWorker(Employee*);
    void clearWorkerList();

    void showData() const;
};