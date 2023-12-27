#include"order.hpp"
#include<iostream>
#include<vector>

Order::Order(std::string name, std::string description) {
    this->name = name;
    this->description = description;
    this->status = "Newly added";
}

int Order::getId() const{
    return this->id;
}

std::string Order::getName() const{
    return this->name;
}

void Order::setName(std::string name){
    this->name = name;
}

std::string Order::getDescription() const{
    return this->description;
}

void Order::setDescription(std::string description){
    this->description = description;
}

std::string Order::getStatus() const{
    return this->status;
}

void Order::setStatus(std::string status){
    this->status = status;
}

void Order::showData() const{
    std::cout << "Order id: " << id << "\n"
              << "Order name: " << name << "\n"
              << "Order description: " << description << "\n";
}

