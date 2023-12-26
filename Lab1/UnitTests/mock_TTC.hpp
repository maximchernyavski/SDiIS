#include"Tic-Tac-Toe.hpp"

class mockTTC{
    friend class Tic_Tac_Toe;
    public:
    Tic_Tac_Toe TTC;

    void s_field(){
        TTC.show_field();
    }

    void initialize_field(){
        TTC.init_field();
    }

    void set_current_symbol(char current_symbol){
        TTC.current_symbol_ = current_symbol;
    }

    void put_symbol(int coordinate, char symbol){
        TTC.field_[coordinate] = symbol;
    }

    int mock_get_input(int input){
        return TTC.get_input(input);
    }

    bool mock_check_spot(int coordinate){
        return TTC.check_spot(coordinate);
    }

    std::vector<int> mock_get_direction_signs(char dir){
        return TTC.get_direction_signs(dir);
    }

    int mock_check_direction_combination(int x, int y, char dir, int delta, int prev_x, int prev_y){
        return TTC.check_direction_combination(x, y, dir, delta, prev_x, prev_y);
    }
};