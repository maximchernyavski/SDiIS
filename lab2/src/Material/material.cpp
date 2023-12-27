#include"material.hpp"
#include<iostream>
#include<vector>

Material::Material(std::string name, std::string description) {
    this->name = name;
    this->description = description;
}

int Material::getId() const{
    return this->id;
}

std::string Material::getName() const{
    return this->name;
}

void Material::setName(std::string name){
    this->name = name;
}

std::string Material::getDescription() const{
    return this->description;
}

void Material::setDescription(std::string description){
    this->description = description;
}


void Material::showData() const{
    std::cout << "Material id: " << id << "\n"
              << "Material name: " << name << "\n"
              << "Material description: " << description << "\n";
}

