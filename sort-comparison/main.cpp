#include <iostream>
#include <vector>
#include "Lulu/Sorts/SelectionSort.h"

void output(const std::vector<int>& vec) {
    for (auto elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> vec{7, 5, 32, 54, 8, 90, 3, 45, 6, 78, 4, 108, 203, 0};
    Lulu::Sorts::selectionSort(vec);
    output(vec);

    return 0;
}
