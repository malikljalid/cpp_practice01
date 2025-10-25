#include <iostream>

int main(void)
{
    int     *StudentGrade;
    int     StudentsNumber;

    std::cout << "Please enter the number of Students : ";
    std::cin >> StudentsNumber;

    StudentGrade = new int[StudentsNumber];

    for (int i = 0; i < StudentsNumber; i++)
    {
        std::cout << "Please enter Student " << i + 1 << " Grade : ";
        std::cin >> StudentGrade[i];
    }

    for (int i = 0; i < StudentsNumber; i++)
        std::cout << "Student " << i + 1 << " Grade : " << StudentGrade[i] << std::endl;

    delete[] StudentGrade;

    return (0);
}
