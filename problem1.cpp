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
    int row_count;
    std::cin >> row_count;

    for (int i = 1; i <= row_count; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    
    return 0;
}
