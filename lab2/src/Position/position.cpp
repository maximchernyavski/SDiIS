#include"position.hpp"
#include<iostream>

Position::Position(int id, int authority, std::string name = NULL){
    this->name = name;
    this->id = id;
    this->authority = authority;
}


void Position::setPositionName(std::string name){
    this->name = name;
}

void Position::setPositionDescription(std::string description){
    this->description = description;
}

void Position::changePositionId(int newId){
    this->id = newId;
}

void Position::changePositionAuthority(int newAuthority){
    this->authority = newAuthority;
}


int Position::getId() const{
    return this->id;
}

int Position::getAuthority() const{
    return this->authority;
}

std::string Position::getName() const{
    return this->name;
}

std::string Position::getDescription() const{
    return this->description;
}

void Position::showData() const{
        std::cout << "------------Position id: " << id << "\n";
        std::cout << "----------Position name: " << name << "\n";
        std::cout << "-----Position authority: " << authority << "\n";
        std::cout << "---Position description: " << description << std::endl;
}