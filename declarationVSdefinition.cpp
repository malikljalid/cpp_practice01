#include <iostream>
#include <string>

//  	declaration or prototype of function1
int 		maxOf(int, int);
// 	declaration or prototype of function2
std::string 	between(int, int);

int main(void)
{
	std::cout << between(13, 20) << maxOf(13, 20) << std::endl;

	return (0);
}

//	definition of function1
int maxOf(int a, int b)
{
	int max = (a >= b) ? a : b;

	std::cout << "Max is : " ;

	return (max);
}

//	definition of function2
std::string between(int a, int b)
{
	std::string msg;

	msg = "between " + std::to_string(a) + " and " + std::to_string(b) + ", ";

	return (msg);
}

