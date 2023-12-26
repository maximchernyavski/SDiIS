#pragma once

#include"../Project/project.hpp"
#include<string>

class Machinery{
    private:
    int id;
    std::string name, type, status;
    Project* assignedProject;

    public:
    Machinery(std::string, std::string);

    void setName(std::string);
    void setType(std::string);
    void setStatus(std::string);
    void setProject(Project*);

    const int getId();
    const std::string getName();
    const std::string getType();
    const std::string getStatus();
    const Project* getAssignedProject();

    const void showData();
};

