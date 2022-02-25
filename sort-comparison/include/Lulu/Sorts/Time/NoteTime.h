//
// Created by luka on 22.02.2022.
//

#ifndef SORT_COMPARISON_NOTETIME_H
#define SORT_COMPARISON_NOTETIME_H

#include <vector>

namespace Lulu::Sorts::Time {

    long long noteTheTime(void(*sortFunction) (std::vector<int> &), const std::vector<int>& array);
}

#endif //SORT_COMPARISON_NOTETIME_H
