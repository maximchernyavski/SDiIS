#include<iostream>
#include<vector>

#define NOUGHT 'O'
#define CROSS 'X'
#define EMPTY_SPOT '-'

class mockTTC;

class Tic_Tac_Toe{
    private:
    char* field_;
    char current_symbol_;
    int turns_ = 1, n_ = 0, m_ = 0, field_size_ = 0, 
    vertical_ = 0, horizontal_ = 0, coordinate_ = 0;

    public:
    Tic_Tac_Toe(){
        n_ = 3;
        m_ = 3;
    }

    Tic_Tac_Toe(int n, int m) {
        n_ = n;
        m_ = m;
    }

    void init_field() {
        field_size_ = n_ * m_;
        field_ = new char[field_size_];
        for(int i = 0; i < field_size_; i++){
            field_[i] = EMPTY_SPOT;
        }
    }

    void play_game() {
        while (turns_ != field_size_ + 1) {
            show_field();
            current_symbol_ = turns_ % 2 ? CROSS : NOUGHT;

            std::cout << "Choose the spot" << std::endl;
            do {
                horizontal_ = this->get_input(horizontal_) - 1;
                vertical_ = this->get_input(vertical_) - 1;
                coordinate_ = horizontal_ + vertical_ * m_;
            } while(this->check_spot(coordinate_));

            field_[coordinate_] = current_symbol_;
            this->show_field();
            turns_++;

            if (this->check_win()) break;
        }
        this->finish_game();
    }
    private: 

    void show_field() {
        for(int i = 0, line = 1; i < field_size_; i++) {
            if(i == m_ * line) {
                std::cout << "\n";
                line++;
            }
            std::cout << field_[i];
        }
        std::cout << "\n";
    }

    int get_input(int input) {
        if(input < 0 || std::cin.fail() || input > m_ || input > n_){
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return 0;
        }
        return input;
    }

    bool check_spot(int coordinate) {
        return (this->field_[coordinate] != EMPTY_SPOT || coordinate < 0 || coordinate > this->field_size_);
    }

    bool check_win() {
        return this->check_direction_combination(horizontal_, vertical_, 'v', 1, horizontal_, vertical_) >= 3 ||
               this->check_direction_combination(horizontal_, vertical_, 'h', 1, horizontal_, vertical_) >= 3 ||
               this->check_direction_combination(horizontal_, vertical_, 'r', 1, horizontal_, vertical_) >= 3 ||
               this->check_direction_combination(horizontal_, vertical_, 'l', 1, horizontal_, vertical_) >= 3;
    }

    int check_direction_combination(int x, int y, char dir, int delta, int prev_x, int prev_y) {
        std::vector<int> signs = get_direction_signs(dir);

        if (field_[x + y * m_] == current_symbol_ && x >= 0 && y >= 0 && x < m_ && y < n_) {
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
    friend class mockTTC;
};
