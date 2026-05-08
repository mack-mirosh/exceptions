// Mack Miroshnychenko
// CIS 1202 800
// 5/8/26

#include <iostream>
#include <cctype>

using namespace std;

class invalidCharacterException {};
class invalidRangeException {};

char character(char start, int offset);

int main() {
    char start;
    int offset;
    char choice = 'y';

    while (choice == 'y' || choice == 'Y') {
        cout << "Start: ";
        cin >> start;
        cout << "Offset: ";
        cin >> offset;

        cout << "Test another? (y/n): ";
        cin >> choice;
    }

    return 0;
}

char character(char start, int offset) {
    
}