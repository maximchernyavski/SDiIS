#pragma once

#include<vector>
#include"../Order/order.hpp"
#include"../Machinery/machinery.hpp"
#include"../Employee/employee.hpp"

class Project{
    private:
    int id;
    std::string name, description, status;
    Employee* projectOfficer;
    std::vector<Employee*> employes;
    std::vector<Machinery*> equipment;
    std::vector<Order*> orders;

    public:
    Project(std::string, std::string);

    const int getId();
    const std::string getName();
    const std::string getDescription();
    const std::string getStatus();
    const Employee* getProjectOfficer();
    const std::vector<Employee*> getEmployes();
    const std::vector<Machinery*> getEquipement();
    const std::vector<Order*> getOrders();

    void setName(std::string);
    void setDescription(std::string);
    void setStatus(std::string);
    void setProjectOfficer(Employee*);
    void addNewEmployes(std::vector<Employee*>);
    void removeEmployee(Employee*);
    void clearEmployesList();
    void addNewEquipement(std::vector<Machinery*>);
    void removeEquipement(Machinery*);
    void clearEquipementList();
    void addNewOrders(std::vector<Order*>);
    void removeOrder(Order*);
    void clearOrderList();

    const void showData();
};