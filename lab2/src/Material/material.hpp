#pragma once

#include<string>

class Material{
    int id, count;
    std::string name, description;

    public:
    Material(std::string, std::string);
    
    int getId() const;
    int getCount() const;
    std::string getName() const;
    std::string getDescription() const;

    void setCount(int);
    void setName(std::string);
    void setDescription(std::string);

    void showData() const;
};