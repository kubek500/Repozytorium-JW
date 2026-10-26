#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Podaj 2 liczby " << endl;
    cin>>a>>b;
    if (b==0)
    {
        cout << "nie dzieli sie przez 0 "<<endl;
    }
    else if (a%b==0)
    {
        cout <<"podzielna"<<endl;
    }
    else
    {
        cout <<"Niepodzielna"<<endl;
    }


    return 0;
}
