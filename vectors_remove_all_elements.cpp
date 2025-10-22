#include <iostream>
#include <vector>

int main(void)
{
    std::vector <int> vNumbers;

    vNumbers.push_back(13);
    vNumbers.push_back(20);
    vNumbers.push_back(6);

    std::cout << "Stack size now : " << vNumbers.size() << std::endl;

    vNumbers.pop_back();                    // now lets try to remove all the elements of the vector by manualy calling pop 3 times
    vNumbers.pop_back();
    vNumbers.pop_back();

    std::cout << "Stack size now : " << vNumbers.size() << std::endl;




    vNumbers.push_back(20);                 // method 2 : lets fill the vector again
    vNumbers.push_back(13);
    vNumbers.push_back(6);

    std::cout << "Stack size now : " << vNumbers.size() << std::endl;

    while (vNumbers.size() > 0)
        vNumbers.pop_back();

    std::cout << "Stack size now : " << vNumbers.size() << std::endl;




    
    vNumbers.push_back(20);                 // method 3 : lets fill the vector again
    vNumbers.push_back(13);
    vNumbers.push_back(6);

    std::cout << "Stack size now : " << vNumbers.size() << std::endl;
    
    vNumbers.clear();

    std::cout << "Stack size now : " << vNumbers.size() << std::endl;


    return (0);
}
