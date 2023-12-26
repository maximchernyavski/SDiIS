#pragma once

#include"../Material/material.hpp"
#include<string>

class Storage{
    private:
    int id;
    std::string status;
    std::vector<Material*> materials;

    public:
    Storage();
    const int getId();
    const std::string getStatus();
    const std::vector<Material*> getMaterials();

    void setStatus(std::string);
    void addNewMaterials(std::vector<Material*>);
    void removeMaterial(Material*);
    void clearMaterialList();

    const void showData();
};