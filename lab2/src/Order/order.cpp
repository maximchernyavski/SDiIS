#include"order.hpp"
#include<iostream>
#include<vector>

Order::Order(std::string name, std::string description) {
    this->name = name;
    this->description = description;
    this->status = "Newly added";
}

const int Order::getId() {
    return this->id;
}

const std::string Order::getName() {
    return this->name;
}

void Order::setName(std::string name){
    this->name = name;
}

const std::string Order::getDescription() {
    return this->description;
}

void Order::setDescription(std::string description){
    this->description = description;
}

const std::string Order::getStatus() {
    return this->status;
}

void Order::setStatus(std::string status){
    this->status = status;
}

const void Order::showData(){
    std::cout << "Order id: " << id << "\n"
              << "Order name: " << name << "\n"
              << "Order description: " << description << "\n";
}

