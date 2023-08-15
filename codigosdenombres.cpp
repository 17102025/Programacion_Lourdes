#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int vectorN[5];
    for (int i = 0; i < 5; i++) {
        cin >> vectorN[i];
    }

    int vectorR[5];
    for (int i = 0; i < 5; i++) {
        vectorR[i] = vectorN[i] * 2;
    }

    cout << "Primer vector:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << vectorN[i] << " ";
    }
    cout << endl;

    cout << "Segundo vector:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << vectorR[i] << " ";
    }
    cout << endl;

    return 0;
}
