#include <iostream>
#include <fstream>

int main(void)
{
    std::fstream myFile;

    myFile.open("doc.text", std::ios::out);  // write mode : overwrite old data each time

    if (myFile.is_open())
    {
        myFile << "Hello World!\n";
        myFile << "Zacharia is HERE.\n";
        myFile << "Goodbyee!\n";
    }

    myFile.close();

    return (0);
}
