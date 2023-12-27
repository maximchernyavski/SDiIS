#include"storage.hpp"
#include<iostream>
#include<vector>

Storage::Storage() {
    // this->id = generateNewId();
}

int Storage::getId() const{
    return this->id;
}

std::string Storage::getStatus() const{
    return this->status;
}

void Storage::setStatus(std::string status){
    this->status;
}

std::vector<Material*> Storage::getMaterials() const{
    return this->materials;
}

void Storage::addNewMaterials(std::vector<Material*> newMaterials) {
    for (int i = 0; i < newMaterials.size(); i++) {
        this->materials.push_back(newMaterials[i]);
    }
}

void Storage::removeMaterial(Material* material) {
    int indToDelete = this->materials.size() + 1;
    for (int i = 0; i < this->materials.size(); i++) {
        if (materials[i]->getId() == material->getId()) {
            indToDelete = i;
        }
    }

    if (indToDelete < this->materials.size()) {
        materials.erase(std::next(materials.begin(), indToDelete));
    }
}

void Storage::clearMaterialList() {
    this->materials.clear();
}

void Storage::showData() const{
    std::cout << "Storage id: " << id << "\n"
              << "Storage status: " << status << "\n";
}

