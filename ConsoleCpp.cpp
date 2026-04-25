#include <iostream>
#include <string>
#include <ctime>
#include <vector>

using namespace std;

void show_all(const vector<string>& text) {
    if (!text.empty()) {
        for (size_t i = 0; i < text.size(); i++) {
            cout << text[i] << " ";
        }
    } else {
        cout << "empty";
    }
    cout << endl;
}

int main() {


    show_all({"hello 1","hello 2","hello 3","hello 4","hello 5"});

    return 0;
}
