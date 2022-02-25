cmake_minimum_required(VERSION 3.21)
project(sort_comparison)

set(CMAKE_CXX_STANDARD 17)


add_executable(
        lulu_sorts
        main.cpp
        src/SelectionSort.cpp
        src/BubbleSort.cpp
        src/InsertionSort.cpp
        src/BinarySearch.cpp
        src/CountingSort.cpp
        src/RadixSort.cpp
        src/Funcs.cpp
        src/MergeSort.cpp
        src/QuickSort.cpp
        src/HeapSort.cpp
        src/NoteTime.cpp
        src/TimeTests.cpp)

target_include_directories(
        lulu_sorts
        PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)
