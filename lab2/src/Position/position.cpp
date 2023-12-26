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


const int Position::getId(){
    return this->id;
}

const int Position::getAuthority(){
    return this->authority;
}

const std::string Position::getName(){
    return this->name;
}

const std::string Position::getDescription(){
    return this->description;
}

const void Position::showData(){
        std::cout << "------------Position id: " << id << "\n";
        std::cout << "----------Position name: " << name << "\n";
        std::cout << "-----Position authority: " << authority << "\n";
        std::cout << "---Position description: " << description << std::endl;
}