#include <iostream>
using namespace std;

int main() {
    char text[200];
    cout << "���: ";
    cin.getline(text, 200);   

    int count = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        char c = text[i];
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
            c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
            count++;
        }
    }

    cout << "������� ��������� ����: " << count << endl;
    return 0;
}

