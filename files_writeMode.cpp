#include <iostream>
#include <fstream>

int main(void)
{
    std::fstream myFile;

    myFile.open("doc.text", std::ios::out);

    if (myFile.is_open())
    {
        myFile << "Hello World!\n";
        myFile << "Zacharia is HERE.\n";
        myFile << "Goodbyee!\n";
    }

    myFile.close();

    return (0);
}
