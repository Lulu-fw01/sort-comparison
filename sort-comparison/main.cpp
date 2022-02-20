#include <iostream>
#include <vector>
#include "Lulu/Sorts/BubbleSort.h"
#include "Lulu/Utils/Funcs.h"


int main() {
    std::vector<int> vec{7, 5, 32, 54, 8, 90, 3, 45, 7, 45, 901, 4, 2, 45, 44, 6, 78, 4, 108, 203, 1};
    Lulu::Sorts::bubbleSortClassic(vec);
    Lulu::Utils::printVector(vec);

    std::cout << (Lulu::Utils::isSorted(vec) ? "sorted" : "not sorted");

    return 0;
}
