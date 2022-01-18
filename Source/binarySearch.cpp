#include "binarySearch.hpp"
#include <iostream>

template class binarySearch<int32_t, 5>;

template<typename T, std::size_t SIZE>
int32_t binarySearch<T, SIZE>::Get_Index(std::array<T, SIZE> &l_array){
    int32_t l_size{0};
    l_size = l_array.size();
    return l_size;
}

template<typename T, std::size_t SIZE>
void binarySearch<T, SIZE>::GetValue(T l_value){
    std::cout << "print: " << l_value << std::endl;
}

