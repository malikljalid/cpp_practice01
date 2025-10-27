#include <iostream>
#include <fstream>

int main(void)
{
    std::fstream myFile;
    
    myFile.open("doc.txt", std::ios::app); // append mode

    // or you can do :
    //myFile.open("doc.txt", std::ios::out | std::ios::app);
    // this does write mode in conjuction with append.. so if the file does not exist it creates it and if not it append to it
    // but the std::ios::app mode --> seem to do it automatically

    if (myFile.is_open())
    {
        myFile << "Lets DO some cpp coding !\n";
        myFile << "Nah fuck cplusplus.\n";
    }

    myFile.close();

    return (0);
}
