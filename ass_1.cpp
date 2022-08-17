#include <iostream>

using namespace std;

int main() {

    char ch;

    cout << "Enter tha character : ";
    cin >> ch;

	if(ch >= '0' && ch <= '9') {

        cout << endl << ch << " is character.";

    } else {

        cout << endl << ch << " is not character.";

    }

    return 0;
}
