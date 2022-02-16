#include <iostream>
#include <vector>
#include "LuluSorts/RadixSort.h"

void output(const std::vector<int>& vec) {
    for (auto elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> vec{6, 5, 3, 54, 6, 2, 1, 90, 34, 12};
    LuluSorts::radixSort(&vec);
    output(vec);

    return 0;
}
