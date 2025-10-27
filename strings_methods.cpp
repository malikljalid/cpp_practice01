#include <iostream>
#include <string>

int main(void)
{
    std::string S1 = "My name is Zakaria The killer, i love programming.";

    std::cout << "Length of S1 : " << S1.length() << std::endl;

    std::cout << "Character at pos 7 : " << S1[3] << std::endl;
    std::cout << "Character at pos 7 : " << S1.at(3) << std::endl;

    S1.append(" HELLO WORLD!");
    std::cout << "S1 : " << S1 << std::endl;

    S1.insert(7, " Moses ");      //  insert moses at  pos 7 of S1
    std::cout << "S1 : " << S1 << std::endl;

    std::cout << "5 character from pos 8 of S1 : " << S1.substr(8, 5) << std::endl;  // return 5 length string from pos 9 of S1

    S1.push_back('Z');
    std::cout << "S1 :" << S1 << std::endl;

    S1.pop_back();
    std::cout << "S1 :" << S1 << std::endl;

    int Found = S1.find("Zakaria");
    if (Found == S1.npos)
        std::cout << "Not found !\n";
    else
        std::cout << "\"Zakaria\" found at pos : " << Found << std::endl;

    Found = S1.find("Jack");
    if (Found == S1.npos)
        std::cout << "Not found in S1!\n";
    else
        std::cout << "\"Jack\" found at pos : " << Found << std::endl;

    S1.clear(); // clear the entire string to ""

    return (0);
}
