#include"../position.hpp"

class Rabotyaga final : Position {
    private:
    int id = 1;
    int authority = 1;

    public:
    Rabotyaga(std::string name);

    void work();
    void rest();
};