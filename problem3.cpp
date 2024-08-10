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
    size_t arr_size;
    std::cin >> arr_size;

    int max_height;
    // assume the first element is max
    // update max later inside loop
    std::cin >> max_height;

    // iterate over remaining elements
    // if a new maximum is found, update max
    for (size_t i = 1; i < arr_size; ++i) {
        int curr_num;
        std::cin >> curr_num;

        // if the input is larger than the maximum
        // then the input IS the maximum
        if (curr_num > max_height) {
            max_height = curr_num;
        }
    }
    
    // output result to user
    std::cout << max_height << std::endl;
    
    return 0;
}
