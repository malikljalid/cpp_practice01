#include <iostream>
#include <vector>
#include <limits>

int readUserQuantity(void)
{
    int Quantity;

    std::cout << "How many numbers you want to enter : ";
    std::cin >> Quantity;

    return (Quantity);
}

int readNumber(void)
{
    int Number;

    std::cout << "Please enter the number : ";
    std::cin >> Number;

    return (Number);
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

void printVector(std::vector<int> &vNumbers)
{
    std::cout << "\n\nVector content : \n";
    for (int &Number : vNumbers)
        std::cout << Number << std::endl;
}

void fillVector(std::vector<int> &vNumbers)
{
    bool userWantAddMore = true;

    while (userWantAddMore)
    {
        int Quantity = readUserQuantity();

        while (Quantity--)
            vNumbers.push_back(readNumber());
    
        userWantAddMore = askUserIfWantAddMore();
    }
    printVector(vNumbers);
}

int main(void)
{
    std::vector<int> vNumbers;

    fillVector(vNumbers);

    return (0);
}
