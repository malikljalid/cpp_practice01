#include <iostream>
#include <fstream>
#include <vector>

std::fstream SaveVectorToFile(std::vector <std::string> &vListOfStudents, std::string fileName)
{
    std::fstream file;

    file.open(fileName, std::ios::out);

    if (file.is_open())
    {
        for (std::string &Line : vListOfStudents)
        {
            if (Line.empty() == false)
                file << Line << std::endl;
        }

        file.close();
    }

    return (file);
}

int main(void)
{
    std::fstream                myFile;
    std::vector <std::string>   vListOfStudents { "Joshwa", "Maxwell", "Garisha", "Jung" };

    myFile = SaveVectorToFile(vListOfStudents, "doc.txt");

    return (0);
}
