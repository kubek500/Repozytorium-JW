#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float a;
    cout << "podaj liczbe" << endl;
    cin >> a;
    cout << fixed << setprecision(1) << a << endl;
    cout << fixed << setprecision(3) << a << endl;
    cout  << fixed << setprecision(5) << a << endl;
    return 0;
}

