#pragma once

#include<string>

class Position{
    protected:
    int id, authority;
    std::string name, description;

    public:
    Position();
    Position(int, int, std::string);

    void setPositionName(std::string);
    void setPositionDescription(std::string);
    void changePositionAuthority(int);
    void changePositionId(int);

    const int getId();
    const int getAuthority();
    const std::string getName();
    const std::string getDescription();
    const void showData();

    virtual void work() = 0;
};