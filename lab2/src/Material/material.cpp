#include"material.hpp"
#include<iostream>
#include<vector>

Material::Material(std::string name, std::string description) {
    this->name = name;
    this->description = description;
}

const int Material::getId() {
    return this->id;
}

const std::string Material::getName() {
    return this->name;
}

void Material::setName(std::string name){
    this->name = name;
}

const std::string Material::getDescription() {
    return this->description;
}

void Material::setDescription(std::string description){
    this->description = description;
}


const void Material::showData(){
    std::cout << "Material id: " << id << "\n"
              << "Material name: " << name << "\n"
              << "Material description: " << description << "\n";
}

