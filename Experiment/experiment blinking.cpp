#include <iostream>
#include <windows.h>
using namespace std;
int main() {
//    const
	 int blinkInterval = 250; // milliseconds

    while (true) {
        // Display the blinking text
		cout << "\rBlinking Text";

        // Wait for the specified interval
        Sleep(blinkInterval);

        // Clear the text
		cout << "\r              ";

        // Wait for the specified interval
        Sleep(blinkInterval);
    }

    return 0;
}

