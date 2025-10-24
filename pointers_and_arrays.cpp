#include <iostream>

int main(void)
{
    int arr[3] = { 13, 6, 20 };
    int *ptr;

    //ptr is equivalent to --> &arr[0]
    ptr = arr;  // now : ptr points to the array.. and he can walk through it

    // method 1 : using arrays form of a pointer
    std::cout << "\nAdresses of arr using ptr : \n";
    std::cout << "&ptr[" << 0 << "] = " << &ptr[0] << std::endl;
    std::cout << "&ptr[" << 1 << "] = " << &ptr[1] << std::endl;
    std::cout << "&ptr[" << 2 << "] = " << &ptr[2] << std::endl;

    std::cout << "\nValues of arr using ptr : \n";
    std::cout << "ptr[" << 0 << "] = " << ptr[0] << std::endl;
    std::cout << "ptr[" << 1 << "] = " << ptr[1] << std::endl;
    std::cout << "ptr[" << 2 << "] = " << ptr[2] << std::endl;


    // method 2 : using pointers way of dereferencing
    std::cout << "\nAdresses of arr using ptr : \n";
    std::cout << "&ptr[" << 0 << "] = " << ptr + 0 << std::endl;
    std::cout << "&ptr[" << 1 << "] = " << ptr + 1 << std::endl;
    std::cout << "&ptr[" << 2 << "] = " << ptr + 2 << std::endl;

    std::cout << "\nValues of arr using ptr : \n";
    std::cout << "ptr[" << 0 << "] = " << *(ptr + 0) << std::endl;
    std::cout << "ptr[" << 1 << "] = " << *(ptr + 1) << std::endl;
    std::cout << "ptr[" << 2 << "] = " << *(ptr + 2) << std::endl;

    std::cout << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cout << "&ptr[" << i << "] = " << ptr + i << std::endl;
        std::cout << "ptr[" << i << "] = " << *(ptr + i) << std::endl;
    }

    return (0);
}
