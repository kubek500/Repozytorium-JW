#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float a;
    int b;
    string c;
    cout << "podaj wzrost,wiek,imie" << endl;
        cin>>a>>b>>c;
      cout << fixed << setprecision(2) << a << endl;
      cout <<b<<endl;
      cout << c;
    return 0;
}
