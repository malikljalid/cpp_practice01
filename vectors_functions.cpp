#include <iostream>
#include <vector>

int main(void)
{
    std::vector <int> vNumbers;

    vNumbers.push_back(20);
    vNumbers.push_back(6);
    vNumbers.push_back(13);

    std::cout << "Front of the vector    : " << vNumbers.front() << std::endl;
    std::cout << "Back  of the vector    : " << vNumbers.back() << std::endl;
    std::cout << "Size  of the vector    : " << vNumbers.size() << std::endl;
    std::cout << "Capacity of the vector : " << vNumbers.capacity() << std::endl; // the difference between capacity and size is that size means the number of elems in the vector while capacity means the number of elements the vecotr can hold without reallocating memory
    std::cout << "Is the vector empty ?  : " << vNumbers.empty() << std::endl;

    vNumbers.reserve(100);      // allow us to manually pre allocat amount of memory for our vector
    std::cout << "Capacity of the vector : " << vNumbers.capacity() << std::endl; // the difference between capacity and size is that size means the number of elems in the vector while capacity means the number of elements the vecotr can hold without reallocating memory
    vNumbers.shrink_to_fit();   // allow us to restore or reduce the wested amount of memory to fit the size of the vector, so the capacity becomes the exact same as size of the vector
    std::cout << "Capacity of the vector : " << vNumbers.capacity() << std::endl; // the difference between capacity and size is that size means the number of elems in the vector while capacity means the number of elements the vecotr can hold without reallocating memory

    return (0);
}
