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
    int getId() const;
    std::string getStatus() const;
    std::vector<Material*> getMaterials() const;

    void setStatus(std::string);
    void addNewMaterials(std::vector<Material*>);
    void removeMaterial(Material*);
    void clearMaterialList();

    void showData() const;
};