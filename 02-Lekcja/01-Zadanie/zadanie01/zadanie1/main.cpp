#include <iostream>

using namespace std;

int main()
{
    int a,b,c =0;
    cout << "podaj 3 liczby"<<endl;
    cin >> a >> b >> c ;
    int s =a+b+c;
    int r = a-b;
    int i = a*c;
    int j = c/b;
    float J = (float)a /b;
    cout << "suma " << s << endl;
    cout << "roznica " <<r<< endl;
    cout << "iloczyn " <<i<< endl;
    cout << "iloraz " <<J<< endl;

    return 0;
}
