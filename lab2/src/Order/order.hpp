#pragma once

class Order{
    private:
    int id;
    std::string name, description, status;

    public:
    Order(std::string, std::string);

    const int getId();
    const std::string getName();
    const std::string getDescription();
    const std::string getStatus();

    void setName(std::string);
    void setDescription(std::string);
    void setStatus(std::string);

    const void showData();
};