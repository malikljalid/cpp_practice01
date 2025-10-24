#include <iostream>

struct stEmployee
{
    std::string     Name;
    int             Salary;
};

int main(void)
{
    stEmployee Employee;
    stEmployee *ptr;

    Employee.Name   = "Zakaria the killer";
    Employee.Salary = 7000;

    std::cout << "Printing Employee infos using the employee itself : \n";
    std::cout << Employee.Name << std::endl;
    std::cout << Employee.Salary << std::endl;



    ptr = &Employee;

    std::cout << "\nPrinting Employee infos using a pointer pointing to it : \n";
    std::cout << ptr->Name << std::endl;
    std::cout << ptr->Salary << std::endl;
    return (0);
}
