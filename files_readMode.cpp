#include <iostream>
#include <fstream>

void writeInFile(std::string fileName, std::fstream &file)
{
    file.open(fileName, std::ios::out);

    if (file.is_open())
    {
        file << "Hello world.\n";
        file << "you are AMAZING !\n";
        file << "at least this how i try to see you ?\n";
    }

    file.close();
}

void readFile(std::string fileName, std::fstream &file)
{
    file.open(fileName, std::ios::in);  // read ONLY mode

    if (file.is_open())
    {
        std::string Line;

        while (getline(file, Line))
            std::cout << Line << std::endl;
    }

    file.close();
}

int main(void)
{
    std::fstream myFile;
    
    writeInFile("doc.txt", myFile);
    readFile("doc.txt", myFile);

    return (0);
}
