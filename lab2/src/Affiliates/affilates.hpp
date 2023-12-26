#pragma once

#include"../Employee/employee.hpp"
#include"../Project/project.hpp"
#include<vector>
#include<string>

class Affilates {
    private:
    int id;
    std::string address;
    std::vector<Employee*> employes;
    Employee *officeDirector;
    std::vector<Project*> projects;

    public:
    Affilates(std::string);

    int getId();
    const std::string getAddress();
    const std::vector<Employee*> getEmployes();
    const Employee* getOfficeDirector();
    const std::vector<Project*> getProjects();

    void setAddress(std::string);
    void addNewEmployes(std::vector<Employee*>);
    void removeEmployee(Employee*);
    void clearEmployesList();
    void setOfficeDirector(Employee*);
    void addNewProjects(std::vector<Project*>);
    void removeProject(Project*);
    void clearProjectList();

    const void showData();
};