#include <iostream>

using namespace std;

int main()
{
    int a,b,s,r,i;
    float j;
    cout << "Podaj 2 liczby calkowite" << endl;
    cin >> a >> b;
    s=a+b;
    r=a-b;
    i=a*b;
    j=(float)a/b;
    cout <<"suma "<< s << endl;
    cout <<"roznica "<< r << endl;
    cout <<"iloczyn "<< i << endl;
    cout <<"iloraz "<< j << endl;
    return 0;
}
