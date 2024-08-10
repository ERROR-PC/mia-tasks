#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <forward_list>
#include <string>
#include <cctype>
#include <iterator>
#include <list>
#include <deque>
#include <functional>
#include <numeric>
#include <random>
#include <cstdint>
#include <cstdlib>

int main(int argc, char* argv[]) {
    size_t rows_count;
    size_t cols_count;
    std::cin >> rows_count;
    std::cin >> cols_count;

    size_t justice_wins = 0;
    size_t villian_wins = 0;

    std::vector<std::vector<int>> justice_cells;
    // allocate enough memory for columns
    justice_cells.reserve(rows_count);
    for (size_t row = 0; row < rows_count; ++row) {
        // create a column
        std::vector<int> column;
        // allocate enough memory for cells
        column.reserve(cols_count);

        justice_cells.push_back(column);
        for (size_t col = 0; col < cols_count; ++col) {
            int curr_cell;
            std::cin >> curr_cell;

            justice_cells[row].push_back(curr_cell);
        }
    }

    // iterate over villian cells, and count wins
    for (size_t row = 0; row < rows_count; ++row) {
        for (size_t col = 0; col < cols_count; ++col) {
            int curr_villian_cell;
            std::cin >> curr_villian_cell;

            // compare to find winner, ignore ties
            if (justice_cells[row][col] > curr_villian_cell) {
                justice_wins++;
            } else if (justice_cells[row][col] < curr_villian_cell) {
                villian_wins++;
            }
        }
    }

    // determine winner and print output
    if (justice_wins > villian_wins) {
        std::cout << "Justice League" << std::endl;
    } else if (justice_wins < villian_wins) {
        std::cout << "Villains" << std::endl;
    } else {
        std::cout << "Tie" << std::endl;
    }
    
    return 0;
}
