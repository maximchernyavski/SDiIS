/**
 * \file Tic-Tac-Toe.hpp
 * \author Chernyavski Maxim (maksim.chernyasvki2@gmail.com)
 * \brief It's a header + realisation file for Tic-Tac-Toe.
 *  
 * \copyright Copyright (c) 2023
 */

/** \def NOUGHT
 *  \brief Defines O as nought.
 */

/** \def CROSS
 *  \brief Defines X as cross. 
 */

/** \def EMPTY_SPOT
 *  \brief Defines - as empty spot.
 */

/**  \class Tic_Tac_Toe
 *  \brief Class that contains methods and variables for realisation of Tic-Tac-Toe.
 *  
 *  \brief In this realisation field is presented by 1D array, for comfortable usage of which i have used such formula:
 *  \brief coordinate = horizontal coordinate + vertical coordinate * length of row.
 *  \brief I used this scheme for unifying cases for any field and lowering memory usage for algorithm on big fields.
 *  \brief Win combination is 3 by default and is checked by recursive algorithm.
 */

/** \var char* Tic_Tac_Toe::field_
 *  \brief It's varibale, that contains field.
 */

/** \var char Tic_Tac_Toe::current_symbol_;
 *  \brief It's varibale, that contains current symbol, which is used for placing on the field and win checking.
 */

/** \var int Tic_Tac_Toe::turns_
 *  \brief It's varibale, that contains number of turns, which is used for displaying in the end of the game and deciding draw.
 */

/** \var int Tic_Tac_Toe::num_of_rows_
 *  \brief It's varibale, that contains number of rows.
 * 
 *  \brief By default is 0.
 */

/** \var int Tic_Tac_Toe::num_of_columns_
 *  \brief It's varibale, that contains number of columns.
 * 
 *  \brief By default is 0.
 */

/** \var int Tic_Tac_Toe::field_size_
 *  \brief It's varibale, that contains size of field in 1D coordinate system.
 * 
 *  \brief By default is 0.
 */

/** \var int Tic_Tac_Toe::vertical_coordinate_
 *  \brief It's varibale, that contains value of vertical coordinate.
 * 
 *  \brief We get this value from user. By default is 0.
 */

/** \var int Tic_Tac_Toe::horizontal_coordinate_
 *  \brief It's varibale, that contains value of horizontal coordinate.
 * 
 *  \brief We get this value from user. By default is 0.
 */

/** \var int Tic_Tac_Toe::spot_coordinate_
 *  \brief It's varibale, that contains value of calculated coordinate.
 */

/** \fn Tic_Tac_Toe::Tic_Tac_Toe()
 *  \brief Default constructor that sets num_of_rows_ and num_of_columns_ as random values.
 * 
 *  \brief Both of these values are set in the area between 3 and 10
 */

/** \fn Tic_Tac_Toe::Tic_Tac_Toe(int n, int m)
 *  \brief Constructor for field that sets num_of_rows_ to n and num_of_columns_ to m.
 * 
 *  \param n Number of rows
 *  \param m Number of columns
*/

/** \fn void Tic_Tac_Toe::init_field()
 *  \brief Function that initialises field of size num_of_rows_ * num_of_columns_.
 */

/** \fn void Tic_Tac_Toe::play_game()
 *  \brief Function with main game logic.
 * 
 *  \brief In this function we are placing symbols, getting input from user and checking win. In the end we free memory.
 */

/** \fn void Tic_Tac_Toe::show_field()
 *  \brief Function that shows the field.
 */

/** \fn int Tic_Tac_Toe::get_input(int input)
 *  \brief Function that gets user input and checks for false input.
 * 
 *  \brief If input is false we say about this to user and ask him to correct his input.
 *  \param input Input from user.
 */

/** \fn bool Tic_Tac_Toe::check_spot(int coordinate)
 *  \brief Function that checks if spot is occupied or exists.
 * 
 *  \brief If is free returns false.
 *  \param coordinate Coordinate, that should be checked.
 */

/** \fn bool Tic_Tac_Toe::check_win()
 *  \brief Function that checks direction combination in 8 directions.
 * 
 *  \brief Win is decided by the result of checking win in directions. If gotten combination is great or equal to 3 it is win,
 *  else it isn't.
 */

/** \fn int Tic_Tac_Toe::check_direction_combination(int x, int y, char dir, int delta, int prev_x, int prev_y)
 *  \brief Function that recursively checks for win in the direction.
 * 
 *  \brief For moving in different direction we need different signs for incrementation. We get these signs from
 *  \brief get_vector_signs method.
 *  \brief We get new coordinates based on the old ones and then recursively check for the current symbol, avoiding returning on the 
 *  \brief visited spot.
 *  \brief If symbol on the spot is the current symbol, we increment delta value by 1, else we return 0, exept from case, when we 
 *  \brief visited any spots previosly.
 *  \param x Current horizontal coordinate
 *  \param y Current vertical coordinate
 *  \param dir Direction of checking
 *  \param delta Combination value. Can be 3 in horizontal and vertical cases, 4 in diagonal
 *  \param prev_x Previous horizontal coordinate
 *  \param prev_y Previous vertical coordinate
 */

