#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout <<"Podaj  liczby"<<endl;
    cin >> a >> b;
    if(a>b)
    {
        cout << a <<"to wieksza liczba"<<endl;
        cout << b <<"to mniejsza liczba"<<endl;

    }
    else
    {
        cout << b <<"to wieksza liczba"<<endl;
        cout << a <<"to mniejsza liczba"<<endl;
    }
    if(a>5)
    {
        cout << a <<" jest wiêksza od 5"<<endl;

    }
    if(a==5)
    {
        cout << a <<" jest rowne 5"<<endl;

    }
    if(a<5)
    {
        cout << a <<" jest mniejsza od 5"<<endl;

    }
    cout << "Hello world!" << endl;
    return 0;
}
