#ifndef BINARY_SEARCH_HPP
#define BINARY_SEARCH_HPP
#include <array>

extern "C"{
    #include "stdint.h"
}
template<class T, std::size_t SIZE>
class binarySearch
{
public:
    int32_t Get_Index(std::array<T, SIZE> &l_array);
};




#endif //End of BINARY_SEARCH_HPP