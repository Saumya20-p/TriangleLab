#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter side a: ";
    cin >> a;
    cout << "Enter side b: ";
    cin >> b;
    cout << "Enter side c: ";
    cin >> c;

    if (a + b > c && a + c > b && b + c > a)
        cout << "Valid triangle" << endl;
    else
        cout << "Not a valid triangle" << endl;

    return 0;
}
