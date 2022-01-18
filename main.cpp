
#include <array>
#include <iostream>
#include "binarySearch.hpp"

binarySearch<int32_t, 5> objBinarySearch;
int main(){
    int32_t l_index{0};
    std::array<int32_t, 5L> l_arr{1, 2, 5, 78, 94};
    l_index = objBinarySearch.Get_Index(l_arr);
    objBinarySearch.GetValue(5);
    return 0;
}