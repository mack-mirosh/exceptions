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
    if (!isalpha(start)) {
        throw invalidCharacterException();
    }

    char target = start + offset;

    if (!isalpha(target)) {
        throw invalidRangeException();
    }

    if (isupper(start) && islower(target)) {
        throw invalidRangeException();
    }
    if (islower(start) && isupper(target)) {
        throw invalidRangeException();
    }

    return target;
}