#include <iostream>
#include <vector>

struct stEmployee
{
    std::string     FirstName;
    std::string     LastName;
    int             Salary;
};

stEmployee setEmployee(std::string FirstName, std::string LastName, int Salary)
{
    stEmployee Employee;

    Employee.FirstName = FirstName;
    Employee.LastName  = LastName;
    Employee.Salary    = Salary;

    return (Employee);
}

void printEmployee(stEmployee &Employee)
{
    std::cout << "First Name : " << Employee.FirstName << std::endl;
    std::cout << "Last Name  : " << Employee.LastName << std::endl;
    std::cout << "Salary     : " << Employee.Salary << std::endl;
    std::cout << std::endl;
}

int main(void)
{
    std::vector <stEmployee>    vEmployees;
    stEmployee                  tmpEmployee;

    tmpEmployee = setEmployee("Zachariah", "The killer", 7000);
    vEmployees.push_back(tmpEmployee);

    tmpEmployee = setEmployee("Jack", "Lacroix", 100000);
    vEmployees.push_back(tmpEmployee);

    tmpEmployee = setEmployee("Lionel", "Andreas Messi", 800000);
    vEmployees.push_back(tmpEmployee);

    vEmployees.push_back(setEmployee("Pep", "Guardiola", 40000));
    vEmployees.push_back(setEmployee("Jose", "Murinho", 20000));

    for (stEmployee &Employee : vEmployees)
        printEmployee(Employee);

    return (0);
}