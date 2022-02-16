cmake_minimum_required(VERSION 3.21)
project(sort_comparison)

set(CMAKE_CXX_STANDARD 17)


add_executable(
        lulu_sorts
        main.cpp
        lib/SelectionSort.cpp
        lib/BubbleSort.cpp
        lib/InsertionSort.cpp
        lib/BinarySearch.cpp
        lib/CountingSort.cpp
        lib/RadixSort.cpp
        lib/Funcs.cpp)

target_include_directories(
        lulu_sorts
        PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)
