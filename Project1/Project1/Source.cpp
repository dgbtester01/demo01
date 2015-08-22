//
// demo project
//

#include <iostream>
#include <string>

int main()
{
	std::cout << "Game Over\n";
	std::string name;

	std::cout << "please enter your name:\n";

	std::cin >> name;

	std::cout << "Hello " << name << std::endl;
	// debug cludge
	getchar();
	getchar();
}