#include"rabotyaga.hpp"
#include<iostream>

Rabotyaga::Rabotyaga(std::string name){
    this->name = name;
}

void Rabotyaga::work(){
    std::cout << "More work?" << std::endl;
}

void Rabotyaga::rest(){
    std::cout << "Rabotyaga is resting" << std::endl;
}