#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main() {
    double x = 39.82, hasil;
    hasil = floor(x);
    cout << "Floor of " << x << " = " << hasil << endl;

    x = -34.251;
    hasil = floor(x);
    cout << "Floor of " << x << " = " << hasil << endl;

    x = 0.71;
    hasil = floor(x);
    cout << "Floor of " << x << " = " << hasil << endl;

    _getch();
    return 0;
}