#include <iostream>
#include <fstream>
#include <vector>

void fillStudentList(std::string fileName)
{
    std::fstream file;

    file.open(fileName, std::ios::out);

    if (file.is_open())
    {
        file << "Zakaria" << std::endl;
        file << "Marko" << std::endl;
        file << "Josh" << std::endl;
        file << "Eric" << std::endl;
        file << "Tan" << std::endl;
    
        file.close();
    }
}

void loadFileToVector(std::string fileName, std::vector <std::string> &vFileContent)
{
    std::fstream file;

    file.open(fileName, std::ios::in);

    if (file.is_open())
    {
        std::string Line;

        while (getline(file, Line))
            vFileContent.push_back(Line);

        file.close();
    }
}

void saveVectorToFile(std::string fileName, std::vector <std::string> &vFileContent)
{
    std::fstream file;

    file.open(fileName, std::ios::out);

    if (file.is_open())
    {
        std::vector <std::string>::iterator iter;

        for (iter = vFileContent.begin(); iter != vFileContent.end(); iter++)
        {
            if (*iter != "")
                file << *iter.base() << std::endl;
        }

        file.close();
    }
}

void setElemInVector(std::vector <std::string> &vFileContent, std::string Record, std::string newRecord)
{
    std::vector <std::string>::iterator iter;

    for (iter = vFileContent.begin(); iter != vFileContent.end(); iter++)
    {
        if (*iter == Record)
        {
           *iter = newRecord;
           break;
        }
    }
}

void updateRecordInFile(std::string fileName, std::string Record, std::string newRecord)
{
    std::vector <std::string> vFileContent;

    loadFileToVector(fileName, vFileContent);
    setElemInVector(vFileContent, Record, newRecord);
    saveVectorToFile(fileName, vFileContent);
}

int main(void)
{
    fillStudentList("doc.txt");

    updateRecordInFile("doc.txt", "Josh", "Joshwa");

    return (0);
}
