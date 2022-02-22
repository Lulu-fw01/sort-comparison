//
// Created by luka on 22.02.2022.
//

#ifndef SORT_COMPARISON_HEAPSORT_H
#define SORT_COMPARISON_HEAPSORT_H

#include <vector>

namespace Lulu::Sorts {

    void heapSort(std::vector<int>&);

    class BinaryHeap {
    private:
        std::vector<int> m_heap;
        std::vector<int>& m_original;

        static int getParent(int);

        void fixHeap(int);

        void fixAfterGettingMax(int);

        void add(int);

    public:
        explicit BinaryHeap(std::vector<int> &array);

        void sort();
    };

};

#endif //SORT_COMPARISON_HEAPSORT_H
