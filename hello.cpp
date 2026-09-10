// Omar Abdelrazek - Assingment 1 - Hello World/Name

#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    cout << "Hello, World" << endl;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Hello, " << name << "!" << endl;
    return 0;
}