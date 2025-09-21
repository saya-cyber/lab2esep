#include <iostream>
#include <cstring> 
using namespace std;

int main() {
    char text[200];
    cout << "Jol: ";
    cin.getline(text, 200);

    int len = strlen(text); 

    
    for (int i = len - 1; i >= 0; i--) {
        cout << text[i];
    }
    cout << endl;

    return 0;
}