/** \fn std::vector<int> Tic_Tac_Toe::get_direction_signs(char dir)
 *  \brief Function that gives vector(array) of direction signs.
 * 
 *  \brief We need this direction signs for moving on the field.
 *  \param dir Name of direction. h - horizontal, v - vertical, l - diagonal fro left to right, r - diagonal from right to left.
 */

/** \fn void Tic_Tac_Toe::finish_game()
 *  \brief Function that checks for draw and shows winner symbol and number of turns for acomplishing win. Frees memory
 *  in the end.
 */

#include<iostream>
#include<vector>

#define NOUGHT 'O'
#define CROSS 'X'
#define EMPTY_SPOT '-'

class Tic_Tac_Toe{
    private:
    char* field_;
    char current_symbol_;
    int turns_ = 1, num_of_rows_ = 0, num_of_columns_ = 0, field_size_ = 0, 
    vertical_coordinate_ = 0, horizontal_coordinate_ = 0, spot_coordinate_ = 0;

    public:
    Tic_Tac_Toe() {
        srand(time(NULL));
        num_of_rows_ = 3 + rand() % 8;
        num_of_columns_ = 3 + rand() % 8;
    }

    Tic_Tac_Toe(int n, int m) {
        num_of_rows_ = n;
        num_of_columns_ = m;
    }

    void init_field() {
        field_size_ = num_of_rows_ * num_of_columns_;
        std::cout << "Field is " << num_of_columns_ << " by " << num_of_rows_ << std::endl;
        field_ = new char[field_size_];
        for(int i = 0; i < field_size_; i++){
            field_[i] = EMPTY_SPOT;
        }
    }

    void play_game() {
        while (turns_ != field_size_ + 1) {
            show_field();
            current_symbol_ = turns_ % 2 ? CROSS : NOUGHT;

            std::cout << "Choose the spot(First number is number of a column and second - number of a row)" << std::endl;
            do {
                horizontal_coordinate_ = this->get_input(horizontal_coordinate_) - 1;
                vertical_coordinate_ = this->get_input(vertical_coordinate_) - 1;
                spot_coordinate_ = horizontal_coordinate_ + vertical_coordinate_ * num_of_columns_;
            } while(this->check_spot(spot_coordinate_));

            field_[spot_coordinate_] = current_symbol_;
            turns_++;

            if (this->check_win()){
                this->show_field();
                break;
            } 
            std::cout << std::endl;
        }
        this->finish_game();
    }

    private:
    void show_field() {
        for(int i = 0, line = 1; i < field_size_; i++) {
            if(i == num_of_columns_ * line) {
                std::cout << "\n";
                line++;
            }
            std::cout << field_[i];
        }
        std::cout << "\n";
    }

    int get_input(int input) {
        std::cin >> input;
        while(input <= 0 || std::cin.fail() || input > num_of_columns_ || input > num_of_rows_){
            std::cout << "Wrong input " << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin >> input;
        }
        return input;
    }

    bool check_spot(int coordinate) {
        return (this->field_[coordinate] != EMPTY_SPOT || coordinate < 0 || coordinate > this->field_size_);
    }

    bool check_win() {
        return this->check_direction_combination(horizontal_coordinate_, vertical_coordinate_, 'v', 1, horizontal_coordinate_, vertical_coordinate_) >= 3 ||
               this->check_direction_combination(horizontal_coordinate_, vertical_coordinate_, 'h', 1, horizontal_coordinate_, vertical_coordinate_) >= 3 ||
               this->check_direction_combination(horizontal_coordinate_, vertical_coordinate_, 'r', 1, horizontal_coordinate_, vertical_coordinate_) >= 3 ||
               this->check_direction_combination(horizontal_coordinate_, vertical_coordinate_, 'l', 1, horizontal_coordinate_, vertical_coordinate_) >= 3;
    }

    int check_direction_combination(int x, int y, char dir, int delta, int prev_x, int prev_y) {
        std::vector<int> signs = get_direction_signs(dir);

        if (field_[x + y * num_of_columns_] == current_symbol_ && x >= 0 && y >= 0 && x < num_of_columns_ && y < num_of_rows_) {
            int new_x1 = x + 1 * signs[0];
            int new_y1 = y + 1 * signs[1];
            int new_x2 = x + 1 * signs[2];
            int new_y2 = y + 1 * signs[3];
            
            if (!(new_x1 == prev_x && new_y1 == prev_y)) {
                delta += check_direction_combination(new_x1, new_y1, dir, delta, x, y);
            }
            if (!(new_x2 == prev_x && new_y2 == prev_y)) {
                delta += check_direction_combination(new_x2, new_y2, dir, delta, x, y);
            }
        }
        else {
            return 0;
        }
        return delta;
    }

    std::vector<int> get_direction_signs(char dir) {
        if (dir == 'h') return {-1, 0, 1, 0};
        if (dir == 'v') return {0, -1, 0, 1};
        if (dir == 'l') return {-1, -1, 1, 1};
        if (dir == 'r') return {1, -1, -1, 1};
        return {};
    }

    void finish_game(){
        if (turns_ == field_size_ + 1) std::cout << "\nDRAW" << std::endl; 
        else std::cout << "\n" << current_symbol_ << " has won in " << turns_ << " turns" << std::endl;
        delete []field_;
    }
};
