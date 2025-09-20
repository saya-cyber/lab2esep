#include <iostream>
using namespace std;

int main() {
    int D, M;
    cout << "D = "; cin >> D;
    cout << "M = "; cin >> M;

    bool qate = false;

    
    int maxDays;
    switch(M) {
        case 1: case 3: case 5: case 7:
        case 8: case 10: case 12:
            maxDays = 31; break;
        case 4: case 6: case 9: case 11:
            maxDays = 30; break;
        case 2:
            maxDays = 28; break;
        default:
            qate = true; 
    }

   
    if (D < 1 || D > maxDays)
        qate = true;

    if (qate) {
        cout << "Qate";
        return 0;
    }

    
    if (D == maxDays) {
        D = 1;
        M = (M == 12) ? 1 : M + 1;
    } else {
        D++;
    }

    cout << D << "." << M;
    return 0;
}
