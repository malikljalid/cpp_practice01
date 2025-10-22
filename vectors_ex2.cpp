#include <iostream>
#include <vector>
#include <limits>

struct stEmployee
{
    std::string     FirstName;
    std::string     LastName;
    int             Salary;
};

int readUserQuantity(void)
{
    int Quantity;

    std::cout << "How many numbers you want to enter : ";
    std::cin >> Quantity;

    return (Quantity);
}

stEmployee readEmployee(void)
{
    stEmployee Employee;

    std::cout << std::endl;

    std::cout << "Please enter the employee First Name: ";
    std::cin >> Employee.FirstName;

    std::cout << "Please enter the employee Last Name : ";
    std::cin >> Employee.LastName;

    std::cout << "Please enter the employee Salary : ";
    std::cin >> Employee.Salary;

    std::cout << std::endl;

    return (Employee);
}

bool askUserIfWantAddMore(void)
{
    char Choice;

    std::cout << "Do you want to add more (Y/N): ";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin >> Choice;

    if (Choice == 'y')
        return (true);
    if (Choice == 'n')
        return (false);
    else
        return (askUserIfWantAddMore());
}

void printEmployee(stEmployee &Employee)
{
    std::cout << "First Name : " << Employee.FirstName << std::endl;
    std::cout << "Last Name  : " << Employee.LastName << std::endl;
    std::cout << "Salary     : " << Employee.Salary << std::endl;
    std::cout << std::endl;
}

void printVector(std::vector<stEmployee> &vEmployees)
{
    std::cout << "\n\nVector content : \n";
    for (stEmployee &Employee : vEmployees)
        printEmployee(Employee);
}

void fillVector(std::vector<stEmployee> &vEmployees)
{
    bool userWantAddMore = true;

    while (userWantAddMore)
    {
        int Quantity = readUserQuantity();

        while (Quantity--)
            vEmployees.push_back(readEmployee());
    
        userWantAddMore = askUserIfWantAddMore();
    }
}

int main(void)
{
    std::vector<stEmployee> vEmployees;

    fillVector(vEmployees);
    printVector(vEmployees);

    return (0);
}
