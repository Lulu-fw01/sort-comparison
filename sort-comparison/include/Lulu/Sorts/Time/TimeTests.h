//
// Created by luka on 23.02.2022.
//

#ifndef SORT_COMPARISON_TIMETESTS_H
#define SORT_COMPARISON_TIMETESTS_H

#include <vector>
#include <fstream>

namespace Lulu::Sorts::Time {

    void testSorts(const std::vector<int>& arr, std::ofstream& outputStream);

    void timeTest1(std::ofstream& outputStream);

    void timeTest2(std::ofstream& outputStream);

    void timeTest3(std::ofstream& outputStream);

    void timeTest4(std::ofstream& outputStream);

}

#endif //SORT_COMPARISON_TIMETESTS_H
