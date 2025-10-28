#include <iostream>
#include <fstream>
#include <vector>

void writeInFile(std::string fileName, std::fstream &file)
{
    file.open(fileName, std::ios::out);

    if (file.is_open())
    {
        file << "Hello world.\n";
        file << "Suuuka suka !\n";
        file << "are U crazy enough to get the last round ?\n";

        file.close();
    }
}

void loadToVector(std::string fileName, std::fstream &file, std::vector <std::string> &vFileContent)
{
    file.open(fileName, std::ios::in);

    if (file.is_open())
    {
        std::string Line;

        while (getline(file, Line))
            vFileContent.push_back(Line);
        file.close();
    }
}

void printVector(std::vector <std::string> &vFileContent)
{
    std::vector <std::string>::iterator iter;

    for (iter = vFileContent.begin(); iter != vFileContent.end(); iter++)
        std::cout << *iter << std::endl;
}

int main(void)
{
    std::fstream                myFile;
    std::vector <std::string>   vFileContent;

    writeInFile("doc.txt", myFile);
    loadToVector("doc.txt", myFile, vFileContent);

    printVector(vFileContent);
    return (0);
}
