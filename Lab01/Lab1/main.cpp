#include <iostream>
#include <string>
using namespace std;

int main() {
	string nameOfUser;
	std::cout << "Hello, what is your name? ";
	getline(cin, nameOfUser);
	std::cout << "Greetings, " << nameOfUser << ", from a C++ program\n";

	return 0;
}