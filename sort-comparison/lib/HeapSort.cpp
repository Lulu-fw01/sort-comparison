//
// Created by luka on 22.02.2022.
//

#include "Lulu/Sorts/HeapSort.h"

/**
 * @brief Heap sort function.
 *
 * @param array -link to int vector.
 * */
void Lulu::Sorts::heapSort(std::vector<int> &array) {
    Lulu::Sorts::BinaryHeap heap(array);
    heap.sort();
}

/**
 *  Get parent index of element.
 *
 *  @param son -index of son element.
 *
 *  @return parent index.
 * */
int Lulu::Sorts::BinaryHeap::getParent(int son) {
    if (son % 2 == 0) {
        return (son - 2) / 2;
    }
    return (son - 1) / 2;
}

/**
 * @brief Method for fixing heap after insert operation.
 *
 * */
void Lulu::Sorts::BinaryHeap::fixHeap(int position) {
    int parent = getParent(position);
    while (parent >= 0 && m_heap[parent] < m_heap[position]) {
        std::swap(m_heap[parent], m_heap[position]);
        position = parent;
        parent = getParent(position);
    }
}

/**
 * @brief Method which calls after swapping
 * max elem with another one.
 *
 * */
void Lulu::Sorts::BinaryHeap::fixAfterGettingMax(int border) {
    int curr = 0;
    int next = m_heap[1] > m_heap[2] ? 1 : 2;
    if (2 >= border) {
        next = 1;
    }
    if (1 >= border) {
        return;
    }
    int nextLeft, nextRight;
    // Move first element down.
    while (next < border && m_heap[next] > m_heap[curr]) {
        std::swap(m_heap[next], m_heap[curr]);
        curr = next;
        nextLeft = 2 * curr + 1;
        nextRight = 2 * curr + 2;
        if (nextLeft >= border) {
            next = nextRight;
        } else if (nextRight >= border) {
            next = nextLeft;
        } else {
            if (m_heap[nextRight] > m_heap[nextLeft]) {
                if (nextRight >= border) {
                    next = nextLeft;
                } else {
                    next = nextRight;
                }
            } else {
                if (nextLeft >= border) {
                    next = nextRight;
                } else {
                    next = nextLeft;
                }
            }
        }
    }
}

Lulu::Sorts::BinaryHeap::BinaryHeap(std::vector<int> &array) : m_original(array) {
    m_original = array;
    for (auto elem : array) {
        add(elem);
    }
}

/**
 * @brief Add element into heap.
 *
 * @param elem -value of element.
 * */
void Lulu::Sorts::BinaryHeap::add(int elem) {
    m_heap.push_back(elem);
    fixHeap(m_heap.size() - 1);
}

/**
 * @brief Heap sort method.
 * */
void Lulu::Sorts::BinaryHeap::sort() {
    if (m_heap.size() == 2) {
        std::swap(m_heap[0], m_heap[1]);
        m_original = m_heap;
        return;
    }
    for (auto i = m_heap.size() - 1; i > 0; --i) {
        // Swap current element with current maximum.
        std::swap(m_heap[0], m_heap[i]);
        fixAfterGettingMax(i);
    }
    m_original = m_heap;
}
