#include <iostream>
using namespace std;

int main() {
    string firstName, lastName;
    
    // Prompt user for input
    cout << "Input First Name: ";
    cin >> firstName;
    
    cout << "Input Last Name: ";
    cin >> lastName;
    
    // Output in reverse order
    cout << "Reversed Name: " << lastName << " " << firstName << endl;
    
    return 0;
}

