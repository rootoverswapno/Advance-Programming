#include <iostream>
#include <string>
using namespace std;

int main() {
    string com;
    bool isComment = false;

    cout << "Enter comment: ";
    getline(cin, com);  // safe input

    if (com.size() >= 2 && com[0] == '/') {
        if (com[1] == '/') {
            cout << "It is a comment\n";
            isComment = true;
        } else if (com[1] == '*') {
            // Check for closing */
            for (size_t i = 2; i < com.size() - 1; ++i) {
                if (com[i] == '*' && com[i + 1] == '/') {
                    cout << "It is a comment\n";
                    isComment = true;
                    break;
                }
            }
        }
    }

    if (!isComment)
        cout << "It is not a comment\n";

    return 0;
}
