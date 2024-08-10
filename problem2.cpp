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

/**
 * Returns the index of target_num in arr, or -1 if not found
 */
int64_t get_index(std::vector<int> arr, int target_num) {
    // perform linear search to find the number
    // inside an un-sorted array
    for (size_t i = 0; i < arr.size(); ++i) {
        if (target_num == arr[i]) {
            // found
            return i;
        }
    }
    // not found
    return -1;
}

int main(int argc, char* argv[]) {
    size_t arr_size;
    std::cin >> arr_size;
    
    std::vector<int> array;
    // allocate enough memory for array
    array.reserve(arr_size);
    // populate array with input
    for (size_t i = 0; i < arr_size; ++i) {
        int curr_int;
        std::cin >> curr_int;

        array.push_back(curr_int);
    }

    // input value to search for
    int target_num;
    std::cin >> target_num;

    int64_t result = get_index(array, target_num);
    
    // output result to user
    std::cout << result << std::endl;
    
    return 0;
}
