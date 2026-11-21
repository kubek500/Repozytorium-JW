#include <iostream>

using namespace std;

int main()
{
    int n,a,s;
    float sr;
    cout<< "Podaj liczbe "<<endl;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cout<< "Podaj liczbe "<<endl;
        cin >> a;
        s +=a;
    }
    sr= (float)s/n;

    cout << "Suma = " << s << endl;
    cout << "Srednia = " << sr << endl;

    return 0;
}
