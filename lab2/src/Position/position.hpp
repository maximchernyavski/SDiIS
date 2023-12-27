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

    int getId() const;
    int getAuthority() const;
    std::string getName() const;
    std::string getDescription() const;
    void showData() const;

    virtual void work() = 0;
};